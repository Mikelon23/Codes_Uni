#include <iostream>
using namespace std;

int main() {
    // Título del programa
    cout << "===== CONTADOR DE NOTAS 9 Y 10 =====" << endl;

    int n, i = 1, c9 = 0, c10 = 0, nota;

    cout << "Ingrese el numero de notas: ";
    cin >> n;

    while (i <= n) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;

        if (nota == 10) {
            c10++;
        } else if (nota == 9) {
            c9++;
        }

        i++;
    }

    cout << "\nEn " << n << " notas ingresadas hay " << c10 << " diez(es)." << endl;
    cout << "En " << n << " notas ingresadas hay " << c9 << " nueve(s)." << endl;

    return 0;
}
