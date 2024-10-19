#include <iostream>  

using namespace std;

int main() {
    // Declaración de variables (de tipo real o "float" para decimales)
    float GAL;   // Galones surtidos
    float TOTAL; // Total a pagar

    // 1. Leer el número de galones surtidos
    cout << "Introduce la cantidad de galones surtidos: ";
    cin >> GAL;

    // 2. Calcular el total a pagar: TOTAL = GAL * 3.785 * 8.20
    TOTAL = GAL * 3.785 * 8.20;

    // 3. Escribir el total a pagar
    cout << "El total a pagar es: $" << TOTAL << endl;

    return 0;  // Fin del programa
}


