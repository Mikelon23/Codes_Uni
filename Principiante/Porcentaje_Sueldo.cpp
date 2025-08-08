#include <iostream>
using namespace std;

int main() {
	int numhijos = 0, dias_sin_trabajar = 0;
	float sueldobase = 0, sueldo_a_pagar = 0;

	cout << "Ingrese el sueldo base: ";
	cin >> sueldobase;
	cout << "Ingrese el numero de hijos: ";
	cin >> numhijos;
	cout << "Ingrese los dias no laborales: ";
	cin >> dias_sin_trabajar;

	sueldo_a_pagar = sueldobase + (numhijos * 100) + (dias_sin_trabajar * 25);
	cout << "Sueldo final: " << sueldo_a_pagar << endl;

	return 0;
}
