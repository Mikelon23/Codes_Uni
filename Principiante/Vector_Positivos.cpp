#include <iostream>
using namespace std;

int main() {
    cout << "===== VECTOR SOLO POSITIVOS =====" << endl;

    int v[10];
    int i = 0; // en C++ los índices inician en 0

    cout << "Ingrese hasta 10 elementos del vector (se detiene si ingresa un negativo):" << endl;

    // Repetir hasta que se ingrese negativo o se complete el vector
    while (i < 10) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> v[i];

        if (v[i] < 0) {
            break; // se detiene si el valor es negativo
        }

        i++;
    }

    // Mostrar resultados
    cout << "\nLos elementos del vector solo positivos son:" << endl;
    for (int j = 0; j < i; j++) {
        cout << v[j] << " ";
    }
    cout << endl;

    return 0;
}
