#include <iostream>
using namespace std;
int main()
{
    float edad;
    int mayores;
    int menores;
    int x;
    mayores = 0;
    menores = 0;
    for (x = 1; x <= 15; x++)
    {
        cout << "Ingresa una edad" << endl;
        cin >> edad;
        if (edad > 18)
        {
            mayores = mayores + 1;
        }
        else
        {
            menores = menores + 1;
        }
    }
    cout << "Personas mayores de edad: " << mayores << endl;
    cout << "Personas menores de edad: " << menores << endl;
    return 0;
}
