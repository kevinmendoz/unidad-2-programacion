#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int NUM, CUA, CUB;
    
    // Mensaje de bienvenida
    cout << "Hola, este es el programa 1.9, que calcula el cuadrado y el cubo de un numero entero positivo" << endl;
    
    // Se pide el valor de NUM
    cout << "Por favor ingrese el valor de NUM: " << endl;
    
    // Se asigna el valor de NUM
    cin >> NUM;
    
    // Resolvemos la fórmula del problema
    CUA = NUM * NUM;
    CUB = NUM * CUA;
    
    // Mostramos los resultados de CUA y CUB en pantalla
    cout << "El cuadrado de " << NUM << " es: " << CUA << " y el cubo es: " << CUB << endl;

    return 0;
}


