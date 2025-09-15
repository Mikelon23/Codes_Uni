#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int vn[5];
    
    cout << "Ingrese los 5 elementos del vector:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el elemento " << (i + 1) << ": ";
        cin >> vn[i];
    }
    cout << "\nLos elementos del vector son:" << endl;
    cout << "Número   Cuadrado   Cubo" << endl;

    for (int i = 0; i < 5; i++) {
        int cuadrado = vn[i] * vn[i];
        int cubo = pow(vn[i], 3);
        cout << vn[i] << "        " << cuadrado << "        " << cubo << endl;
    }

    return 0;
}
// Algoritmo vector_cuadrado_cubo