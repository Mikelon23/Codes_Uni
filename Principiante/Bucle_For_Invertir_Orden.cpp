#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

using namespace std;

int main() {
    int A[10];
    int i;

    // Inicializar la semilla de números aleatorios
    srand(time(0));

    // Asignar valores aleatorios al arreglo
    for (int &elemento : A) {
        elemento = rand() % 100; // Número aleatorio entre 0 y 99
    }

    cout << "Los elementos del arreglo son:" << endl;
    for (i = 0; i < 10; i++) {
        cout << "Posición " << i << ": " << A[i] << endl;
    }

    cout << endl; // Línea en blanco

    cout << "En orden inverso:" << endl;
    for (i = 9; i >= 0; i--) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

