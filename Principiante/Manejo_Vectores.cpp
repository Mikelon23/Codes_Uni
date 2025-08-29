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