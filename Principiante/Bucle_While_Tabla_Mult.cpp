#include <iostream>
using namespace std;

int main() {
    int num, i, mult;

    i = 1;
    cout << "Ingrese el numero para la tabla de multiplicar: ";
    cin >> num;

    while (i <= 12) {
        mult = num * i;
        cout << num << " x " << i << " = " << mult << endl;
        i = i + 1;
    }

    /* Alternativa con FOR:
    for (int i = 1; i <= 12; i++) {
        mult = num * i;
        cout << num << " x " << i << " = " << mult << endl;
    }
    */

    return 0;
}
