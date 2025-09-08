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
