#include <iostream>
using namespace std;

int main() {
    int v[12]; // vector de 12 elementos
    int i, men, may, pmen = 0, pmay = 0;

    cout << "Ingrese los 12 elementos del vector:" << endl;
    for (i = 0; i < 12; i++) {
        cout << "Ingrese el valor " << (i + 1) << ": ";
        cin >> v[i];
    }
