#include <iostream>

using namespace std;

int main()
{
    // Problema 1.1
    // Programa donde se da el costo de un articulo vendido y la cantidad a pagar entregada por el cliente, calcula el cambio que se debe entregar
    
    float PRECIOPRODUCTO, DEVOLUCION;
    float PAGO;
    
    // Se pide el costo del producto
    cout << "Escribe el costo del articulo: " << endl;
    cin >> PRECIOPRODUCTO;
    
    // Se pide el pago del cliente
    cout << "Escribe el pago del articulo: " << endl;
    cin >> PAGO;
    
    // Se calcula el cambio a devolver
    DEVOLUCION = PAGO - PRECIOPRODUCTO;
    
    // Se muestra el resultado del cambio
    cout << "El cambio del cliente es: " << DEVOLUCION << endl;

    return 0;
}

