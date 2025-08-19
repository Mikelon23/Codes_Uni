#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Estudiante {
    int codigo;
    string nombre;
    vector<float> notas; // 3 parciales
    float definitiva;
};

// Función para calcular la definitiva
float calcularDefinitiva(const vector<float> &notas) {
    return (notas[0] + notas[1] + notas[2]) / 3.0;
}

int main() {
    int n;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;

    vector<Estudiante> estudiantes(n);

    // Inicialización de estudiantes
    for (int i = 0; i < n; i++) {
        estudiantes[i].codigo = 100 + (i + 1);
        cout << "\nCodigo asignado: " << estudiantes[i].codigo << endl;
        cout << "Ingrese el nombre del estudiante " << (i + 1) << ": ";
        cin.ignore(); 
        getline(cin, estudiantes[i].nombre);

        estudiantes[i].notas.resize(3);
        float suma = 0;
        for (int j = 0; j < 3; j++) {
            cout << "Ingrese la nota " << (j + 1) << ": ";
            cin >> estudiantes[i].notas[j];
            suma += estudiantes[i].notas[j];
        }
        estudiantes[i].definitiva = suma / 3.0;
    }

    // Mostrar tabla de estudiantes
    cout << "\n=== LISTA DE ESTUDIANTES ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << estudiantes[i].codigo << "  "
            << estudiantes[i].nombre << "  ";
        for (int j = 0; j < 3; j++) {
            cout << estudiantes[i].notas[j] << "  ";
        }
        cout << "Def: " << estudiantes[i].definitiva << endl;
    }

    // Buscar estudiante por código
    int cod;
    cout << "\nIngrese el codigo a buscar: ";
    cin >> cod;

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (estudiantes[i].codigo == cod) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        cout << "\nNombre: " << estudiantes[pos].nombre << endl;
        for (int j = 0; j < 3; j++) {
            cout << "Nota parcial " << (j + 1) << ": " << estudiantes[pos].notas[j] << endl;
        }
        cout << "Definitiva: " << estudiantes[pos].definitiva << endl;

        // Modificación de notas
        int op2;
        cout << "\nQue nota desea modificar?" << endl;
        cout << "1. Nota 1\n2. Nota 2\n3. Nota 3\nSeleccione su opcion: ";
        cin >> op2;

        if (op2 >= 1 && op2 <= 3) {
            cout << "Ingrese el nuevo valor de la nota " << op2 << ": ";
            float nuevaNota;
            cin >> nuevaNota;
            estudiantes[pos].notas[op2 - 1] = nuevaNota;
            estudiantes[pos].definitiva = calcularDefinitiva(estudiantes[pos].notas);

            cout << "\nLos nuevos datos modificados son:\n";
            cout << "Nombre: " << estudiantes[pos].nombre << endl;
            for (int j = 0; j < 3; j++) {
                cout << "Nota parcial " << (j + 1) << ": " << estudiantes[pos].notas[j] << endl;
            }
            cout << "Definitiva: " << estudiantes[pos].definitiva << endl;
        } else {
            cout << "Error, ingrese un valor entre 1 y 3" << endl;
        }

    } else {
        cout << "Error. El codigo no existe, vuelva a ingresar." << endl;
    }

    return 0;
}
