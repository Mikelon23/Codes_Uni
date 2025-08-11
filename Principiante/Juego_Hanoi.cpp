//    El objetivo del juego es mover los discos de la torre 1 a la 3 en la
// menor cantidad de movimientos posible. No se puede colocar un disco de 
// un tamanio sobre otro mas chico

//     Hay una matriz que representa las torres, cada columna contiene
//  nros que representan los tamanios de los discos en esas torres (solo
//  interesan los valores hasta la cantidad de discos de esa torre).
//  Cuantos discos tiene cada torre lo dice el vector cant_discos. 

#include <iostream>
#include <iomanip>
#include <cstdlib> // para system("cls") y system("pause")
using namespace std;

int main() {
    int torres[3][10], cant_discos[3];
    int discos, i;

    // Pedir y validar número de discos
    cout << "Ingrese el nro de discos (1-8): ";
    cin >> discos;
    while (discos < 1 || discos > 8) {
        cout << "El numero de discos debe ser mayor a 0 y menor o igual a 8: ";
        cin >> discos;
    }

    // Inicializar datos
    cant_discos[0] = discos;
    cant_discos[1] = 0;
    cant_discos[2] = 0;

    for (i = 0; i < discos; i++) {
        torres[0][i] = discos - i; // discos más grandes abajo
    }

    int j, t1, t2, disco_a_mover, cant_movs;
    bool puede_mover;
    cant_movs = 0;

    // Bucle del juego
    while (cant_discos[2] != discos) {
        system("cls"); // Limpiar pantalla

        // Dibujar torres
        for (i = 0; i < 3; i++) {
            cout << "Torre " << (i + 1) << endl;
            if (cant_discos[i] == 0) {
                cout << "" << endl;
            } else {
                for (j = cant_discos[i] - 1; j >= 0; j--) {
                    switch (torres[i][j]) {
                        case 1: cout << "                   XX" << endl; break;
                        case 2: cout << "                 XXXXXX" << endl; break;
                        case 3: cout << "               XXXXXXXXXX" << endl; break;
                        case 4: cout << "             XXXXXXXXXXXXXX" << endl; break;
                        case 5: cout << "           XXXXXXXXXXXXXXXXXX" << endl; break;
                        case 6: cout << "         XXXXXXXXXXXXXXXXXXXXXX" << endl; break;
                        case 7: cout << "       XXXXXXXXXXXXXXXXXXXXXXXXXX" << endl; break;
                        case 8: cout << "     XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl; break;
                    }
                }
            }
            cout << "   ----------------------------------" << endl;
            cout << "" << endl;
        }

        // Solicitar movimiento
        cout << "Mover desde la torre: ";
        cin >> t1;
        cout << "hacia la torre: ";
        cin >> t2;

        if (t1 < 1 || t1 > 3 || t2 < 1 || t2 > 3) {
            cout << "Movimiento invalido" << endl;
            system("pause");
        } else {
            if (cant_discos[t1 - 1] == 0) {
                cout << "Movimiento invalido" << endl;
                system("pause");
            } else {
                disco_a_mover = torres[t1 - 1][cant_discos[t1 - 1] - 1];
                puede_mover = true;

                if (cant_discos[t2 - 1] != 0) {
                    if (torres[t2 - 1][cant_discos[t2 - 1] - 1] < disco_a_mover) {
                        puede_mover = false;
                    }
                }

                if (puede_mover) {
                    cant_movs++;
                    cant_discos[t2 - 1]++;
                    torres[t2 - 1][cant_discos[t2 - 1] - 1] = disco_a_mover;
                    cant_discos[t1 - 1]--;
                } else {
                    cout << "Movimiento invalido" << endl;
                    system("pause");
                }
            }
        }
    }

    // Resultado final
    system("cls");
    cout << "Juego finalizado en " << cant_movs << " movimientos!" << endl;

    return 0;
}
