#include <iostream>
#include <cmath>

int main() {
	double r, l, a;
	std::cout << "Ingrese el radio del circulo: ";
	std::cin >> r;
	l = 2 * M_PI * r;
	a = M_PI * r * r;
	std::cout << "La longitud del circulo es: " << l << std::endl;
	std::cout << "El area del circulo es: " << a << std::endl;
	return 0;
}
