#include <iostream>
using namespace std;
int main()
{
    int decenas;
    int n;
    int unidades;
    cout << "Ingresa un numero de dos cifras" << endl;
    cin >> n;
    if (n > 9 && n < 100)
    {
        unidades = n % 10;
        n = int(n / 10);
        decenas = n % 10;
        cout << "Decenas: " << decenas << endl;
        cout << "Unidades: " << unidades << endl;
    }
    else
    {
        cout << "Ingresa un numero de 2 cifras" << endl;
    }
    return 0;
}
