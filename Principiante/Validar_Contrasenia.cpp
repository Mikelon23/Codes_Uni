#include <iostream>
#include <string>
using namespace std;

int main() {
    string clave, cont = "abc123";
    int c = 0;

    do {
        if (c != 3) {
            cout << "Ingrese la contrasenia: ";
            cin >> clave;

            if (clave != cont) {
                cout << "Error, vuelva a ingresar la clave" << endl;
                c++;
            }
        } else {
            cout << "Se bloqueo su clave, ha llegado al maximo numero de intentos" << endl;
        }
    } while (clave != cont && c < 3);

    if (c != 3) {
        cout << "Bienvenido al sistema" << endl;
    } else {
        cout << "Finalizo el sistema, Intentelo mas tarde" << endl;
    }

    return 0;
}
