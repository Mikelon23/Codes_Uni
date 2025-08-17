// toma dos numeros, los suma y muestra el resultado

#include <iostream>  // Librería para entrada/salida
using namespace std;

int main() {
    // Definir variables como reales (en C++ usamos 'float' o 'double')
    double A, B, C;

    // Pedir datos al usuario
    cout << "Ingrese el primer numero: ";
    cin >> A;

    cout << "Ingrese el segundo numero: ";
    cin >> B;

    // Calcular la suma
    C = A + B;

    // Mostrar el resultado
    cout << "El resultado es: " << C << endl;

    return 0; // Fin del programa
}

