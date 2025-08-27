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
// Ordenar vector (burbuja descendente)
void ordena_vector(vector<int> &vaux) {
    int n = vaux.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (vaux[j] < vaux[j + 1]) {
                swap(vaux[j], vaux[j + 1]);
            }
        }
    }
}
// Llenar matriz desde vector
void lleno_matriz(vector<vector<int>> &mat, vector<int> &vaux, int p) {
    int c = 0;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < p; j++) {
            mat[i][j] = vaux[c++];
        }
    }
}
// Mostrar diagonal secundaria
void diagonal_secundaria(vector<vector<int>> &mat, int p) {
    for (int i = 0, j = p - 1; i < p; i++, j--) {
        cout << mat[i][j] << "  ";
    }
    cout << endl;
}

// Llenar matriz con ceros
void ingresar_ceros(vector<vector<int>> &mat, int p) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < p; j++) {
            mat[i][j] = 0;
        }
    }
}
// Triangular superior
void llenar_matriz_superior(vector<vector<int>> &mat2, vector<vector<int>> &mat, int p) {
    for (int i = 0; i < p; i++) {
        for (int j = i; j < p; j++) {
            mat2[i][j] = mat[i][j];
        }
    }
}

// Triangular inferior
void llenar_matriz_inferior(vector<vector<int>> &mat2, vector<vector<int>> &mat, int p) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j <= i; j++) {
            mat2[i][j] = mat[i][j];
        }
    }
}