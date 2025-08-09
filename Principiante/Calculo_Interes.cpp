#include <iostream>
using namespace std;

int main() {
	int meses;
	double monto = 100.0, interes, Pagototal;
	cout << "Calcular el interes 2% de un prestamo de $100.00" << endl;
	cout << "Ingrese el numero de meses: ";
	cin >> meses;
	interes = monto * (meses * 0.02);
	Pagototal = monto + interes;
	cout << "Pago total : " << Pagototal << endl;
	return 0;
}
