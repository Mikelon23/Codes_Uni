#include <iostream>

using namespace std;

// Leer por teclado los elementos de dos matrices de enteros y
// crea otra matriz con la suma de las dos. Se usarán tres funciones.
// Función leerMatriz que se usará dos veces para leer por teclado los
// datos de cada matriz.
// Función sumarMatrices que realiza la suma de las dos matrices.
// Función mostrarResultado que se usa tres veces para mostrar por
// pantalla las tres matrices.

//Lee por teclado los elementos de una matriz de enteros.
//Matriz de enteros. 
//Número de filas. 
//Número de columnas. 
void Leer(int mat[][4], int r, int c)
{
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
    {
      cout << "Elemento [" << i << "][" << j << "]: ";
      cin >> mat[i][j];
    }
}

//Suma dos matrices de enteros y guarda el resultado en otra.
//Matriz resultado.
//Número de filas. 
//Número de columnas. 
void Sumar(int matA[][4], int matB[][4], int matC[][4], int r, int c)
{
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      matC[i][j] = matA[i][j] + matB[i][j];
}

//Muestra por pantalla los elementos de una matriz de enteros.
//Matriz de enteros.
//Número de filas.
//Número de columnas.
void Mostrar(int mat[][4], int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
      cout << mat[i][j] << " ";
    cout << endl;
  }
}

int main()
{
  int mat1[3][4], mat2[3][4], mat3[3][4];

  // Leer las dos matrices
  Leer(mat1, 3, 4);
  Leer(mat2, 3, 4);

  // Sumar las dos matrices
  Sumar(mat1, mat2, mat3, 3, 4);

  // Mostrar las tres matrices

  cout << "Matriz 1:" << endl;
  Mostrar(mat1, 3, 4);

  cout << "Matriz 2:" << endl;
  Mostrar(mat2, 3, 4);

  cout << "Matriz 3:" << endl;
  Mostrar(mat3, 3, 4);

  return 0;
}