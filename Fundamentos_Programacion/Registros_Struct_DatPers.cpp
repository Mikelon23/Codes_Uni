#include <iostream>
#include <string>

using namespace std;
int main()
{

    struct datosPersona
    {
        string nombre;
        char inicial;
        int edad;
        float nota;
    };

    datosPersona *persona = new datosPersona[5];

    for (int i = 0; i < 3; i++)
    {
        cout << "Dime el nombre de la persona " << i + 1 << endl;
        cin.ignore();
        getline(cin, persona[i].nombre);
        cout << "Dime inicial de la persona " << i + 1 << endl;
        cin >> persona[i].inicial;
        cout << "Dime la edad de la persona " << i + 1 << endl;
        cin >> persona[i].edad;
        cout << "Dime la nota de la persona " << i + 1 << endl;
        cin >> persona[i].nota;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "nombre de la persona: " << i + 1 << ": " << persona[i].nombre << endl;
        cout << "inicial de la persona: " << i + 1 << ": " << persona[i].inicial << endl;
        cout << "edad de la persona: " << i + 1 << ": " << persona[i].edad << endl;
        cout << "nota de la persona: " << i + 1 << ": " << persona[i].nota << endl;
    }
}
