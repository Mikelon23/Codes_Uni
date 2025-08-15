// funcion que no recibe ni devuelve nada
#include <iostream>
using namespace std;

// Procedimiento que muestra un saludo
void Saludar() {
    cout << "Hola mundo!" << endl;
}

// Función que recibe un argumento por valor y devuelve su doble
double CalcularDoble(double num) {
    return num * 2;
}

// Función que recibe un argumento por referencia y lo modifica
void Triplicar(double &num) {
    num = num * 3;
}

// Proceso principal
int main() {
    double x;

    cout << "Llamada a la funcion Saludar:" << endl;
    Saludar();

    cout << "Ingrese un valor numerico para x: ";
    cin >> x;

    cout << "Llamada a la funcion CalcularDoble (pasaje por valor)" << endl;
    cout << "El doble de " << x << " es " << CalcularDoble(x) << endl;
    cout << "El valor original de x es " << x << endl;

    cout << "Llamada a la funcion Triplicar (pasaje por referencia)" << endl;
    Triplicar(x);
    cout << "El nuevo valor de x es " << x << endl;

    return 0;
}
