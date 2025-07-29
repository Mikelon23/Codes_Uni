/*Se tiene registrada la produccion (unidades) logradas por un operario a lo largo de
la semana (lunes a sabado). Elabore un algoritmo que nos muestre o nos diga si el
operario recibira incentivos sabiendo que el promedio de produccion minima es de
100 unidades.*/
#include <iostream>
using namespace std;
int main()
{
    int pl, pm, pmir, pj, pv, ps, produccionp;
    cout << "INGRESE LA PRODUCCION DEL DIA LUNES\n";
    cin >> pl;
    cout << "INGRESE LA PRODUCCION DEL DIA MARTES\n";
    cin >> pm;
    cout << "INGRESE LA PRODUCCION DEL DIA MIERCOLES\n";
    cin >> pmir;
    cout << "INGRESE LA PRODUCCION DEL DIA JUEVES\n";
    cin >> pj;
    cout << "INGRESE LA PRODUCCION DEL DIA VIERNES\n";
    cin >> pv;
    cout << "INGRESE LA PRODUCCION DEL DIA SABADO\n";
    cin >> ps;
    produccionp = pl + pm + pmir + pj + pv + ps;
    if (produccionp > 100)
    {
        cout << "RECIBIRA INCENTIVOS";
    }
    else
    {
        cout << "NO RECIBIRA INCENTIVOS";
    }
    return 0;
}
