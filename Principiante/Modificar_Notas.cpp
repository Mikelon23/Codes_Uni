#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Estudiante {
    int codigo;
    string nombre;
    vector<double> notas; // notas[0..2] y notas[3] promedio
};

int main() {
    int n;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;

    vector<Estudiante> estudiantes(n);

    // Inicializar códigos y nombres
    for(int i = 0; i < n; i++) {
        estudiantes[i].codigo = 100 + i + 1;
        cout << "Ingrese el nombre del estudiante " << i+1 << ": ";
        cin >> estudiantes[i].nombre;
        estudiantes[i].notas.resize(4); // 3 parciales + promedio
        double suma = 0;
        for(int j = 0; j < 3; j++) {
            cout << "Ingrese nota " << j+1 << ": ";
            cin >> estudiantes[i].notas[j];
            suma += estudiantes[i].notas[j];
        }
        estudiantes[i].notas[3] = suma / 3.0; // promedio
    }

    // Mostrar todos los estudiantes
    cout << "\nDatos de los estudiantes:\n";
    for(int i = 0; i < n; i++) {
        cout << "Codigo: " << estudiantes[i].codigo
             << ", Nombre: " << estudiantes[i].nombre << endl;
        for(int j = 0; j < 3; j++)
            cout << "Nota " << j+1 << ": " << estudiantes[i].notas[j] << "  ";
        cout << "Promedio: " << estudiantes[i].notas[3] << endl;
    }

    // Buscar estudiante por código
    int cod;
    cout << "\nIngrese el codigo a buscar: ";
    cin >> cod;
    int pos = -1;
    for(int i = 0; i < n; i++) {
        if(estudiantes[i].codigo == cod) {
            pos = i;
            break;
        }
    }

    if(pos != -1) {
        cout << "\nEstudiante encontrado:\n";
        cout << "Nombre: " << estudiantes[pos].nombre << endl;
        for(int j = 0; j < 3; j++)
            cout << "Nota parcial " << j+1 << ": " << estudiantes[pos].notas[j] << endl;
        cout << "Definitiva: " << estudiantes[pos].notas[3] << endl;
    } else {
        cout << "Codigo no encontrado.\n";
        return 0;
    }

    // Modificar nota
    int op;
    cout << "\nQue nota desea modificar?\n1. Nota 1\n2. Nota 2\n3. Nota 3\nSeleccione su opcion: ";
    cin >> op;

    if(op >= 1 && op <= 3) {
        double nuevaNota;
        cout << "Ingrese el nuevo valor de la nota " << op << ": ";
        cin >> nuevaNota;
        estudiantes[pos].notas[op-1] = nuevaNota;
        // recalcular promedio
        estudiantes[pos].notas[3] = (estudiantes[pos].notas[0] +
                                     estudiantes[pos].notas[1] +
                                     estudiantes[pos].notas[2]) / 3.0;

        cout << "\nDatos modificados:\n";
        cout << "Nombre: " << estudiantes[pos].nombre << endl;
        for(int j = 0; j < 3; j++)
            cout << "Nota parcial " << j+1 << ": " << estudiantes[pos].notas[j] << endl;
        cout << "Definitiva: " << estudiantes[pos].notas[3] << endl;
    } else {
        cout << "Error, ingrese un valor entre 1 y 3\n";
    }

    return 0;
}
