/*El presentador de un programa de entretenimiento cuenta con una lista de
participantes, que se someten a un sorteo para ganar un automóvil.

El presentador introduce al principio del programa en un bolillero, una bolilla
por cada participante, conteniendo cada una el nombre de esos participantes.
Luego procede a girar el bolillero, y va extrayendo de una en una esas bolillas.
Aquellos participantes que son nombrados, se quedan afuera. El último que queda en el
bolillero gana el auto. Desarrolle las estructuras de datos y las funciones necesarias para:
- Representar al bolillero, y que permita Extraer ("borrar") al azar del bolillero el
nombre de una de las n personas que están en él, y retornar y mostrar ese nombre
- Veriﬁcar si en el bolillero queda una sola persona, y en caso de que así sea, proclamarla
ganadora con un mensaje. En caso contrario, informar que aún quedan varios candidatos.*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
class Nodo
{
public:
    string nom;
    Nodo *sig;
    Nodo();
};
Nodo::Nodo()
{
    sig = NULL;
}
class Bolillero
{
public:
    Nodo *nuevo;
    Bolillero();
    void insertar(string nom);
    void mostrar();
    void extraer();
    void ganador();
};
Bolillero::Bolillero()
{
    nuevo = NULL;
}
void Bolillero::insertar(string nom)
{
    nuevo = new Nodo();
    nuevo->nom = nom;
    nuevo->sig = NULL;
    if (nuevo == NULL)
    {
        nuevo = nuevo;
    }
    else
    {
        nuevo->sig = nuevo;
        nuevo = nuevo;
    }
}
void Bolillero::mostrar()
{
    Nodo *aux = nuevo;
    while (aux != NULL)
    {
        cout << aux->nom << endl;
        aux = aux->sig;
    }
}
void Bolillero::extraer()
{
    Nodo *aux = nuevo;
    if (aux->nom == aux->nom)
    {
        nuevo = aux->sig;
        delete aux;
    }
    else
    {
        while (aux->sig->nom != aux->nom)
        {
            aux = aux->sig;
        }
        Nodo *aux2;
        aux2 = aux->sig;
        aux->sig = aux2->sig;
        delete aux2;
    }
}
void Bolillero::ganador()
{
    Nodo *aux = nuevo;
    if (aux->sig == NULL)
    {
        cout << "El ganador es: " << aux->nom << endl;
    }
    else
    {
        cout << "Aun quedan varios candidatos" << endl;
    }
}
int main(){
    Bolillero *bolillero = new Bolillero();
    int n;
    string nom;
    cout << "Ingrese la cantidad de participantes: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el nombre del participante: ";
        cin >> nom;
        bolillero->insertar(nom);
    }
    while (bolillero->nuevo->sig != NULL)
    {
        bolillero->extraer();
        bolillero->ganador();
    }
    return 0;
}