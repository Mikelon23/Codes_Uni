#include <iostream>

using namespace std;

// Dada una matriz de números enteros positivos y su dimension,
// indicar el valor mayor y el valor menor de cada columna.

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
      cout << mat[i][j] << " ";

    cout << endl;
  }
}

//Indica el mayor y el menor de cada columna de una matriz
//Matriz a analizar
//Cantidad de filas
//Cantidad de columnas
void MayorMenor(int mat[][5], int r, int c)
{
  int mayor, menor;

  for (int j = 0; j < c; j++)
  {
    mayor = mat[0][j];
    menor = mat[0][j];

    for (int i = 0; i < r; i++)
    {
      if (mat[i][j] > mayor)
        mayor = mat[i][j];

      if (mat[i][j] < menor)
        menor = mat[i][j];
    }

    cout << "Mayor de la columna " << j << ": " << mayor << endl;
    cout << "Menor de la columna " << j << ": " << menor << endl;
  }
}

int main()
{
  int mat[5][5];

  Leer(mat, 5, 5);

  Mostrar(mat, 5, 5);
  MayorMenor(mat, 5, 5);

  return 0;
}