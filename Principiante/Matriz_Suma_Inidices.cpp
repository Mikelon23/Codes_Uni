#include <iostream>
using namespace std;

int main() {
    const int FILAS = 4;
    const int COLUMNAS = 6;
    int mat[FILAS][COLUMNAS];

    // Llenar la matriz con la suma de los índices
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            mat[i][j] = (i + 1) + (j + 1);  // +1 porque en pseudocódigo empieza en 1
        }
    }

    // Mostrar la matriz
    cout << "La matriz sumando los índices de filas y columnas es:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << mat[i][j] << "\t"; // tabulación para alinear
        }
        cout << endl;
    }

    return 0;
}
