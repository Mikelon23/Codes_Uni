#include <iostream>
using namespace std;

int main() {
    int op;
    double sueldo, ns;

    cout << "===== MENÚ PRINCIPAL =====" << endl;
    cout << "1. VENDEDORES" << endl;
    cout << "2. DISEÑADORES" << endl;
    cout << "3. ADMINISTRATIVOS" << endl;
    cout << "Escoja su opción: ";
    cin >> op;

    if(op >= 1 && op <= 3) {
        cout << "Ingrese su sueldo: ";
        cin >> sueldo;
    }

    switch(op) {
        case 1:
            cout << "El nuevo sueldo del vendedor es: " << sueldo * 1.12 << endl;
            break;
        case 2:
            ns = sueldo * 1.10;
            cout << "El nuevo sueldo del diseñador es: " << ns << endl;
            break;
        case 3:
            ns = sueldo * 1.05;
            cout << "El nuevo sueldo del administrativo es: " << ns << endl;
            break;
        default:
            cout << "Error, debe ser un número entre 1 y 3" << endl;
    }

    return 0;
}
