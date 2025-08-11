#include <iostream>
#include <cmath> // para sqrt
using namespace std;

int main() {
    int num, div;
    bool factorizar, factor_primo;

    cout << "Ingrese el numero: ";
    cin >> num;

    if (num <= 1) {
        cout << "El numero debe ser mayor que 1" << endl;
        return 0;
    }

    cout << "Factorizacion: ";

    factorizar = true;

    while (factorizar && num > 1) {
        div = 0;

        // Caso especial: divisible entre 2
        if (num % 2 == 0) {
            cout << 2 << " ";
            num = num / 2;
        } else {
            div = 1;
            factor_primo = true;

            // Buscar el siguiente divisor impar
            while (div <= sqrt(num) && factor_primo) {
                div += 2; // probar solo impares
                if (num % div == 0) {
                    factor_primo = false;
                }
            }

            if (factor_primo) {
                // El número que queda es primo
                cout << num << " ";
                factorizar = false;
            } else {
                cout << div << " ";
                num = num / div;
                factor_primo = true;
            }
        }
    }

    cout << endl;
    return 0;
}
