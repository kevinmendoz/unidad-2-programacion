#include <iostream>
using namespace std;

int main() {
    int MAT;
    float CAL1, CAL2, CAL3, CAL4, CAL5, PRO;

    // Leer las calificaciones
    cout << "Ingresa las 5 calificaciones: ";
    cin >> CAL1 >> CAL2 >> CAL3 >> CAL4 >> CAL5;

    // Leer la matr�cula
    cout << "Ingresa el n�mero de matr�cula: ";
    cin >> MAT;

    // Calcular el promedio
    PRO = (CAL1 + CAL2 + CAL3 + CAL4 + CAL5) / 5;

    // Mostrar la matr�cula y el promedio
    cout << "Matr�cula: " << MAT << endl;
    cout << "Promedio: " << PRO << endl;

    return 0;
}

