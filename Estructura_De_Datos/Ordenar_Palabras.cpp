#include <iostream>

using namespace std;

void Ingresar(int v[], int len)
{
  for (int i = 0; i < len; i++)
  {
    cout << "Ingrese el valor #" << i + 1 << ": ";
    cin >> v[i];
  }
}

void Mostrar(int v[], int len)
{
  for (int i = 0; i < len; i++)
    cout << v[i] << " ";
  
  cout << endl;
}

void OrdenarAscendente(int v[], int len)
{
  int aux;
  // B U R B U J A
  for (int k = 1; k < len; k++)
  {
    for (int i = 0; i < len; i++)
    {
      if (v[i] > v[i + 1])
      {
        aux = v[i];
        v[i] = v[i + 1];
        v[i + 1] = aux;
      }
    }
  }
}

void OrdenarDescendente(int v[], int len)
{
  int aux;
  // B U R B U J A
  for (int k = 1; k < len; k++)
  {
    for (int i = 0; i < len; i++)
    {
      if (v[i] < v[i + 1])
      {
        aux = v[i];
        v[i] = v[i + 1];
        v[i + 1] = aux;
      }
    }
  }
}

void Ordenar(char v[], int len)
{
  char aux;
  // B U R B U J A
  for (int k = 1; k < len; k++)
  {
    for (int i = 0; i < len; i++)
    {
      if (int(v[i]) > int(v[i + 1]))
      {
        aux = v[i];
        v[i] = v[i + 1];
        v[i + 1] = aux;
      }
    }
  }
}

/*
int main()
{
  int nums[10];
  int size = sizeof(nums) / sizeof(nums[0]);

  Ingresar(nums, size);

  // estetica, nada mas...
  system("cls");

  Mostrar(nums, size);

  OrdenarAscendente(nums, size);
  Mostrar(nums, size);

  OrdenarDescendente(nums, size);
  Mostrar(nums, size);

  return 0;
}
*/

int main()
{
  char letters[10];
  int size = sizeof(letters) / sizeof(letters[0]);

  cout << "Ingrese un palabra: ";
  cin >> letters;

  Ordenar(letters, size);

  for (int i = 0; i < size; i++)
    cout << letters[i];
}