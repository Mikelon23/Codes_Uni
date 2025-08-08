#include <iostream>
using namespace std;

int main() {
	int aprobados, no_aprobados;
	cout << "Ingrese el numero de alumnos aprobados y no aprobados del curso" << endl;
	cout << "Alumnos que si aprobaron: ";
	cin >> aprobados;
	cout << "Alumnos que no aprobaron: ";
	cin >> no_aprobados;
	cout << "Aprobados: " << (aprobados * 100) / (aprobados + no_aprobados) << "%" << endl;
	cout << "No aprobados: " << (no_aprobados * 100) / (aprobados + no_aprobados) << "%" << endl;
	return 0;
}
