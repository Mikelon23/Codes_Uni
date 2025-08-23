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