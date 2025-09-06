#include <iostream>
using namespace std;

int main() {
    double s, st, hd, hn, chd, chn, td, tn;
    int h;

    cout << "Ingrese su sueldo base: ";
    cin >> s;

    cout << "Cuantas horas extras en la maniana del mes: ";
    cin >> hd;

    cout << "Cuantas horas extras en la noche del mes: ";
    cin >> hn;

    cout << "Ingrese el valor de la hora normal: ";
    cin >> h;
    
    // Calculo de horas extras con recargo
    chd = h + (h * 0.25); // recargo 25% mañana
    chn = h + (h * 0.35); // recargo 35% noche

    // Pago de horas extras
    td = hd * chd;
    tn = hn * chn;

    // Sueldo total
    st = s + td + tn;

    cout << "El sueldo que recibira en el mes es: " << st << endl;

    return 0;
}
