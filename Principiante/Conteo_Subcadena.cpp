#include <iostream>
#include <string>
using namespace std;

int main() {
    string cad1, cad2, cad3;

    // Ingreso de la primera cadena
    cout << "Ingrese la primera cadena: ";
    getline(cin, cad1);

    // Longitud de la primera cadena
    int longCad1 = cad1.length();
    cout << "La longitud de la cadena es: " << longCad1 << endl;

    // Subcadena desde la posición 5 hasta el final
    if (longCad1 >= 5) {
        cad2 = cad1.substr(4); // substr(4) toma desde el índice 4 hasta el final
        cout << "La subcadena desde la posición 5 hasta el final es: " << cad2 << endl;
    } else {
        cout << "La cadena tiene menos de 5 caracteres, no se puede extraer subcadena." << endl;
    }
