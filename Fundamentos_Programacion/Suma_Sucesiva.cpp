#include <iostream>
using namespace std;
int main()
{
    float i;
    float n1;
    float n2;
    float suma;
    cout << "Ingrese los 2 numeros  " << endl;
    cin >> n1;
    cin >> n2;
    for (i = 1; i <= n2; i++)
    {
        suma = suma + n1;
        cout << n1 << endl;
    }
    cout << " Resultado de   Suma sucesiva " << suma << endl;
    return 0;
}
