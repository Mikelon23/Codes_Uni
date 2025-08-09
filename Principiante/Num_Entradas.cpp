#include <iostream>
#include <cmath>

int main() {
	double monto;
	std::cout << "Cuantas entradas se puede comprar si el valor es de $15" << std::endl;
	std::cout << "Ingrese el monto en dolares: ";
	std::cin >> monto;
	std::cout << "Numero de entradas: " << static_cast<int>(monto / 15) << std::endl;
	return 0;
}
