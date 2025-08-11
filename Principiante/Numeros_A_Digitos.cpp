// Separa un numero entero en sus digitos

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int i, digito, pot, n, aux, cont;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "El numero debe ser positivo." << endl;
        return 0;
    }

    // Contar cuántos dígitos tiene
    cont = 0;
    aux = n;
    while (aux > 0) {
        cont++;
        aux = aux / 10; // división entera
    }

    cout << "El numero tiene " << cont << " digitos" << endl;

    // Mostrar cada dígito uno por uno
    aux = n;
    for (i = 1; i <= cont; i++) {
        pot = static_cast<int>(pow(10, cont - i)); // potencia de 10
        digito = aux / pot; // obtener el dígito
        cout << digito << " ";
        aux = aux - digito * pot; // quitar ese dígito
    }
    cout << endl;

    return 0;
}
