C#include <iostream>
using namespace std;

int main() {
    // Título del programa
    cout << "===== DIVISION EVITANDO DIVISION POR CERO =====" << endl;

    int a, b;
    double r;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero (diferente de cero): ";
    do {
        cin >> b;
        if (b == 0) {
            cout << "Error, el numero debe ser diferente de cero. Intente de nuevo: ";
        }
    } while (b == 0);

    r = static_cast<double>(a) / b;

    cout << "\nEl resultado de la division es: " << r << endl;

    return 0;
}
