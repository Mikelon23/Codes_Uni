#include <iostream>

using namespace std;

// Dada una matriz binaria y su dimension, calcular la cantidad
// de 1s y 0s que existen en cada fila.

//Lee una matriz de enteros por teclado
//Matriz a leer
//Cantidad de filas
//Cantidad de columnas
void Leer(int mat[][5], int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << "Ingrese el valor de la posicion [" << i << "][" << j << "]: ";
      cin >> mat[i][j];
    }
  }
}

//Muestra una matriz de enteros por pantalla
//Matriz a mostrar
//Cantidad de filas
//Cantidad de columnas
void Mostrar(int mat[][5], int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
}

/// @brief Cuenta la cantidad de 1s y 0s en cada fila de una matriz
/// @param mat Matriz a analizar
/// @param r Cantidad de filas
/// @param c Cantidad de columnas
void Contar1s0s(int mat[][5], int r, int c)
{
  int cont1s, cont0s;

  for (int i = 0; i < r; i++)
  {
    cont1s = 0;
    cont0s = 0;

    for (int j = 0; j < c; j++)
    {
      if (mat[i][j] == 1)
        cont1s++;
      else if (mat[i][j] == 0)
        cont0s++;
    }

    cout << "Fila " << i + 1 << ": " << cont1s << " 1s y " << cont0s << " 0s" << endl;
  }
}

int main()
{
  int mat[5][5];

  // Leer la matriz por teclado
  Leer(mat, 5, 5);
  cout << endl;

  // Mostrar la matriz
  Mostrar(mat, 5, 5);
  // Contar la cantidad de 1s y 0s en cada fila
  Contar1s0s(mat, 5, 5);

  return 0;
}