// ======================================
//   Algoritmo de Búsqueda Binaria
// ======================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int vec[5];
    int num, inicio, final, mitad, aux;
    bool encontro = false;

    srand(time(0)); // inicializar semilla para números aleatorios

    inicio = 0;
    final = 4;

    cout << "Ingrese los 5 elementos del vector (generados aleatoriamente):" << endl;
    for (int i = 0; i < 5; i++) {
        vec[i] = rand() % 100; 
        cout << vec[i] << " ";
    }
    cout << endl;

    // Ordenamiento burbuja ascendente
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (vec[j] > vec[j + 1]) {
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
            }
        }
    }

    cout << "Vector Ordenado: ";
    for (int i = 0; i < 5; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    cout << "Ingrese el número a buscar: ";
    cin >> num;

    // Búsqueda binaria
    while (!encontro && inicio <= final) {
        mitad = (inicio + final) / 2;
        if (num == vec[mitad]) {
            encontro = true;
        } else {
            if (num < vec[mitad]) {
                final = mitad - 1;
            } else {
                inicio = mitad + 1;
            }
        }
    }

    if (encontro) {
        cout << "El dato se encuentra en la posición: " << mitad << endl;
    } else {
        cout << "El dato no se encuentra en el vector." << endl;
    }

    return 0;
}
