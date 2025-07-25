#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
class Nodo
{
public:
    Nodo *izquierda;
    Nodo *derecha;
    int dato;
    Nodo();
};
Nodo::Nodo()
{
    izquierda = NULL;
    derecha = NULL;
}
class Arbol
{
public:
    Nodo *raiz;
    Arbol();
    void insertar(int dato);
    void imprimir();
    int alturaArbol(Nodo *raiz);
    int numeroNodos(Nodo *raiz);
    int numeroHojas(Nodo *raiz);
};
Arbol::Arbol()
{
    raiz = NULL;
}
void Arbol::insertar(int dato)
{
    Nodo *nuevo = new Nodo();
    nuevo->dato = dato;
    if (raiz == NULL)
    {
        raiz = nuevo;
    }
    else
    {
        Nodo *aux = raiz;
        Nodo *padre;
        while (aux != NULL)
        {
            padre = aux;
            if (dato < aux->dato)
            {
                aux = aux->izquierda;
            }
            else
            {
                aux = aux->derecha;
            }
        }
        if (dato < padre->dato)
        {
            padre->izquierda = nuevo;
        }
        else
        {
            padre->derecha = nuevo;
        }
    }
}
void Arbol::imprimir()
{
    Nodo *aux = raiz;
    while (aux != NULL)
    {
        cout << aux->dato << endl;
        aux = aux->derecha;
    }
}

int alturaArbol(Nodo *raiz) {
if (raiz == NULL) {
  return 0;
}

int altizq = alturaArbol(raiz->izquierda);
int altder = alturaArbol(raiz->derecha);

if (altizq > altder) {
  return altizq + 1;
} else {
  return altder + 1;
}
}

int numeroNodos(Nodo *raiz) {
if (raiz == NULL) {
  return 0;
}

int nodosizq = numeroNodos(raiz->izquierda);
int nodosder = numeroNodos(raiz->derecha);

return nodosizq + nodosder + 1;
}

int numeroHojas(Nodo *raiz) {
if (raiz == NULL) {
  return 0;
}

if (raiz->izquierda == NULL && raiz->derecha == NULL) {
  return 1;
}

int hojasizq = numeroHojas(raiz->izquierda);
int hojasder = numeroHojas(raiz->derecha);

return hojasizq + hojasder;
}
int main()
{
    Arbol arbol;
    int numero, dat;
    cout << "Ingrese los datos del arbol: ";
    cin >> numero;
    for (int i = 0; i < numero; i++)
    {
        cin >> dat;
        arbol.insertar(dat);
        arbol.imprimir();
    }
    cout << "Altura del arbol: " << alturaArbol(arbol.raiz) << endl;
    cout << "Numero de nodos: " << numeroNodos(arbol.raiz) << endl;
    cout << "Numero de hojas: " << numeroHojas(arbol.raiz) << endl;
    return 0;
}
