#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void ingresar_matriz(vector<vector<int>> &mat, int p) {
    srand(time(0));
    for(int i = 0; i < p; i++)
        for(int j = 0; j < p; j++)
            mat[i][j] = rand() % 10; // valores aleatorios 0-9
}

void visualizar_matriz(const vector<vector<int>> &mat) {
    int p = mat.size();
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < p; j++)
            cout << mat[i][j] << "  ";
        cout << endl;
    }
}

void lleno_vector(const vector<vector<int>> &mat, vector<int> &vaux) {
    int p = mat.size();
    int c = 0;
    for(int i = 0; i < p; i++)
        for(int j = 0; j < p; j++)
            vaux[c++] = mat[i][j];
}
