#include <iostream>
using namespace std;

int main() {
	double velocidad, velocidad2;
	cout << "Ingrese una velocidad en kilometros por hora: ";
	cin >> velocidad;
	velocidad2 = velocidad * 1000 / 3600;
	cout << "La velocidad en metros por segundo es: " << velocidad2 << endl;
	return 0;
}
