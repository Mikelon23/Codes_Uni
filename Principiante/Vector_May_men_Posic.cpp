#include <iostream>
using namespace std;

int main() {
    int v[12]; // vector de 12 elementos
    int i, men, may, pmen = 0, pmay = 0;

    cout << "Ingrese los 12 elementos del vector:" << endl;
    for (i = 0; i < 12; i++) {
        cout << "Ingrese el valor " << (i + 1) << ": ";
        cin >> v[i];
    }
    cout << "\nEl vector original es:" << endl;
    for (i = 0; i < 12; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Inicializamos con el primer elemento
    may = v[0];
    men = v[0];
    pmen = 0;
    pmay = 0;

    for (i = 0; i < 12; i++) {
        if (v[i] < men) {
            men = v[i];
            pmen = i;
        }
        if (v[i] > may) {
            may = v[i];
            pmay = i;
        }
    }

    cout << "\nNumero mayor: " << may << " en posicion: " << (pmay + 1) << endl;
    cout << "Numero menor: " << men << " en posicion: " << (pmen + 1) << endl;

    return 0;
}
