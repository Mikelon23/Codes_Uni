#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// ----- MENÚ -----
void menu() {
    cout << "\n===== MENU PRINCIPAL =====\n";
    cout << "1. Registrar estudiantes y notas\n";
    cout << "2. Visualizar estudiantes\n";
    cout << "3. Visualizar notas\n";
    cout << "4. Consultar nota\n";
    cout << "5. Listar estudiantes por apellido (a-z)\n";
    cout << "6. Listar estudiantes por notas (mayor a menor)\n";
    cout << "7. Actualizar notas\n";
    cout << "8. Salir\n";
    cout << "Seleccione su opcion: ";
}
// ----- ORDENAR VECTORES -----
void ordenar_vector(vector<string>& v) {
    sort(v.begin(), v.end()); // Ordena ascendente
}

void ordenar_vectorxnotas(vector<double>& v, vector<int>& vpos) {
    for (size_t i = 0; i < v.size(); i++) {
        for (size_t j = 0; j < v.size() - 1; j++) {
            if (v[j] < v[j + 1]) { // descendente
                swap(v[j], v[j + 1]);
                swap(vpos[j], vpos[j + 1]);
            }
        }
    }
}
// ----- GENERAR CODIGOS -----
void generar_codigos(vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        v[i] = 100 + i + 1;
    }
}
// ----- INGRESO DE NOMBRES Y NOTAS -----
void ingreso_nombres_notas(vector<string>& vec, vector<vector<double>>& mat) {
    for (size_t i = 0; i < vec.size(); i++) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin.ignore();
        getline(cin, vec[i]);
        double suma = 0;
        for (int j = 0; j < 3; j++) {
            cout << "Ingrese la nota " << j + 1 << ": ";
            cin >> mat[i][j];
            suma += mat[i][j];
        }
        mat[i][3] = suma / 3.0; // promedio
    }
}
// ----- VISUALIZACIONES -----
void visualizar_vector(const vector<string>& v) {
    for (const auto& elem : v) {
        cout << elem << "\n";
    }
}

void visualizar_vector(const vector<int>& v) {
    for (auto elem : v) {
        cout << elem << "\n";
    }
}

void visualizar_nombres(const vector<int>& vpos, const vector<string>& v) {
    for (auto pos : vpos) {
        cout << v[pos] << "\n";
    }
}

void visualizar_notas(const vector<vector<double>>& mat) {
    for (auto fila : mat) {
        for (auto valor : fila) {
            cout << valor << "  ";
        }
        cout << "\n";
    }
}

void visualizar_notasxcodigo(const vector<string>& vec,
                             const vector<vector<double>>& mat, int pos) {
    cout << "Nombre: " << vec[pos] << "\n";
    for (int j = 0; j < 4; j++) {
        if (j < 3)
            cout << "Nota parcial " << j + 1 << ": " << mat[pos][j] << "\n";
        else
            cout << "Definitiva: " << mat[pos][j] << "\n";
    }
}
// ----- BUSCAR CODIGO -----
int buscar_codigo(int cod, const vector<int>& vc) {
    for (size_t i = 0; i < vc.size(); i++) {
        if (vc[i] == cod) return i;
    }
    return -1;
}
// ================== PROGRAMA PRINCIPAL ==================
int main() {
    int n;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;

    vector<vector<double>> mat(n, vector<double>(4, 0));
    vector<string> vec(n);
    vector<int> vcod(n);
    vector<double> vecnotas(n);
    vector<int> vecpos(n);

    int op, op2, cod, pos;
    string PalabraClave = "";

    do {
        menu();
        cin >> op;

        switch (op) {
            case 1:
                cout << "Ingrese las notas de cada estudiante\n";
                generar_codigos(vcod);
                ingreso_nombres_notas(vec, mat);
                break;

            case 2:
                cout << "Los codigos son:\n";
                visualizar_vector(vcod);
                cout << "Los estudiantes son:\n";
                visualizar_vector(vec);
                break;

            case 3:
                cout << "Las notas son:\n";
                visualizar_notas(mat);
                break;

            case 4:
                cout << "Ingrese el codigo a buscar: ";
                cin >> cod;
                pos = buscar_codigo(cod, vcod);
                if (pos != -1)
                    visualizar_notasxcodigo(vec, mat, pos);
                else
                    cout << "Error. El codigo no existe.\n";
                break;

            case 5:
                cout << "Los estudiantes ordenados alfabeticamente son:\n";
                ordenar_vector(vec);
                visualizar_vector(vec);
                break;

            case 6:
                for (int i = 0; i < n; i++) {
                    vecpos[i] = i;
                    vecnotas[i] = mat[i][3];
                }
                ordenar_vectorxnotas(vecnotas, vecpos);
                cout << "Los estudiantes ordenados por notas descendente:\n";
                cout << "Notas:\n";
                for (auto nota : vecnotas) cout << nota << "\n";
                cout << "Nombres:\n";
                visualizar_nombres(vecpos, vec);
                break;

            case 7:
                cout << "Ingrese el codigo a buscar: ";
                cin >> cod;
                pos = buscar_codigo(cod, vcod);
                if (pos != -1) {
                    visualizar_notasxcodigo(vec, mat, pos);
                    cout << "Que nota desea modificar?\n";
                    cout << "1. Nota 1\n2. Nota 2\n3. Nota 3\n";
                    cout << "Seleccione su opcion: ";
                    cin >> op2;
                    double nuevaNota;
                    switch (op2) {
                        case 1:
                            cout << "Ingrese el nuevo valor de la nota 1: ";
                            cin >> nuevaNota;
                            mat[pos][0] = nuevaNota;
                            break;
                        case 2:
                            cout << "Ingrese el nuevo valor de la nota 2: ";
                            cin >> nuevaNota;
                            mat[pos][1] = nuevaNota;
                            break;
                        case 3:
                            cout << "Ingrese el nuevo valor de la nota 3: ";
                            cin >> nuevaNota;
                            mat[pos][2] = nuevaNota;
                            break;
                        default:
                            cout << "Error, ingrese un valor entre 1 y 3\n";
                    }
                    mat[pos][3] = (mat[pos][0] + mat[pos][1] + mat[pos][2]) / 3;
                    cout << "Los nuevos datos modificados son:\n";
                    visualizar_notasxcodigo(vec, mat, pos);
                } else {
                    cout << "Error. El codigo no existe.\n";
                }
                break;

            case 8:
                PalabraClave = "Salir";
                break;

            default:
                cout << "Error, ingrese un valor entre 1 y 8\n";
        }

    } while (PalabraClave != "Salir");

    return 0;
}