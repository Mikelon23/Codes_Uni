#include <iostream>
#include <math.h>
// incluir la clase lista
#include "list.h"

using namespace std;

// Verifica si la lista está vacía
bool EsVacia(Lista<int> *lst)
{
  return lst->Raiz() == NULL;
}

// Inserta un elemento en la lista
// en orden ascendente.
void InsertarOrdenado(Lista<int> *lst, int item)
{
  auto *recorrido = new Lista<int>::Nodo();
  int i;

  recorrido = lst->Raiz();

  for (i = 0; recorrido != NULL; i++)
  {
    if (recorrido->info > item)
      break;

    recorrido = recorrido->sig;
  }

  lst->InsertarMedio(item, i);
}

// Muestra el mayor elemento de la lista
void MostrarMayor(Lista<int> *lst)
{
  auto *recorrido = new Lista<int>::Nodo();
  int mayor;

  recorrido = lst->Raiz();

  // comprobar si la lista está vacía
  // si lo está, no hay nada que hacer.
  if (EsVacia(lst))
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

// Muestra el menor elemento de la lista
void MostrarMenor(Lista<int> *lst)
{
  auto *recorrido = new Lista<int>::Nodo();
  int menor;

  recorrido = lst->Raiz();

  // comprobar si la lista está vacía
  // si lo está, no hay nada que hacer.
  if (EsVacia(lst))
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

// Muestra el promedio de los elementos de la lista
void MostrarPromedio(Lista<int> *lst)
{
  auto *recorrido = new Lista<int>::Nodo();
  double promedio;
  int i, sum = 0;

  recorrido = lst->Raiz();

  // comprobar si la lista está vacía
  // si lo está, no hay nada que hacer.
  if (EsVacia(lst))
    return;

  for (i = 1; recorrido != NULL; i++)
  {
    sum += recorrido->info;

    recorrido = recorrido->sig;
  }

  promedio = sum / i;

  cout << "El promedio es: " << promedio << endl;
}

// Invierte la lista
void Invertir(Lista<int> *lst)
{
  // nodo que recorrerá la lista
  auto *recorrido = new Lista<int>::Nodo();
  // lista invertida
  auto *lti = new Lista<int>();

  recorrido = lst->Raiz();

  while (recorrido != NULL)
  {
    // insertar al inicio de la lista invertida
    // el valor del nodo actual de la lista original
    lti->InsertarInicio(recorrido->info);

    recorrido = recorrido->sig;
  }
  
  // mostrar la lista invertida
  lti->MostrarLista();
}

// Eleva cada elemento de la lista
void Elevar(Lista<int> *lst, int pot)
{
  auto *recorrido = new Lista<int>::Nodo();
  auto *lte = new Lista<int>();

  recorrido = lst->Raiz();

  while (recorrido != NULL)
  {
    lte->InsertarFinal(pow(recorrido->info, pot));

    recorrido = recorrido->sig;
  }

  lte->MostrarLista();
}

// Función principal
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