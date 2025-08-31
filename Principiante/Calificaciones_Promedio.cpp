#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int m;
    cout << "===== NOTAS DE ESTUDIANTES =====" << endl;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> m;

    vector<vector<double>> mat(m, vector<double>(4, 0)); // 3 notas + promedio
    vector<string> vnombres(m);

    double st = 0;

    // Ingreso de nombres y notas
    for (int i = 0; i < m; i++) {
        double s = 0;
        cout << "\nIngrese el nombre del estudiante " << i + 1 << ": ";
        cin.ignore(); // limpiar buffer
        getline(cin, vnombres[i]);

        for (int j = 0; j < 3; j++) {
            cout << "Ingrese la nota " << j + 1 << ": ";
            cin >> mat[i][j];
            s += mat[i][j];
        }
        mat[i][3] = s / 3; // promedio del estudiante
        st += mat[i][3];   // acumular para promedio del grupo
    }
