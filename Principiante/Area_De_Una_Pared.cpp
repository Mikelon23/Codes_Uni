#include <iostream>
using namespace std;

int main() {
	int alto, largo;
	double arena;
	cout << "Calculo del area de la pared" << endl;
	cout << "Ingrese la altura que tiene la pared: ";
	cin >> alto;
	cout << "Ingrese la longitud de la pared: ";
	cin >> largo;
	arena = ((alto * largo) * 0.25);
	cout << "Arena necesaria que se requiere: " << arena << endl;
	return 0;
}
