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
