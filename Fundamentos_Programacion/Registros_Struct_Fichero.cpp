#include <iostream>
#include <string>
using namespace std;
struct tipoDatos
{
    string nombreFich; // Nombre del fichero
    long tamanyo;      // El tamaño en bytes
};

int numeroFichas = 0; // Número de fichas que ya tenemos
int i;                // Para bucles
int opcion;           // La opcion del menu que elija el usuario
string textoTemporal; // Para pedir datos al usuario
int numeroTemporal;

int main()
{
    tipoDatos *fichas = new tipoDatos[10];
    do
    {
        // Menu principal
        cout << endl;
        cout << "Escoja una opcion:" << endl;
        cout << "1.- Aniadir datos de un nuevo fichero" << endl;
        cout << "2.- Mostrar los nombres de todos los ficheros" << endl;
        cout << "3.- Mostrar ficheros que sean de mas de un cierto tamanio" << endl;
        cout << "4.- Ver datos de un fichero" << endl;
        cout << "5.- Salir" << endl;
        cin >> opcion;
        // Hacemos una cosa u otra según la opción escogida
        switch (opcion)
        {
        case 1:                    // Añadir un dato nuevo
            if (numeroFichas < 10) // Si queda hueco
            {
                cout << "Introduce el nombre del fichero: ";
                cin >> fichas[numeroFichas].nombreFich;
                cout << "Introduce el tamanio en KB: ";
                cin >> fichas[numeroFichas].tamanyo;
                numeroFichas++; // Y tenemos una ficha más
            }
            else // Si no hay hueco para más fichas, avisamos
                cout << "Maximo de fichas alcanzado (10)!" << endl;
            break;
        case 2: // Mostrar todos
            for (i = 0; i < numeroFichas; i++)
                cout << "Nombre: " << fichas[i].nombreFich
                     << "; Tamanio: " << fichas[i].tamanyo
                     << "Kb" << endl;
            break;
        case 3: // Mostrar según el tamaño
            cout << "tamanio: ";
            cin >> numeroTemporal;
            for (i = 0; i < numeroFichas; i++)
                if (fichas[i].tamanyo > numeroTemporal)
                    cout << "Nombre: " << fichas[i].nombreFich << "; Tamaño: " << fichas[i].tamanyo << " Kb" << endl;
            break;
        case 4: // Ver todos los datos (pocos) de un fichero
            cout << "¿De que fichero quieres ver todos los datos?";
            cin >> textoTemporal;
            for (i = 0; i < numeroFichas; i++)
                if (fichas[i].nombreFich == textoTemporal)
                    cout << "Nombre: " << fichas[i].nombreFich << "; Tamaño: " << fichas[i].tamanyo << " Kb" << endl;
            break;
        case 5: // Salir: avisamos de que salimos
            cout << "Fin del programa" << endl;
            break;
        default: // Otra opcion: no válida
            cout << "Opcion desconocida!" << endl;
            break;
        }
    } while (opcion != 5); // Si la opcion es 5, terminamos
    system("pause");
    return 0;
}
