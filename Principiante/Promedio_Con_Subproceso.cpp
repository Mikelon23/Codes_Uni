// Calcula el promedio de una lista de N datos utilizando un SubProceso
#include <iostream>
using namespace std;

// Función para calcular el promedio
double Promedio(double arreglo[], int cantidad) {
    double suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += arreglo[i];
    }
    return suma / cantidad;
}

int main() {
    int i, N;
    double datos[100];

    cout << "Ingrese la cantidad de datos: ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Ingrese el dato " << (i + 1) << ": ";
        cin >> datos[i];
    }

    cout << "El promedio es: " << Promedio(datos, N) << endl;

    return 0;
}
