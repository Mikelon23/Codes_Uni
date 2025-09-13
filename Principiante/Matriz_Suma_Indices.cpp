#include <iostream>
using namespace std;

int main() {
    int mat[4][6];

    // Llenar la matriz con la suma de los índices (ajustando a base 0)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            mat[i][j] = (i + 1) + (j + 1); // +1 porque en pseudocódigo empezaba en 1
        }
    }
    
    cout << "La matriz sumando los indices de filas y columnas es:" << endl;

    // Mostrar la matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}