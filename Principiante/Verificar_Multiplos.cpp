#include <iostream>
using namespace std;

void EsMultiplo(int a, int b) {
    if (b == 0 || a == 0) {
        cout << "Error: No se puede calcular multiplos con cero." << endl;
        return;
    }

    if (a % b == 0) {
        cout << a << " es multiplo de " << b << endl;
    } else if (b % a == 0) {
        cout << b << " es multiplo de " << a << endl;
    } else {
        cout << "No son multiplos " << a << " y " << b << endl;
    }
}

int main() {
    cout << "===== VERIFICAR MULTIPLOS =====" << endl;

    int a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    EsMultiplo(a, b);

    return 0;
}
