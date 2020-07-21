#include <iostream>
#include "pila.h"
using namespace std;

int main()
{
    cout << "PIlas con clases\n";
    pila Pila;
    Pila.push(20);
    cout << "Push: " << Pila.getUltimo()->getValor();
    system("pause");
    Pila.push(50);
    cout << "Push: " << Pila.getUltimo()->getValor();
    system("pause");
    Pila.push(10);
    cout << "Push: " << Pila.getUltimo()->getValor();
    system("pause");
    Pila.push(500);
    cout << "Push: " << Pila.getUltimo()->getValor();
    system("pause");

    cout << "Pop: " << Pila.getUltimo()->getValor();
    Pila.pop();
    cout << "Pop: " << Pila.getUltimo()->getValor();
    Pila.pop();
    cout << "Pop: " << Pila.getUltimo()->getValor();
    Pila.pop();
}