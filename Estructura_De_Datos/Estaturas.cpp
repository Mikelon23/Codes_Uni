#include <iostream>

using namespace std;

// Leer las estaturas de los alumnos de una clase y se realizan
// con ellos distintos cálculos. Se utilizan las siguientes funciones:
// - Función leer: Lee por teclado las estaturas de los alumnos y las
//   guarda en el array.
// - Función estatura_media: recibe el array y calcula y devuelve la
//   estatura media.
// - Función max_min: Calcula y devuelve la estatura mayor y la menor.
// - Recibe el array y los dos parámetros donde devolver la estatura
//   mayor y la menor.
// - Función cuantos_mayor_menor_media: Calcula y devuelve cuantos
//   alumnos hay con estatura mayor que la media y cuántos con estatura menor.
//   Recibe el array de estaturas, la estatura media y los parámetros
//   donde devolver los resultados.
// - Función mostrar_resultados: recibe el array y todos los datos
//   calculados y los muestra por pantalla. Solo el array pasa por
//   referencia (por defecto), los demás parámetros pasan por valor.

//Lee por teclado las estaturas de los alumnos y las
//guarda en el array.
//Array de enteros.
//Longitud del array.
void Leer(float arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    cout << "Estatura del alumno " << i+1 << ": ";
    cin >> arr[i];
  }
}

//Calcula y devuelve la estatura media.
//Array de enteros.
//Longitud del array.
//Estatura media.
float Media(float arr[], int len)
{
  float suma = 0;

  for (int i = 0; i < len; i++)
    suma += arr[i];

  return suma / len;
}

//Calcula y devuelve la estatura mayor y la menor.
//Array de enteros.
//Longitud del array.
//Estatura mayor.
//Estatura menor.
void ContarMayorMenor(float arr[], int len, float media, float &mayor, float &menor)
{
  for (int i = 0; i < len; i++)
  {
    if (arr[i] > media)
      mayor++;
    else if (arr[i] < media)
      menor++;
  }
}

//Muestra por pantalla los resultados.
//Array de enteros.
//Longitud del array.
//Estatura media.
//Estatura mayor.
//Estatura menor.
void Mostrar(float arr[], int len, float media, float mayor, float menor)
{
  cout << "Estaturas: ";
  for (int i = 0; i < len; i++)
    cout << arr[i] << " ";
  cout << endl;

  cout << "Media: " << media << endl;
  cout << "Mayores: " << mayor << endl;
  cout << "Menores: " << menor << endl;
}

int main()
{
  float media, mayor = 0, menor = 0;
  int n;

  cout << "Introduce el numero de alumnos: ";
  cin >> n;

  // Declaracion de un array de n elementos.
  float estaturas[n];
  // Calculo de la longitud del array.
  int d = sizeof(estaturas) / sizeof(estaturas[0]);

  Leer(estaturas, d);

  // Calcular la media y almacenarla en la variable media.
  media = Media(estaturas, d);

  ContarMayorMenor(estaturas, d, media, mayor, menor);

  // Mostrar los resultados.
  Mostrar(estaturas, d, media, mayor, menor);

  return 0;
}