#include <iostream>
#include <cmath>

int main() {
	double ca, cb, hip;
	std::cout << "Ingrese el valor de ca: ";
	std::cin >> ca;
	std::cout << "Ingrese el valor de cb: ";
	std::cin >> cb;
	hip = std::sqrt((ca * ca) + (cb * cb));
	std::cout << "El valor de la hipotenusa es : " << hip << std::endl;
	return 0;
}
