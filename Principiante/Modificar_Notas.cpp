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
