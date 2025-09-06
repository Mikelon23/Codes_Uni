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

