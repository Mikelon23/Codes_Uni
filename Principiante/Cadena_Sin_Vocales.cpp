#include <iostream>
#include <string>
using namespace std;

int main() {
    // Título del programa
    cout << "===== CADENA SIN VOCALES =====" << endl;

    string cad1, cad2 = "";
    int longCad;

    cout << "Ingrese una cadena: ";
    getline(cin, cad1);

    longCad = cad1.length();

    // Recorrer cadena original
    for (int i = 0; i < longCad; i++) {
        char ch = tolower(cad1[i]); // pasar a minúscula para comparar
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            cad2 += cad1[i]; // concatenar solo si no es vocal
        }
    }

    cout << "\nLa nueva cadena sin vocales es: " << cad2 << endl;

    return 0;
}
