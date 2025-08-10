#include <iostream>
using namespace std;

int main() {
	double precio, total, descuento;
	cout << "Ingrese el precio: ";
	cin >> precio;
	descuento = precio * 0.1;
	total = precio - descuento;
	cout << "Su descuento es de: " << descuento << endl;
	cout << "El precio a pagar es: " << total << endl;
	return 0;
}
