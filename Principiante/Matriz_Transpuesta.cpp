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
