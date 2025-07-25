#include <iostream>
#include <math.h>

#include "lista.h"
#include "pila.h"

using namespace std;

// Inserta un elemento en la lista
// en orden ascendente.
void InsertarOrdenado(Lista<int> *lista, int item)
{
  auto *recorrido = new Lista<int>::Nodo();
  int i;

  recorrido = lista->Raiz();

  for (i = 0; recorrido != NULL; i++)
  {
    if (recorrido->info > item)
      break;

    recorrido = recorrido->sig;
  }

  lista->InsertarMedio(item, i);
}

void MostrarMayor(Lista<int> *lista)
{
  auto *recorrido = new Lista<int>::Nodo();
  int mayor;

  recorrido = lista->Raiz();

  // si el primer elemento es NULL
  // significa que la lista está vacia,
  // por ende no hay nada que hacer.
  if (recorrido == NULL)
    return;

  mayor = recorrido->info;

  while (recorrido != NULL)
  {
    if (recorrido->info > mayor)
      mayor = recorrido->info;

    recorrido = recorrido->sig;
  }

  cout << "El valor mayor es: " << mayor << endl;
}

void MostrarMenor(Lista<int> *lista)
{
  auto *recorrido = new Lista<int>::Nodo();
  int menor;

  recorrido = lista->Raiz();

  // si el primer elemento es NULL
  // significa que la lista está vacia,
  // por ende no hay nada que hacer.
  if (recorrido == NULL)
    return;

  menor = recorrido->info;

  while (recorrido != NULL)
  {
    if (recorrido->info < menor)
      menor = recorrido->info;

    recorrido = recorrido->sig;
  }

  cout << "El valor menor es: " << menor << endl;
}

void MostrarPromedio(Lista<int> *lista)
{
  auto *recorrido = new Lista<int>::Nodo();
  double promedio;
  int i, sum = 0;

  recorrido = lista->Raiz();

  // si el primer elemento es NULL
  // significa que la lista está vacia,
  // por ende no hay nada que hacer.
  if (recorrido == NULL)
    return;

  for (i = 1; recorrido != NULL; i++)
  {
    sum += recorrido->info;

    recorrido = recorrido->sig;
  }

  promedio = sum / i;

  cout << "El promedio es: " << promedio << endl;
}

void Invertir(Lista<int> *lista)
{
  // es dificil invertir una lista
  // sin usar una pila, por lo que
  // se usará una pila para invertir
  // la lista.
  auto *pila = new Pila<int>();

  auto *rec_lt = new Lista<int>::Nodo();

  rec_lt = lista->Raiz();

  while (rec_lt != NULL)
  {
    pila->Insertar(rec_lt->info);

    rec_lt = rec_lt->sig;
  }

  // se podría presentar la pila, pero nos piden
  // generar una nueva lista, por lo que
  // deberemos pasar estos valores nuevamente
  // a una pila, pero ya estarán invertidos.
  //pila->MostrarPila();

  auto *lti = new Lista<int>();

  auto *rec_pil = new Pila<int>::Nodo();

  rec_pil = pila->Raiz();

  while (rec_pil != NULL)
  {
    lti->InsertarFinal(rec_pil->info);

    rec_pil = rec_pil->sig;
  }

  lti->MostrarLista();
  // problema resuelto :)
}

void Elevar(Lista<int> *lista, int pot)
{
  auto *recorrido = new Lista<int>::Nodo();
  auto *lte = new Lista<int>();

  recorrido = lista->Raiz();

  while (recorrido != NULL)
  {
    lte->InsertarFinal(pow(recorrido->info, pot));

    recorrido = recorrido->sig;
  }

  lte->MostrarLista();
}

int main()
{
  auto *lt = new Lista<int>();
  int n, val;

  system("cls");

  cout << "Cantidad de elementos: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Valor: ";
    cin >> val;
    
    InsertarOrdenado(lt, val);
  }

  cout << "Lista original ordenada: " << endl;
  lt->MostrarLista();

  MostrarMayor(lt);
  MostrarMenor(lt);
  MostrarPromedio(lt);

  cout << "Lista invertida: " << endl;
  Invertir(lt);

  cout << "Lista elevada al cuadrado: " << endl;
  Elevar(lt, 2);

  return 0;
}