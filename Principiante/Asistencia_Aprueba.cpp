// Algoritmo asistencia_aprueba
#include <iostream>
using namespace std;

int main() {
    int a, nf;

    cout << "Ingrese el porcentaje de asistencia: ";
    cin >> a;

    cout << "Ingrese su nota final: ";
    cin >> nf;

    if (a >= 80 && nf >= 8 && nf <= 10) {
        cout << "Aprobo la materia" << endl;
    } else {
