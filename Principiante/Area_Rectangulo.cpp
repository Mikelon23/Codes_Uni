#include <iostream>
using namespace std;

int main() {
	int ALTURA, BASE, AREA;
	cout << "Ingrese la altura y la base del rectangulo: ";
	cin >> ALTURA >> BASE;
	AREA = ALTURA * BASE;
	cout << "El area del rectangulo ingresado es: " << AREA << endl;
	return 0;
}
