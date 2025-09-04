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
