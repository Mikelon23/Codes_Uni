#include <iostream>

using namespace std;

// Dado un arreglo de números enteros y su dimension,
// calcular la cantidad de valores que cumplen con las siguientes
// condiciones:
// - Son números primos.
// - Son números positivos.
// - Son números negativos.
// - Son multiplos de 4.
// - Son divisores de 24.

//Calcula la cantidad de números primos en un vector.
//Vector de números enteros.
//Dimension del vector.
//Cantidad de números primos.
int Primos(int v[], int len)
{
  int cont = 0, divs, div;

  // Recorrer el vector
  for (int i = 0; i < len; i++)
  {
    // Inicializar la cantidad de divisores en 0
    divs = 0;
    
    // Calcular la cantidad de divisores
    for (int div = 1; div <= v[i]; div++)
    {
      if (v[i] % div == 0)
        divs++;
    }

    // Si tiene dos divisores, es primo
    if (divs == 2)
      cont++;
  }

  return cont;
}

//Calcula la cantidad de números positivos en un vector.
//Vector de números enteros.
//Dimension del vector.
//Cantidad de números positivos.
int Positivos(int v[], int len)
{
  int cont = 0;

  for (int i = 0; i < len; i++)
  {
    if (v[i] > 0)
      cont++;
  }

  return cont;
}

//Calcula la cantidad de números negativos en un vector.
//Vector de números enteros.
//Dimension del vector.
//Cantidad de números negativos.
int Negativos(int v[], int len)
{
  int cont = 0;

  for (int i = 0; i < len; i++)
  {
    if (v[i] < 0)
      cont++;
  }

  return cont;
}

//Calcula la cantidad de números multiplos de 4 en un vector.
//Vector de números enteros.
//Dimension del vector.
//Cantidad de números multiplos de 4.
int Multiplos4(int v[], int len)
{
  int cont = 0;

  for (int i = 0; i < len; i++)
  {
    if (v[i] % 4 == 0)
      cont++;
  }

  return cont;
}

//Calcula la cantidad de números divisores de 24 en un vector.
//Vector de números enteros.
//Dimension del vector.
//Cantidad de números divisores de 24.
int Divisores24(int v[], int len)
{
  int cont = 0;

  for (int i = 0; i < len; i++)
  {
    if (24 % v[i] == 0)
      cont++;
  }

  return cont;
}

int main()
{
  // Declaracion de variables
  int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  // Cantidad de números primos
  cout << "Cantidad de numeros primos: " << Primos(a, 10) << endl;

  // Cantidad de números positivos
  cout << "Cantidad de numeros positivos: " << Positivos(a, 10) << endl;

  // Cantidad de números negativos
  cout << "Cantidad de numeros negativos: " << Negativos(a, 10) << endl;

  // Cantidad de números multiplos de 4
  cout << "Cantidad de numeros multiplos de 4: " << Multiplos4(a, 10) << endl;

  // Cantidad de números divisores de 24
  cout << "Cantidad de numeros divisores de 24: " << Divisores24(a, 10) << endl;

  return 0;
}