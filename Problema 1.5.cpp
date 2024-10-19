#include <iostream>  // Para la entrada y salida est�ndar
#include <cmath>     // Para usar la funci�n pow() (potencias)

using namespace std;

int main() {
    // Declaraci�n de variables (tipo real o "float" para decimales)
    float RADIO, ALTU, VOL, ARE;

    // 1. Leer el radio y la altura del cilindro
    cout << "Introduce el radio del cilindro: ";
    cin >> RADIO;
    cout << "Introduce la altura del cilindro: ";
    cin >> ALTU;

    // 2. Calcular el volumen: VOL = 3.141592 * (RADIO^2) * ALTU
    VOL = 3.141592 * pow(RADIO, 2) * ALTU;

    // Calcular el �rea lateral: ARE = 2 * 3.141592 * RADIO * ALTU
    ARE = 2 * 3.141592 * RADIO * ALTU;

    // 3. Escribir el volumen y el �rea lateral
    cout << "El volumen del cilindro es: " << VOL << endl;
    cout << "El area lateral del cilindro es: " << ARE << endl;

    return 0;  // Fin del programa
}

