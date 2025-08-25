#include <iostream>
#include <string>
using namespace std;

int main() {
    // Título del programa
    cout << "===== CONTAR ESPACIOS, PALABRAS Y LETRAS =====" << endl;

    string cad;
    int c = 0; // contador de espacios

    cout << "Ingrese una cadena: ";
    getline(cin, cad); // permite leer frases con espacios

    int longCad = cad.length();

    // Contar espacios
    for (int i = 0; i < longCad; i++) {
        if (cad[i] == ' ') {
            c++;
        }
    }

    // Mostrar resultados
    cout << "\nLa cantidad de espacios que tiene la frase es: " << c << endl;
    cout << "La cantidad de palabras que tiene la frase es: " << c + 1 << endl;
    cout << "El numero de letras sin espacios es: " << longCad - c << endl;

    return 0;
}
