//===========================================================
//   Búsqueda de un elemento en una matriz
//   Transformación de pseudocódigo a C++
//===========================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n, num, c = 0;

    // Leer dimensiones de la matriz
    cout << "Ingrese el número de filas de la matriz: ";
    cin >> m;
    cout << "Ingrese el número de columnas de la matriz: ";
    cin >> n;

    // Declarar matriz dinámica con vector
    vector<vector<int>> mat(m, vector<int>(n));

    // Ingresar valores de la matriz
    cout << "Ingrese los valores de la matriz:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el valor (" << i+1 << "," << j+1 << "): ";
            cin >> mat[i][j];
            // Si quisieras números aleatorios:
            // mat[i][j] = rand() % 100;
        }
    }

    // Mostrar la matriz
    cout << "\nLa matriz es:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }

    // Leer número a buscar
    cout << "\nIngrese el número a buscar: ";
    cin >> num;

    // Buscar el número en la matriz
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == num) {
                c++;
            }
        }
    }

    // Mostrar resultado
    if (c != 0) {
        cout << "\nEncontró el número y se repite " << c << " veces." << endl;
    } else {
        cout << "\nNo encontró el número." << endl;
    }

    return 0;
}
