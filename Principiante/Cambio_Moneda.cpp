#include <iostream>

int main() {
	double soles;
	std::cout << "Ingrese el monto de dinero en soles para realizar el cambio: ";
	std::cin >> soles;
	std::cout << "EURO: " << soles / 4 << std::endl;
	std::cout << "DOLAR: " << soles / 2.70 << std::endl;
	return 0;
}
