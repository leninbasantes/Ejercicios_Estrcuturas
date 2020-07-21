#include <iostream>
#include "pila.h"
using namespace std;

int main()
{
    Pila pila = NULL; //declaro sin puntero porque en pilaDinamica.h ya le convierto en puntero
    cout << "\nPila dinamica\n";
    Push(&pila, 20);
    imprimir(&pila);
    system("pause");

    Push(&pila, 30);
    imprimir(&pila);
    system("pause");

    Push(&pila, 40);
    imprimir(&pila);
    system("pause");

    Push(&pila, 50);
    imprimir(&pila);
    system("pause");

    cout << "Se elimina: " << Pop(&pila);
    imprimir(&pila);
    system("pause");

    cout << "Se elimina: " << Pop(&pila);
    imprimir(&pila);
    system("pause");

    cout << "Se elimina: " << Pop(&pila);
    imprimir(&pila);
    system("pause");

    cout << "Se elimina: " << Pop(&pila);
    imprimir(&pila);
    system("pause");
}