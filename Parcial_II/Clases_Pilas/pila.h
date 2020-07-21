#include <stdlib.h>
class nodo
{
private:
    int valor;
    nodo* siguiente;
public:
    nodo(int v, nodo* sig = NULL){
        valor = v;
        siguiente = sig;
    }
    int getValor();  
    friend class pila;
};
int nodo::getValor(){
    return valor;
}

typedef nodo* pNodo;
class pila
{
private:
    pNodo ultimo;     
public:
    pila(): ultimo(NULL){};
    ~pila();

    void push(int v);
    void pop();
    pNodo getUltimo();
};

pila::~pila()
{
    pNodo aux;
    while (ultimo)
    {
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}
void pila::push(int v){
    pNodo nuevo;
    nuevo = new nodo(v, ultimo);
    ultimo = nuevo;
}
void pila::pop(){
    pNodo nodo;
    if(!ultimo) return;
    nodo = ultimo;
    ultimo = nodo->siguiente;
    delete nodo;
}
pNodo pila::getUltimo(){
    return ultimo;
}
