#include <iostream>
#include "list.h"

using namespace std;

// Dado un programa que permita ingresar n valores en una lista
// de números enteros, sin ningún orden particular, escriba las
// funciones necesarias para:

// + Generar una nueva lista en la que se inserten los valores
//   de la lista original con las siguientes condiciones:
// - Si el valor es par, se inserta al final de la lista.
// - Si el valor es impar, se inserta al inicio de la lista.
// - Si el valor es 0, se inserta en la mitad de la lista, dada
//   una posición.
// - El 0 no se podrá insertar al inicio ni al final de la lista,
//   si se da el caso de no tener valores que rodeen al 0, no se
//   realizará la inserción.

// Funcion para ordenar la lista 2.
void Ordenar(Lista<int> *lst1, Lista<int> *lst2)
{
  auto *recorrido = new Lista<int>::Nodo();
  int impares = 0;

  // obtener el primer elemento de la lista original.
  recorrido = lst1->Raiz();

  // recorrer la lista original.
  for (int total = 0; recorrido != NULL; total++)
  {
    // caso 0.
    if (recorrido->info == 0)
    {
      // si la cantidad total de elementos en la lista es mayor a la
      // cantidad de valores impares (ubicados al inicio), significa
      // que tambien existen valores pares (ubicados al final).
      // En ese caso usamos el valor de impares como la posicion
      // media para insertar valores 0.
      if (total > impares)
        lst2->InsertarMedio(recorrido->info, impares);
      else
        total--; // disminuir en 1 el total de elementos.
      
      // se dismunuye en 1 el total de elementos debido a que
      // no se inserta el valor 0.
    }
    else if (recorrido->info % 2 == 0)
    {
      // caso par.
      lst2->InsertarFinal(recorrido->info);
    }
    else
    {
      // caso impar.
      lst2->InsertarInicio(recorrido->info);
      // incrementar la cantidad de valores impares.
      impares++;
    }

    recorrido = recorrido->sig;
  }
}

// Funcion principal.
int main()
{
  auto *lt1 = new Lista<int>(),
       *lt2 = new Lista<int>();
  int n, val;

  system("cls");

  // ingresar cantidad de elementos.
  cout << "Cantidad de elementos: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    // ingresar valores.
    cout << "Valor " << i + 1 << ": ";
    cin >> val;

    // insertar valores en la lista.
    lt1->InsertarFinal(val);
  }

  cout << "Lista original:" << endl;
  lt1->MostrarLista();

  // ordenar la lista 2.
  Ordenar(lt1, lt2);

  cout << "Lista ordenada:" << endl;
  lt2->MostrarLista();

  return 0;
}