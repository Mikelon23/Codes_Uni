#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int Numero;
    bool SePuedeConvertir = true;

    // leer el número
    cout << "Ingrese un numero entre 1 y 1000: ";
    cin >> Numero;

    // Validaciones
    if (Numero == 0) {
        cout << "No existe ningún símbolo para representar el 0" << endl;
        SePuedeConvertir = false;
    }
    if (Numero > 1000) {
        cout << "Muy alto" << endl;
        SePuedeConvertir = false;
    }
    if (Numero < 0) {
        cout << "Debe ser positivo" << endl;
        SePuedeConvertir = false;
    }

    // conversión
    if (SePuedeConvertir) {
        if (Numero == 1000) {
            cout << "M" << endl;
        } else {
            // vectores de conversión
            string nu[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
            string nd[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
            string nc[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

            int centenas = (Numero / 100) % 10;
            int decenas  = (Numero / 10) % 10;
            int unidades = Numero % 10;

            cout << nc[centenas] << nd[decenas] << nu[unidades] << endl;
        }
    }

    return 0;
}
