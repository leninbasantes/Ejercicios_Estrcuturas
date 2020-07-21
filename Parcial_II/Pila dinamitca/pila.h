#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int valor;
    struct Nodo *siguiente;
};
typedef Nodo *pNodo;
typedef Nodo *Pila;

void Push(Pila *pila, int v)
{

    pNodo nuevo;
    //Reserva memoria del nodo usando malloc
    nuevo = (pNodo)malloc(sizeof(Nodo));
    if (nuevo != NULL)
    {
        nuevo->valor = v;
        cout << "\nElemento agregado: " << nuevo->valor << endl;
        nuevo->siguiente = *pila;
        *pila = nuevo; //El puntero cambie su direccion al nuevo elemento
    }
    else
    {
        cout << "\nNo se puedo reservar memoria" << endl;
    }
}

void imprimir(Pila *pila)
{
    pNodo nodo;
    nodo = *pila;
    if (!nodo)
    {
        cout << "\nPila vacia. " << endl;
        return;
    }
    cout << "\nPila " << endl;
    while (nodo != NULL)
    {
        cout << "\nElemento: " << nodo->valor << endl;
        nodo = nodo->siguiente;
    }
}

int Pop(Pila* pila){
    pNodo nodo;
    int v;
    nodo = *pila;
    if(!nodo){
        cout<< "\nPila Vacia. "<< endl;
        return 0;
    }
    *pila = nodo->siguiente;
    v = nodo-> valor;
    free(nodo);
    return v;
}
