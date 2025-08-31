#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cout << "===== SUMA DE FILAS Y COLUMNAS DE MATRIZ =====" << endl;

    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> m;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> n;

    vector<vector<int>> mat(m, vector<int>(n));
    vector<int> vsf(m); // vector suma filas
    vector<int> vsc(n); // vector suma columnas

    // Ingreso de matriz
    cout << "\nIngrese los elementos de la matriz:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el elemento en la posicion (" << i+1 << "," << j+1 << "): ";
            cin >> mat[i][j];
        }
    }
