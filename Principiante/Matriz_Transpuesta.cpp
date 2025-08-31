#include <iostream>
#include <vector>
#include <cstdlib> // para rand()
using namespace std;

// Función para llenar la matriz aleatoriamente
void entrada(vector<vector<int>> &mat, int m, int n) {
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            mat[i][j] = rand() % 20; // valores entre 0 y 19
}

// Función para mostrar matriz
void salida(const vector<vector<int>> &mat, int m, int n) {
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

// Función para calcular la transpuesta
void transpuesta(const vector<vector<int>> &mat1, vector<vector<int>> &mat2, int m, int n) {
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            mat2[j][i] = mat1[i][j];
}

// Función para llenar vector con elementos de la matriz
void llenado_vector(const vector<vector<int>> &mat, vector<int> &v) {
    int idx = 0;
    for(int i=0; i<mat.size(); i++)
        for(int j=0; j<mat[0].size(); j++)
            v[idx++] = mat[i][j];
}
