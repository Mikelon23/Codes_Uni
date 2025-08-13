// Se ingresa una lista de nombres (la lista termina
// cuando se ingresa un nombre en blanco) no permitiendo
// ingresar repetidos y luego se ordena y muestra

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre, lista[200], aux;
    bool se_repite;
    int cant = 0, i, j, pos_menor;

    cout << "Ingrese los nombres (enter en blanco para terminar):" << endl;

    // Leer la lista
    while (true) {
        // Leer un nombre y verificar que no esté repetido
        do {
            getline(cin, nombre);
            se_repite = false;
            if (nombre.empty()) break;
            for (i = 0; i < cant; i++) {
                if (nombre == lista[i]) {
                    se_repite = true;
                    cout << "Ese nombre ya existe, ingrese otro:" << endl;
                    break;
                }
            }
        } while (se_repite);

        if (nombre.empty()) break;
        lista[cant] = nombre;
        cant++;
    }

    // Ordenar usando selección
    for (i = 0; i < cant - 1; i++) {
        pos_menor = i;
        for (j = i + 1; j < cant; j++) {
            if (lista[j] < lista[pos_menor]) {
                pos_menor = j;
            }
        }
        aux = lista[i];
        lista[i] = lista[pos_menor];
        lista[pos_menor] = aux;
    }

    // Mostrar lista ordenada
    cout << "La lista ordenada es:" << endl;
    for (i = 0; i < cant; i++) {
        cout << "   " << lista[i] << endl;
    }

    return 0;
}
