#include <iostream>  

using namespace std;

int main() {
    // Declaración de variables
    int DIAS;       
    float SEG;      

    cout << "Introduce el numero de dias: ";
    cin >> DIAS;

    SEG = DIAS * 24 * 60 * 60;

    cout << "En " << DIAS << " dias, hay " << SEG << " segundos." << endl;

    return 0; 
}

