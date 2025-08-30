#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n, num, c = 0, pos1 = -1, pos2 = -1;

    cout << "===== BUSCAR Y CONTAR ELEMENTO EN MATRIZ =====" << endl;

    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> m;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> n;

    vector<vector<int>> mat(m, vector<int>(n));

    cout << "\nIngrese los elementos de la matriz:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el elemento en la posicion (" << i+1 << "," << j+1 << "): ";
            cin >> mat[i][j];
        }
    }

    cout << "\nLos elementos de la matriz son:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << "   ";
        }
        cout << endl;
    }

    cout << "\nIngrese el elemento a buscar: ";
    cin >> num;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == num) {
                c++;
                pos1 = i + 1; // Usamos 1-based para mostrar la posición
                pos2 = j + 1;
            }
        }
    }

    if (c != 0) {
        cout << "Encontre el elemento " << c << " veces" << endl;
        cout << "La ultima posicion del elemento esta en: (" << pos1 << "," << pos2 << ")" << endl;
    } else {
        cout << "No encontre el elemento" << endl;
    }

    return 0;
}
