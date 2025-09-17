#include <iostream>
#include <string>
using namespace std;

int main() {
    string v_mes[12];
    int v_dias[12];
    int n_mes;

    // Inicializamos los meses
    v_mes[0] = "Enero";
    v_mes[1] = "Febrero";
    v_mes[2] = "Marzo";
    v_mes[3] = "Abril";
    v_mes[4] = "Mayo";
    v_mes[5] = "Junio";
    v_mes[6] = "Julio";
    v_mes[7] = "Agosto";
    v_mes[8] = "Septiembre";
    v_mes[9] = "Octubre";
    v_mes[10] = "Noviembre";
    v_mes[11] = "Diciembre";

    // Inicializamos los días
    v_dias[0] = 31;
    v_dias[1] = 28; // No consideramos bisiesto en este caso
    v_dias[2] = 31;
    v_dias[3] = 30;
    v_dias[4] = 31;
    v_dias[5] = 30;
    v_dias[6] = 31;
    v_dias[7] = 31;
    v_dias[8] = 30;
    v_dias[9] = 31;
    v_dias[10] = 30;
    v_dias[11] = 31;

    cout << "Ingrese el numero del mes que quiere visualizar (1-12): ";
    cin >> n_mes;

    if (n_mes >= 1 && n_mes <= 12) {
        cout << "Corresponde al mes de " << v_mes[n_mes - 1] 
             << " y tiene " << v_dias[n_mes - 1] << " dias." << endl;
    } else {
        cout << "Numero de mes invalido." << endl;
    }

    // OPCIONAL: Mostrar todos los meses y sus días
    /*
    cout << "\nMes         Dias" << endl;
    for (int i = 0; i < 12; i++) {
        cout << v_mes[i] << "   " << v_dias[i] << endl;
    }
    */

    return 0;
}
