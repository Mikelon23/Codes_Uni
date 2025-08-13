// Implementaci�n del c�lculo de una potencia mediante una funci�n recursiva
// El paso recursivo se basa en que A^B = B*(A^(B-1))
// El paso base se base en que A^0 = 1

#include <iostream>
using namespace std;

// Función recursiva para calcular la potencia
int Potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else {
        return base * Potencia(base, exponente - 1);
    }
}

int main() {
    int base, exponente;

    cout << "Ingrese Base: ";
    cin >> base;

    cout << "Ingrese Exponente: ";
    cin >> exponente;

    cout << "El resultado es " << Potencia(base, exponente) << endl;

    return 0;
}
