#include <iostream>
using namespace std;

int main() {
    int N, M;

    cout << "Ingrese el numero: ";
    cin >> N;

    cout << "Ingrese el divisor: ";
    cin >> M;

    if (N % M == 0) {
        cout << M << " es divisor exacto de " << N << "." << endl;
    } else {
        cout << "El resto de dividir " << N << " por " << M << " es: " << (N % M) << endl;
    }

    return 0;
}
