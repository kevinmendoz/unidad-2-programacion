#include <iostream>  
#include <cmath>     

using namespace std;

int main() {
    
    float L1, L2, L3, S, AREA;

    cout << "Introduce el lado L1 del tri�ngulo: ";
    cin >> L1;
    cout << "Introduce el lado L2 del tri�ngulo: ";
    cin >> L2;
    cout << "Introduce el lado L3 del tri�ngulo: ";
    cin >> L3;

    S = (L1 + L2 + L3) / 2;
    AREA = sqrt(S * (S - L1) * (S - L2) * (S - L3));

    cout << "El �rea del tri�ngulo es: " << AREA << endl;

    return 0;  
}

