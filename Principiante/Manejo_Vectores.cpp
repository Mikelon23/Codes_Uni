#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Función para ingresar elementos de un vector entero
void ingresar_vector(vector<int> &v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> v[i];
    }
}
// Función para ingresar elementos de un vector real
void ingresar_vector(vector<double> &v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> v[i];
    }
}

// Función para ingresar elementos de un vector de cadenas
void ingresar_vector(vector<string> &v) {
    cin.ignore(); // limpiar buffer
    for (size_t i = 0; i < v.size(); i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        getline(cin, v[i]);
    }
}
// Función para visualizar vector entero
void visualizar_vector(const vector<int> &v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Función para visualizar vector real
void visualizar_vector(const vector<double> &v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
// Función para visualizar vector de cadenas
void visualizar_vector(const vector<string> &v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Función para ordenar vector entero (ascendente)
void ordenar_vector(vector<int> &v) {
    for (size_t i = 0; i < v.size(); i++) {
        for (size_t j = 0; j < v.size() - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
// Función para ordenar vector de cadenas (ascendente)
void ordenar_vector(vector<string> &v) {
    for (size_t i = 0; i < v.size(); i++) {
        for (size_t j = 0; j < v.size() - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
int main() {
    cout << "===== MANEJO DE VECTORES =====" << endl;

    int m, n;

    // Leer tamaños de los vectores
    cout << "Ingrese el tamanio del primer vector: ";
    cin >> m;
    cout << "Ingrese el tamanio del segundo vector: ";
    cin >> n;

    vector<int> v1(m);
    vector<double> v2(n);
    vector<string> v3(m);

    // Ingreso de vectores
    cout << "\nIngrese los elementos del primer vector:" << endl;
    ingresar_vector(v1);

    cout << "\nIngrese los elementos del segundo vector:" << endl;
    ingresar_vector(v2);

    cout << "\nIngrese los elementos del tercer vector:" << endl;
    ingresar_vector(v3);

    // Visualizar vectores
    cout << "\nEl vector 1 es: ";
    visualizar_vector(v1);

    cout << "El vector 2 es: ";
    visualizar_vector(v2);

    cout << "El vector 3 es: ";
    visualizar_vector(v3);

    // Ordenar y visualizar vectores 1 y 3
    ordenar_vector(v1);
    cout << "\nEl vector 1 ordenado ascendentemente es: ";
    visualizar_vector(v1);

    ordenar_vector(v3);
    cout << "El vector 3 ordenado ascendentemente es: ";
    visualizar_vector(v3);

    return 0;
}