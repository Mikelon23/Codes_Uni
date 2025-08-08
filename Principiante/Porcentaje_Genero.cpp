#include <iostream>

int main() {
	double ch, cm, total, phom, pmuj;
	std::cout << "Ingrese la cantidad de hombres: ";
	std::cin >> ch;
	std::cout << "Ingrese la cantidad de mujeres: ";
	std::cin >> cm;
	total = ch + cm;
	phom = ch / total * 100;
	pmuj = cm / total * 100;
	std::cout << "porcentaje de hombres: " << phom << std::endl;
	std::cout << "porcentaje de mujeres: " << pmuj << std::endl;
	return 0;
}
