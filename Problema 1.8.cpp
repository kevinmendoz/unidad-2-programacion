#include <iostream>  
#include <cmath>     

using namespace std;

int main() {
    
    float X1, Y1, X2, Y2, DIS;

    
    cout << "Introduce la coordenada X1 del punto P1: ";
    cin >> X1;
    cout << "Introduce la coordenada Y1 del punto P1: ";
    cin >> Y1;
    cout << "Introduce la coordenada X2 del punto P2: ";
    cin >> X2;
    cout << "Introduce la coordenada Y2 del punto P2: ";
    cin >> Y2;

    
    DIS = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

    
    cout << "La distancia entre los puntos P1 y P2 es: " << DIS << endl;

    return 0;  
}

