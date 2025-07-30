#include <iostream>
using namespace std;
int main()
{
    int c;
    float promedio;
    float suma;
    float x;
    cout << "El programa finaliza cuando se ingrese un cero 0" << endl;
    x = 1;
    suma = 0;
    c = 0;
    promedio = 0;
    while (x != 0)
    {
        cout << "Ingresa el sueldo" << endl;
        cin >> x;
        if (x != 0)
        {
            suma = suma + x;
            c = c + 1;
            promedio = suma / c;
        }
    }
    cout << "El sueldo promedio es: $" << promedio << endl;
    return 0;
}
