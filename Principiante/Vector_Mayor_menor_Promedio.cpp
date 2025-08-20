#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int N = 10; // tamaño fijo del vector
    vector<double> v(N);   // Vector original
    vector<double> v2;     // Menores al promedio
    vector<double> v3;     // Mayores o iguales al promedio

    double s = 0.0;  // suma de elementos
    double prom;     // promedio

    cout << "Ingrese los 10 elementos del vector:\n";
    for (int i = 0; i < N; i++) {
        cout << "Ingrese el valor " << (i + 1) << ": ";
        cin >> v[i];
        s += v[i];
    }

    prom = s / N;

    // Clasificar los valores
    for (int i = 0; i < N; i++) {
        if (v[i] < prom) {
            v2.push_back(v[i]);
        } else {
            v3.push_back(v[i]);
        }
    }

    // Mostrar resultados
    cout << "\nVector Original:\n";
    for (int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }

    cout << "\n\nVector menor al promedio (" << prom << "):\n";
    for (size_t i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }

    cout << "\n\nVector mayor o igual al promedio (" << prom << "):\n";
    for (size_t i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }

    cout << endl;

    return 0;
}
