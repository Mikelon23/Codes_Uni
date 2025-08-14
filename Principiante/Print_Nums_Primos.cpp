// Encuentra los primeros N numeros primos

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int cant_a_mostrar, n, cant_mostrados, i;
    bool es_primo;

    cout << "Ingrese la cantidad de numeros primos a mostrar: ";
    cin >> cant_a_mostrar;

    cout << "1: 2" << endl; // el primer primo es 2
    cant_mostrados = 1;
    n = 3; // empezamos a verificar desde 3

    while (cant_mostrados < cant_a_mostrar) {
        es_primo = true; // suponemos que es primo

        // verificar divisores impares hasta la raíz cuadrada de n
        for (i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                es_primo = false; // no es primo
                break; // optimización: salimos del bucle
            }
        }

        if (es_primo) {
            cant_mostrados++;
            cout << cant_mostrados << ": " << n << endl;
        }

        n += 2; // siguiente número impar
    }

    return 0;
}

