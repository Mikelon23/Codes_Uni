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

