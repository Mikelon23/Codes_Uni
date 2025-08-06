#include <iostream>
using namespace std;

int main() {
	int n1, n2, n3;
	double promedio;
	cout << "Ingrese tres calificaciones: ";
	cin >> n1 >> n2 >> n3;
	promedio = (n1 + n2 + n3) / 3.0;
	cout << "El promedio de las calificaciones ingresadas es: " << promedio << endl;
	return 0;
}
