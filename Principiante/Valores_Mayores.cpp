// Busca los dos mayores de una lista de N datos

#include <iostream>
using namespace std;

int main() {
    int datos[200];
    int n, may1, may2, i;

    // Pedir cantidad de datos
    cout << "Ingrese la cantidad de datos (de 2 a 200): ";
    cin >> n;

    // Validación básica
    if (n < 2 || n > 200) {
        cout << "Cantidad invalida. Debe estar entre 2 y 200.\n";
        return 1;
    }

    // Leer datos
    for (i = 0; i < n; i++) {
        cout << "Ingrese el dato " << (i + 1) << ": ";
        cin >> datos[i];
    }

    // Inicializar may1 y may2 comparando los dos primeros elementos
    if (datos[0] > datos[1]) {
        may1 = datos[0];
        may2 = datos[1];
    } else {
        may1 = datos[1];
        may2 = datos[0];
    }

    // Buscar los dos mayores
    for (i = 2; i < n; i++) {
        if (datos[i] > may1) {
            may2 = may1;
            may1 = datos[i];
        } else if (datos[i] > may2) {
            may2 = datos[i];
        }
    }

    // Mostrar resultados
    cout << "El mayor es: " << may1 << "\n";
    cout << "El segundo mayor es: " << may2 << "\n";

    return 0;
}

