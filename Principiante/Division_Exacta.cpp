#include <iostream>
using namespace std;

// Función que verifica si la división es exacta
bool divisionexacta(int a, int b) {
    if (b == 0) {
        cout << "Error: Division por cero no permitida." << endl;
        return false;
    }
    return (a % b == 0);
}

int main() {
    cout << "===== VERIFICAR DIVISION EXACTA =====" << endl;

    int a, b;
    bool r;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    r = divisionexacta(a, b);

    if (r) {
        cout << "La division es exacta" << endl;
    } else {
        cout << "La division no es exacta" << endl;
    }

    return 0;
}
