#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    cout << "===== BUSQUEDA SECUENCIAL EN UN VECTOR =====" << endl;

    int n, num, pos = -1; 
    int c = 0;  // indicador de encontrado
    cout << "Ingrese el numero de elementos del vector: ";
    cin >> n;

    int vec[n]; // Vector dinámico en C++ (válido en la mayoría de compiladores)

    // Semilla para generar números aleatorios
    srand(time(0));

    // Llenar vector con valores aleatorios entre 0 y 99
    for (int i = 0; i < n; i++) {
        vec[i] = rand() % 100;
    }

    // Mostrar vector
    cout << "\nVector Original:" << endl;
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Pedir número a buscar
    cout << "\nIngrese el numero a buscar: ";
    cin >> num;

    // Búsqueda secuencial
    int i = 0;
    while (c == 0 && i < n) {
        if (vec[i] == num) {
            c = 1;
            pos = i; // posición encontrada
        }
        i++;
    }

    // Mostrar resultado
    if (c == 1) {
        cout << "\nEl dato se encuentra en la posicion: " << pos + 1 << endl;
    } else {
        cout << "\nEl dato no se encuentra en el vector." << endl;
    }

    return 0;
}
