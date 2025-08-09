#include <iostream>

int main() {
	double salario, descuento;
	std::cout << "Ingrese su salario que recibe anualmente: ";
	std::cin >> salario;
	descuento = salario * 0.2;
	std::cout << "Descuento 20%: " << descuento << std::endl;
	std::cout << "Salario total: " << (salario - descuento) << std::endl;
	return 0;
}
