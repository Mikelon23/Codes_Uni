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