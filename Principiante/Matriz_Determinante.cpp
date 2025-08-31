#include <iostream>
using namespace std;

int main() {
    int mat[3][3];
    int det;

    cout << "===== DETERMINANTE DE MATRIZ 3x3 =====" << endl;

    // Ingreso de la matriz
    cout << "Ingrese los valores de la matriz:" << endl;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) {
            cout << "Ingrese el valor (" << i+1 << "," << j+1 << "): ";
            cin >> mat[i][j];
        }

    // Mostrar matriz
    cout << "\nLa matriz es:" << endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout << mat[i][j] << "  ";
        cout << endl;
    }

    // Calcular determinante usando regla de Sarrus
    det = mat[0][0]*mat[1][1]*mat[2][2] 
        + mat[1][0]*mat[2][1]*mat[0][2] 
        + mat[0][1]*mat[1][2]*mat[2][0] 
        - (mat[0][2]*mat[1][1]*mat[2][0] 
        + mat[0][1]*mat[1][0]*mat[2][2] 
        + mat[1][2]*mat[2][1]*mat[0][0]);

    cout << "\nEl determinante es: " << det << endl;

    return 0;
}
