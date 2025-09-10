// ------------------------------------------------------
//          Matriz Ordenada y Diagonal Secundaria
// ------------------------------------------------------
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Ingresar valores a la matriz (aquí se usan aleatorios con azar(10))
void ingresar_matriz(vector<vector<int>>& mat, int p) {
    cout << "Ingrese los elementos de la matriz (se generan aleatoriamente):\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < p; j++) {
            mat[i][j] = rand() % 10; // equivalente a azar(10)
        }
    }
}

// Visualizar la matriz
void visualizar_matriz(const vector<vector<int>>& mat, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
}

// Llenar un vector con los valores de la matriz
void lleno_vector(vector<int>& vaux, int p, const vector<vector<int>>& mat) {
    int c = 0;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < p; j++) {
            vaux[c] = mat[i][j];
            c++;
        }
    }
}

// Ordenar el vector en forma descendente (burbuja)
void ordena_vector(vector<int>& vaux, int p) {
    int size = p * p;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (vaux[j] < vaux[j + 1]) { // descendente
                int aux = vaux[j];
                vaux[j] = vaux[j + 1];
                vaux[j + 1] = aux;
            }
        }
    }
}

// Llenar la matriz con el vector ordenado
void lleno_matriz(vector<vector<int>>& mat, int p, const vector<int>& vaux) {
    int c = 0;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < p; j++) {
            mat[i][j] = vaux[c];
            c++;
        }
    }
}

// Mostrar la diagonal secundaria
void diagonal_secundaria(const vector<vector<int>>& mat, int p) {
    int j = p - 1;
    for (int i = 0; i < p; i++) {
        cout << mat[i][j] << "  ";
        j--;
    }
    cout << endl;
}

// ------------------------------------------------------
//                    PROGRAMA PRINCIPAL
// ------------------------------------------------------
int main() {
    srand(time(0)); // inicializa números aleatorios

    int p;
    cout << "Ingrese el número de filas y columnas de la matriz cuadrada: ";
    cin >> p;

    vector<vector<int>> mat(p, vector<int>(p));
    vector<int> vaux(p * p);

    // Ingreso de datos
    ingresar_matriz(mat, p);

    cout << "\nLa matriz ingresada es:\n";
    visualizar_matriz(mat, p, p);

    // Llenar vector con valores de la matriz
    lleno_vector(vaux, p, mat);

    // Ordenar vector
    ordena_vector(vaux, p);

    // Llenar matriz con el vector ordenado
    lleno_matriz(mat, p, vaux);

    cout << "\nLa matriz ordenada es:\n";
    visualizar_matriz(mat, p, p);

    cout << "\nLa diagonal secundaria de la matriz es:\n";
    diagonal_secundaria(mat, p);

    return 0;
}
