#include <iostream>
using namespace std;

int main() {
    int x, n, y1;

    cout << "===== GRAFICA DE PUNTOS =====" << endl;
    cout << "Ingrese el valor minimo o maximo de la variable x para graficar: ";
    cin >> n;

    cout << "\nLos puntos para la grafica son:\n";

    for (x = -n; x <= n; x++) {
        y1 = (2 * x) - 1;
        cout << "(" << x << ", " << y1 << ")" << endl;
    }

    return 0;
}
