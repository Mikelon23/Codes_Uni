#include <iostream>
using namespace std;

int main() {
    int mat[4][6]; // Matriz de 4 filas y 6 columnas

    // Llenar la matriz con la suma de los índices (ajustando a base 0)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            mat[i][j] = (i + 1) + (j + 1); // +1 porque en pseudocódigo empezaba en 1
        }
    }