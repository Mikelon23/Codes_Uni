#include <iostream>

int main() {
	int mes, dia, tiempo;
	std::cout << "Dias transcurridos en un anio" << std::endl;
	std::cout << "Ingrese el numero de mes actual: ";
	std::cin >> mes;
	std::cout << "Ingrese el numero del dia actual: ";
	std::cin >> dia;
	tiempo = ((mes - 1) * 30) + dia;
	std::cout << std::endl;
	std::cout << "Dias transcurridos: " << tiempo << std::endl;
	return 0;
}
