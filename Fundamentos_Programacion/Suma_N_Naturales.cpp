/*suma de los primeros N numeros naturales*/
#include <iostream>
using namespace std;

int main()
{
    // definicion de variables
    int N, i = 1, acumulador = 0;
    // ingreso de datos
    cout << "ingrese el numero natural tope para sumarlo con todos los naturales menores: ";
    cin >> N;
    while (N < 1)
    {
        system("cls");
        cout << "ingrese el numero tope: (numero natural tope para sumarlo con todos los naturales menores: ";
        cin >> N;
    }
    // proceso
    while (i <= N)
    {
        acumulador = acumulador + i; // suma = suma + cont;
        i++;
    }
    // salida de resultados
    cout << "la suma de los " << N << " primero numero naturales es = " << acumulador << endl;
    system("pause");
    return 0;
}
