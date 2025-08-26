#include <iostream>
using namespace std;

int main() {
    cout << "===== DIBUJA UN TRIANGULO =====" << endl;

    int b;
    cout << "Ingrese la base del triangulo: ";
    cin >> b;

    // Dibujar triángulo
    for (int i = 1; i <= b; i++) {
        // Espacios en blanco
        for (int j = 1; j <= b - i; j++) {
            cout << " ";
        }
        // Asteriscos con espacio
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl; // salto de línea
    }

    return 0;
}
