// calcula las raices de una ecuacion de segundo grado

#include <iostream>
#include <cmath> // para sqrt()
using namespace std;

int main() {
    double a, b, c, disc, preal, pimag, r1, r2, r;

    // Cargar datos
    cout << "Ingrese el coeficiente A: ";
    cin >> a;
    cout << "Ingrese el coeficiente B: ";
    cin >> b;
    cout << "Ingrese el coeficiente C: ";
    cin >> c;

    // Determinar si son reales o imaginarias
    disc = pow(b, 2) - 4 * a * c;

    if (disc < 0) {
        // Si son imaginarias
        preal = (-b) / (2 * a);
        pimag = sqrt(-disc) / (2 * a);
        cout << "Raiz 1: " << preal << " + " << pimag << "i" << endl;
        cout << "Raiz 2: " << preal << " - " << pimag << "i" << endl;
    }
    else {
        if (disc == 0) { // Si son iguales
            r = (-b) / (2 * a);
            cout << "Raiz 1 = Raiz 2: " << r << endl;
        }
        else { // Si son distintas y reales
            r1 = ((-b) + sqrt(disc)) / (2 * a);
            r2 = ((-b) - sqrt(disc)) / (2 * a);
            cout << "Raiz 1: " << r1 << endl;
            cout << "Raiz 2: " << r2 << endl;
        }
    }

    return 0;
}
