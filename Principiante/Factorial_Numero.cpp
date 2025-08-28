#include <iostream>
using namespace std;

int main() {
    cout << "===== FACTORIAL DE UN NUMERO =====" << endl;

    int n, fact = 1;

    cout << "Ingrese el numero para determinar su factorial: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        fact *= i;
    }

    cout << "\nEl factorial del numero " << n << " es: " << fact << endl;

    return 0;
}
