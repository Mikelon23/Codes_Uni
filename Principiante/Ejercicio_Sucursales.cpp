//    Se ingresan los precios de 5 articulos y las cantidades vendidas
// por una empresa en sus 4 sucursales. Informar:
//    * Las cantidades totales de cada articulo.
//    * La cantidad de articulos en la sucursal 2.
//    * La cantidad del articulo 3 en la sucursal 1.
//    * La recaudacion total de cada sucursal.
//    * La recaudacion total de la empresa.
//    * La sucursal de mayor recaudacion.
   
#include <iostream>
using namespace std;

int main() {
    // Variables
    int Prec[5];           // precios de artículos
    int Cant[4][5];        // cantidades: [sucursales][artículos]
    int Suma, NumMayor, Suc2, MayorRec, TotSuc, TotEmp;

    // Leer precios
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese Precio Articulo " << (i + 1) << ": ";
        cin >> Prec[i];
    }

    // Leer cantidades
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 5; i++) {
            cout << "Ingrese Cant. de Articulo " << (i + 1)
                 << ", en Sucursal " << (j + 1) << ": ";
            cin >> Cant[j][i];
        }
    }

    // Cantidades por artículos
    cout << "\nCantidades por articulos:\n";
    for (int i = 0; i < 5; i++) {
        Suma = Cant[0][i] + Cant[1][i] + Cant[2][i] + Cant[3][i];
        cout << "Total articulo " << (i + 1) << ": " << Suma << endl;
    }

    // Total de artículos sucursal 2
    Suc2 = 0;
    for (int i = 0; i < 5; i++) {
        Suc2 += Cant[1][i];  // sucursal 2 está en índice 1
    }
    cout << "\nTotal Sucursal 2: " << Suc2 << endl;

    // Informar Sucursal 1, Articulo 3
    cout << "Sucursal 1, Articulo 3: " << Cant[0][2] << endl;

    // Recaudaciones y totales
    MayorRec = 0;
    NumMayor = 0;
    TotEmp = 0;

    for (int j = 0; j < 4; j++) {
        TotSuc = 0;
        for (int i = 0; i < 5; i++) {
            TotSuc += Cant[j][i] * Prec[i];
        }
        cout << "Recaudaciones Sucursal " << (j + 1) << ": " << TotSuc << endl;

        if (TotSuc > MayorRec) {
            MayorRec = TotSuc;
            NumMayor = j + 1; // guardo la sucursal (1 a 4)
        }

        TotEmp += TotSuc;
    }

    cout << "\nRecaudacion total de la empresa: " << TotEmp << endl;
    cout << "Sucursal de Mayor Recaudacion: " << NumMayor << endl;

    return 0;
}
