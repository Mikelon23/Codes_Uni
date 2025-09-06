#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, j = 0, k = 0;

    cout << "Ingrese el numero de elementos del vector: ";
    cin >> n;

    vector<int> a(n), b(n), c(2 * n);

    // Leer vector a
    cout << "Ingrese los " << n << " elementos del vector a:\n";
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> a[i];
    }

    // Leer vector b
    cout << "Ingrese los " << n << " elementos del vector b:\n";
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> b[i];
    }
    // Intercalar vectores
    for (int i = 0; i < 2 * n; i++) {
        if (i % 2 == 0) { // posiciones pares en C++ (0,2,4...) para a
            c[i] = a[j];
            j++;
        } else {          // posiciones impares para b
            c[i] = b[k];
            k++;
        }
    }

    // Mostrar resultados
    cout << "\nEl vector a es:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    
    cout << "\nEl vector b es:\n";
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    cout << "\nEl vector intercalado c es:\n";
    for (int i = 0; i < 2 * n; i++)
        cout << c[i] << " ";

    cout << endl;
    return 0;
}
