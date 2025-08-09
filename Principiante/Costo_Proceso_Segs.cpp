#include <iostream>
using namespace std;

int main() {
	int hora, min, seg;
	double Total_seg;
	cout << "Costo total del proceso en segundos" << endl;
	cout << "Ingrese el numero de horas: ";
	cin >> hora;
	cout << "Ingrese el numero de minutos: ";
	cin >> min;
	cout << "Ingrese el numero de segundos: ";
	cin >> seg;
	Total_seg = ((hora * 3600) + (min * 60) + seg) * 0.25;
	cout << "Costo total: " << Total_seg << endl;
	return 0;
}
