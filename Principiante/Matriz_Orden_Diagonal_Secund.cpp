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

void ordena_vector(vector<int> &vaux) {
    int n = vaux.size();
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n-1; j++)
            if(vaux[j] < vaux[j+1])
                swap(vaux[j], vaux[j+1]);
}

void lleno_matriz(vector<vector<int>> &mat, const vector<int> &vaux) {
    int p = mat.size();
    int c = 0;
    for(int i = 0; i < p; i++)
        for(int j = 0; j < p; j++)
            mat[i][j] = vaux[c++];
}

void diagonal_secundaria(const vector<vector<int>> &mat) {
    int p = mat.size();
    for(int i = 0, j = p-1; i < p; i++, j--)
        cout << mat[i][j] << "  ";
    cout << endl;
}
