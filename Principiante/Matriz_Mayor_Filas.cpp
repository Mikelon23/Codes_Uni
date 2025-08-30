#include <iostream>
#include <vector>
#include <cstdlib>  // para rand()
#include <ctime>    // para time()
using namespace std;

int main() {
    const int filas = 2;
    const int columnas = 10;
    vector<vector<int>> mat(filas, vector<int>(columnas));

    srand(time(0)); // inicializar semilla aleatoria

    // Llenar matriz con números aleatorios del 0 al 9
    cout << "===== MATRIZ ALEATORIA =====" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            mat[i][j] = rand() % 10;
        }
    }

    // Mostrar la matriz
    cout << "La matriz es:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }

    // Inicializar máximos
    int may1 = mat[0][0];
    int may2 = mat[1][0];
    int may = mat[0][0];

    // Obtener mayor por fila y de la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i == 0 && mat[i][j] > may1) may1 = mat[i][j];
            if (i == 1 && mat[i][j] > may2) may2 = mat[i][j];
            if (mat[i][j] > may) may = mat[i][j];
        }
    }

    cout << "\nEl mayor de la fila 1 es: " << may1 << endl;
    cout << "El mayor de la fila 2 es: " << may2 << endl;
    cout << "El mayor de la matriz es: " << may << endl;

    return 0;
}
