#include <iostream>
#include <vector>
using namespace std;

// Función para ingresar datos
void ingreso_datos(vector<int> &v, int n) {
    cout << "Ingrese los " << n << " elementos del vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

// Función de ordenamiento por selección
void orde_vec(vector<int> &v, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minimo = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[minimo]) { // ascendente
                minimo = j;
            }
        }
        // Intercambio
        int aux = v[i];
        v[i] = v[minimo];
        v[minimo] = aux;
    }
}

// Función para mostrar elementos y su mitad
void salida_medim(vector<int> v, int n) {
    cout << "\nElementos y su mitad:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = " << v[i] << "  -> mitad: " << v[i] / 2.0 << endl;
    }
}

// Función para hallar el mayor, menor y rango
void may_men(vector<int> v, int n) {
    int may = v[0], men = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > may) may = v[i];
        if (v[i] < men) men = v[i];
    }
    int rango = may - men;
    cout << "\nMayor: " << may << endl;
    cout << "Menor: " << men << endl;
    cout << "Rango: " << rango << endl;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de datos que va a ingresar: ";
    cin >> n;

    vector<int> v(n);

    // Llamamos funciones
    ingreso_datos(v, n);
    orde_vec(v, n);

    cout << "\nVector ordenado ascendentemente:" << endl;
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    salida_medim(v, n);
    may_men(v, n);

    return 0;
}
