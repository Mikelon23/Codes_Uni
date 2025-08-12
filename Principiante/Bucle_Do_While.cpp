// Muestra como hacer un men� simple con las estructuras Repetir-Hasta Que y Seg�n

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int OP;

    do {
        // Limpiar pantalla
        system("cls");

        // Mostrar menú
        cout << "Menu de recomendaciones\n";
        cout << "   1. Literatura\n";
        cout << "   2. Cine\n";
        cout << "   3. Musica\n";
        cout << "   4. Videojuegos\n";
        cout << "   5. Salir\n";

        // Leer opción
        cout << "Elija una opcion (1-5): ";
        cin >> OP;

        // Procesar opción
        switch (OP) {
            case 1:
                cout << "Lecturas recomendables:\n";
                cout << " + Esperandolo a Tito y otros cuentos de futbol (Eduardo Sacheri)\n";
                cout << " + El juego de Ender (Orson Scott Card)\n";
                cout << " + El sueno de los heroes (Adolfo Bioy Casares)\n";
                break;

            case 2:
                cout << "Peliculas recomendables:\n";
                cout << " + Matrix (1999)\n";
                cout << " + El ultimo samuray (2003)\n";
                cout << " + Cars (2006)\n";
                break;

            case 3:
                cout << "Discos recomendables:\n";
                cout << " + Despedazado por mil partes (La Renga, 1996)\n";
                cout << " + Bufalo (La Mississippi, 2008)\n";
                cout << " + Gaia (Mago de Oz, 2003)\n";
                break;

            case 4:
                cout << "Videojuegos clasicos recomendables:\n";
                cout << " + Dia del tentaculo (LucasArts, 1993)\n";
                cout << " + Terminal Velocity (Terminal Reality/3D Realms, 1995)\n";
                cout << " + Death Rally (Remedy/Apogee, 1996)\n";
                break;

            case 5:
                cout << "Gracias, vuelva pronto\n";
                break;

            default:
                cout << "Opcion no valida\n";
        }

        // Pausa antes de volver a mostrar el menú
        cout << "Presione enter para continuar...";
        cin.ignore();
        cin.get();

    } while (OP != 5);

    return 0;
}

