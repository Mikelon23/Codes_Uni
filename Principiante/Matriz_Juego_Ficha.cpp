/* inicializa dos matrices de 3x3, una para guardar la ficha que se ve, 
y otra para un valor asociado a la ficha, para un jugador sera 1, para
el otro 2, entoces para ver quien gano se multiplica por fila, por
columna y por diagonal, si el resultado es 1 gano el primer jugador,
si es 8 gano el segundo, si es 0 es porque faltaba completar, si
es otra cosa, estan las tres fichas, pero no son del mismo jugador*/ 

#include <iostream>
#include <vector>
using namespace std;

// Función para dibujar el tablero
void dibujarTablero(const vector<vector<char>>& Tab2) {
    cout << "\n";
    cout << "      ||     ||     \n";
    cout << "   " << Tab2[0][0] << "  ||  " << Tab2[0][1] << "  ||  " << Tab2[0][2] << "\n";
    cout << "     1||    2||    3\n";
    cout << " =====++=====++======\n";
    cout << "      ||     ||     \n";
    cout << "   " << Tab2[1][0] << "  ||  " << Tab2[1][1] << "  ||  " << Tab2[1][2] << "\n";
    cout << "     4||    5||    6\n";
    cout << " =====++=====++======\n";
    cout << "      ||     ||     \n";
    cout << "   " << Tab2[2][0] << "  ||  " << Tab2[2][1] << "  ||  " << Tab2[2][2] << "\n";
    cout << "     7||    8||    9\n";
    cout << "\n";
}

// Función para verificar si hay un ganador
bool hayGanador(const vector<vector<int>>& Tab1, int objetivo) {
    int aux_d1 = 1, aux_d2 = 1;

    for (int i = 0; i < 3; i++) {
        int aux_i = 1, aux_j = 1;

        aux_d1 *= Tab1[i][i];
        aux_d2 *= Tab1[i][2 - i];

        for (int j = 0; j < 3; j++) {
            aux_i *= Tab1[i][j];
            aux_j *= Tab1[j][i];
        }

        if (aux_i == objetivo || aux_j == objetivo) {
            return true;
        }
    }

    if (aux_d1 == objetivo || aux_d2 == objetivo) {
        return true;
    }

    return false;
}

int main() {
    vector<vector<int>> Tab1(3, vector<int>(3, 0));    // Tablero numérico
    vector<vector<char>> Tab2(3, vector<char>(3, ' ')); // Tablero visual

    bool TurnoJugador1 = true;
    bool Terminado = false;
    bool Ganador = false;
    int CantTurnos = 0;

    while (!Terminado) {
        system("clear"); // En Linux/Mac usa "clear", en Windows sería "cls"
        dibujarTablero(Tab2);

        if (!Ganador && CantTurnos < 9) {
            char Ficha;
            int Valor, Objetivo;

            if (TurnoJugador1) {
                Ficha = 'O';  // jugador 1
                Valor = 1;
                Objetivo = 1;
                cout << "Turno del jugador 1 (O)\n";
            } else {
                Ficha = 'X';  // jugador 2
                Valor = 2;
                Objetivo = 8;
                cout << "Turno del jugador 2 (X)\n";
            }

            // Pedir posición
            int Pos, i, j;
            cout << "Ingrese la posicion (1-9): ";
            do {
                cin >> Pos;
                if (Pos < 1 || Pos > 9) {
                    cout << "Posicion incorrecta, ingrese nuevamente: ";
                    Pos = 99;
                } else {
                    i = (Pos - 1) / 3;
                    j = (Pos - 1) % 3;
                    if (Tab1[i][j] != 0) {
                        cout << "Posicion ocupada, ingrese nuevamente: ";
                        Pos = 99;
                    }
                }
            } while (Pos == 99);

            // Colocar ficha
            CantTurnos++;
            Tab1[i][j] = Valor;
            Tab2[i][j] = Ficha;

            // Verificar si hay ganador
            if (hayGanador(Tab1, Objetivo)) {
                Ganador = true;
            } else {
                TurnoJugador1 = !TurnoJugador1; // cambia turno
            }
        } else {
            if (Ganador) {
                cout << "Ganador: ";
                if (TurnoJugador1) {
                    cout << "Jugador 1!\n";
                } else {
                    cout << "Jugador 2!\n";
                }
            } else {
                cout << "Empate!\n";
            }
            Terminado = true;
        }
    }

    return 0;
}
