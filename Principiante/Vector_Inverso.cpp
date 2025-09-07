#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, s = 0;
    double prom;

    cout << "Ingrese el numero de elementos del vector: ";
    cin >> n;
    vector<int> v(n);

    // Ingreso y suma de elementos
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> v[i];
        s += v[i];
    }

    // Mostrar elementos en orden normal
    cout << "\nLos elementos del vector son:\n";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Mostrar elementos en orden inverso
    cout << "\nLos elementos del vector en orden inverso son:\n";
    for (int i = n - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Suma y promedio
    prom = static_cast<double>(s) / n;
    cout << "La suma de elementos es: " << s << endl;
    cout << "El promedio es: " << prom << endl;

    return 0;
}
