#include <iostream>
#include <string>
using namespace std;

int main() {
    // Título del programa
    cout << "===== CADENA INVERTIDA Y PALINDROMA =====" << endl;

    string cad1, cad2 = "";
    int longCad;

    cout << "Ingrese una cadena: ";
    getline(cin, cad1);

    longCad = cad1.length();

    // Invertir cadena
    for (int i = longCad - 1; i >= 0; i--) {
        cad2 += cad1[i];
    }

    // Mostrar resultados
    cout << "\nLa cadena original es: " << cad1 << endl;
    cout << "La nueva cadena invertida es: " << cad2 << endl;

    // Verificar si es palíndroma
    if (cad1 == cad2) {
        cout << "Es una palabra palindroma" << endl;
    } else {
        cout << "No es una palabra palindroma" << endl;
    }

    return 0;
}
