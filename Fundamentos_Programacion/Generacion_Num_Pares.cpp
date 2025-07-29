#include <iostream>
using namespace std;
int main()
{
    int contador;
    for (contador = 1; contador <= 10; contador++)
    {
        if (contador % 2 == 0)
        {
            cout << "El numero " << contador << " es par" << endl;
        }
    }
    return 0;
}
