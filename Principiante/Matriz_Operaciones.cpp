#include <iostream>
#include <vector>
#include <cstdlib> // rand()
#include <ctime>   // srand()
using namespace std;

// Función para ingresar la matriz con números aleatorios
void ingresar_matriz(vector<vector<int>> &mat, int p) {
    srand(time(0));
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < p; j++) {
            mat[i][j] = rand() % 10; // valores entre 0 y 9
        }
    }
}
// Función para visualizar matriz
void visualizar_matriz(vector<vector<int>> &mat, int p) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < p; j++) {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
}
// Llenar vector con elementos de la matriz
void lleno_vector(vector<int> &vaux, vector<vector<int>> &mat, int p) {
    int c = 0;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < p; j++) {
            vaux[c++] = mat[i][j];
        }
    }
}
