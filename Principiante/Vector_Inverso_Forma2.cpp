#include <iostream>
#include <string>
using namespace std;

int main() {
    const int n = 5;
    string v[n], v2[n];
    int j = 0;

    // Ingreso de elementos
    cout << "Ingrese los " << n << " elementos del vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> v[i];
    }

    // Mostrar vector original
    cout << "\nEl vector original es:\n";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Crear vector inverso
    for (int i = n - 1; i >= 0; i--) {
        v2[j] = v[i];
        j++;
    }

    // Mostrar vector inverso
    cout << "\nEl vector en orden inverso es:\n";
    for (int i = 0; i < n; i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}