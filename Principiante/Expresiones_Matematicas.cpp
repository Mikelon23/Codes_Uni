// Este ejemplo muestra el uso de expresiones, operadores y funciones matematicas

#include <iostream>
#include <cmath>
#include <cstdlib> // Para system("pause") y system("cls")
using namespace std;

int main() {
    bool EligeSalir = false;
    bool EsPrimo;
    double N;
    double Nu;
    int Op;
    long double f, r;

    cout << "Ingresar Numero: ";
    cin >> N;

    do {
        cout << "\nPresione una tecla para continuar\n";
        system("pause"); // Esperar tecla
        system("cls");   // Limpiar pantalla

        cout << "Elija una opcion:\n";
        cout << "  1 - Seno, Coseno, ArcoTangente\n";
        cout << "  2 - Logaritmo Natural, Funcion Exponencial\n";
        cout << "  3 - Truncar, Redondear\n";
        cout << "  4 - Raiz Cuadrada\n";
        cout << "  5 - Valor Absoluto\n";
        cout << "  6 - Separar parte entera y decimal\n";
        cout << "  7 - Hallar Factorial\n";
        cout << "  8 - Averiguar si es primo\n";
        cout << "  9 - Ingresar Otro Numero\n";
        cout << "  0 - Salir\n\n";

        cin >> Op;

        switch (Op) {
            case 1:
                cout << "Seno: " << sin(N) << "\n";
                cout << "Coseno: " << cos(N) << "\n";
                cout << "ArcTangente: " << atan(N) << "\n";
                break;

            case 2:
                if (N <= 0) {
                    cout << "El numero debe ser mayor a cero!\n";
                } else {
                    cout << "Log Nat.: " << log(N) << "\n";
                    cout << "Func Expon.: " << exp(N) << "\n";
                }
                break;

            case 3:
                cout << "Truncar: " << trunc(N) << "\n";
                cout << "Redondear: " << round(N) << "\n";
                break;

            case 4:
                cout << "Raiz Cuad.: " << sqrt(N) << "\n";
                break;

            case 5:
                cout << "Valor Abs.: " << fabs(N) << "\n";
                break;

            case 6:
                cout << "Parte Entera: " << trunc(N) << "\n";
                cout << "Parte Decimal: " << N - trunc(N) << "\n";
                break;

            case 7:
                if (N != trunc(N)) {
                    cout << "El numero debe ser entero!\n";
                } else if (fabs(N) > 50) {
                    cout << "Resultado muy grande!\n";
                } else {
                    r = 1;
                    f = 1;
                    while (f <= fabs(N)) {
                        if (N < 0)
                            r = (-f) * r;
                        else
                            r = f * r;
                        f++;
                    }
                    cout << "Factorial: " << r << "\n";
                }
                break;

            case 8:
                if (N != trunc(N)) {
                    cout << "El numero debe ser entero!\n";
                } else {
                    if (N < 0) Nu = -N; else Nu = N;

                    if (fmod(Nu, 2) == 0) {
                        cout << "Numero Primo: " << (Nu == 2 ? "true" : "false") << "\n";
                        if (Nu != 2)
                            cout << N << " = 2 x " << N / 2 << "\n";
                    } else {
                        EsPrimo = (Nu != 1);
                        Nu = sqrt(Nu);
                        f = 3;
                        while (f <= Nu && EsPrimo) {
                            if (fmod(N, f) == 0)
                                EsPrimo = false;
                            f += 2;
                        }
                        cout << "Numero Primo: " << (EsPrimo ? "true" : "false") << "\n";
                        if (N > 1 && !EsPrimo)
                            cout << N << " = " << f - 2 << " x " << N / (f - 2) << "\n";
                    }
                }
                break;

            case 9:
                cout << "Ingrese Numero: ";
                cin >> N;
                break;

            case 0:
                EligeSalir = true;
                break;

            default:
                cout << "Opcion No Valida!\n";
                break;
        }

    } while (!EligeSalir);

    return 0;
}

