#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Estudiante {
    int codigo;
    string nombre;
    vector<double> notas; // notas[0..2] y notas[3] promedio
};

int main() {
    int n;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;

    vector<Estudiante> estudiantes(n);

    // Inicializar códigos y nombres
    for(int i = 0; i < n; i++) {
        estudiantes[i].codigo = 100 + i + 1;
        cout << "Ingrese el nombre del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].nombre;
        estudiantes[i].notas.resize(4); // 3 parciales + promedio
        double suma = 0;
        for(int j = 0; j < 3; j++) {
            cout << "Ingrese nota " << j+1 << ": ";
            cin >> estudiantes[i].notas[j];
            suma += estudiantes[i].notas[j];
        }
        estudiantes[i].notas[3] = suma / 3.0; // promedio
    }
