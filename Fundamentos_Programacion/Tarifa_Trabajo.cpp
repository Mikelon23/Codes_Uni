/*Se requiere el algoritmo para elaborar la planilla de un empleado. Para ello se
dispone de sus horas laboradas en el mes, asi como de la tarifa por hora*/
#include <iostream>
using namespace std;
int main()
{
    int horas;
    float pago, s;
    cout << "INGRESE LAS HORAS LABORADAS\n";
    cin >> horas;
    cout << "INGRESE EL PAGO POR LAS HORAS LABORADAS\n";
    cin >> pago;
    s = horas * pago;
    cout << "EL PAGO ES:" << s << endl;

    return 0;
}
