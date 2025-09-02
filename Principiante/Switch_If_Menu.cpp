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
