/* Lee los tres lados de un triangulo rectangulo, determina
si corresponden (por Pitargoras) y en caso afirmativo
calcula el area */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Definir variables
    double l1, l2, l3;
    cout << "Ingrese el lado 1: ";
    cin >> l1;
    cout << "Ingrese el lado 2: ";
    cin >> l2;
    cout << "Ingrese el lado 3: ";
    cin >> l3;

    // Identificar hipotenusa (el mayor lado)
    double cat1, cat2, hip;
    if (l1 > l2) {
        cat1 = l2;
        if (l1 > l3) {
            hip = l1;
            cat2 = l3;
        } else {
            hip = l3;
            cat2 = l1;
        }
    } else {
        cat1 = l1;
        if (l2 > l3) {
            hip = l2;
            cat2 = l3;
        } else {
            hip = l3;
            cat2 = l2;
        }
    }

    // Verificar si cumple el teorema de Pitágoras
    if (fabs(pow(hip, 2) - (pow(cat1, 2) + pow(cat2, 2))) < 1e-6) {
        double area = (cat1 * cat2) / 2.0;
        cout << "El area es: " << area << endl;
    } else {
        cout << "No es un triangulo rectangulo." << endl;
    }

    return 0;
}