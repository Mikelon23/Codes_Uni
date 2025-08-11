// Si tiene problemas para ejecutar este ejemplo seleccione el perfil "Flexible"
// en el cuadro de "Opciones del lenguaje", al cual se accede desde el menú Configurar.

// Este ejemplo muestra algunas de las variaciones posibles cuando se utiliza
// sintaxis flexible, instrucciones adicionales, y expresiones en lenguaje
// coloquial para las condiciones.

#include <iostream>
#include <cmath> // para fmod
using namespace std;

int main() {
    int a, b;
    double c;

    cout << "Ingrese 3 numeros (los dos primeros enteros):" << endl;
    cin >> a >> b >> c;

    // Determinar el mayor
    if (a > b && a > c) {
        cout << a << " es el mayor" << endl;
    } else if (b > c) {
        cout << b << " es el mayor" << endl;
    } else {
        cout << c << " es el mayor" << endl;
    }

    // Par o impar
    if (a % 2 == 0) {
        cout << a << " es par" << endl;
    } else {
        cout << a << " es impar" << endl;
    }

    // Divisores de b
    cout << "Los divisores de " << b << " son: ";
    for (int i = 1; i < b; i++) {
        if (b % i == 0) {
            cout << i << " ";
        }
    }
    cout << b << endl; // el propio número siempre es divisor

    // Verificar si c es entero o real
    if (fmod(c, 1) == 0) {
        cout << c << " es entero" << endl;
    } else {
        cout << c << " es real" << endl;
    }

    system("pause");
    system("cls");

    return 0;
}
