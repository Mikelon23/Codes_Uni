#include <iostream>
using namespace std;

int main() {
    cout << "===== CONTAR ESTUDIANTES APROBADOS =====" << endl;

    int n, i = 1, ca = 0;  // n = cantidad de estudiantes, ca = contador de aprobados
    double nota;

    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;

    while (i <= n) {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;

        if (nota >= 7.0) {
            ca++;
        }

        i++;
    }

    cout << "\nDe los " << n << " estudiantes, pasaron unicamente " << ca << "." << endl;

    return 0;
}
