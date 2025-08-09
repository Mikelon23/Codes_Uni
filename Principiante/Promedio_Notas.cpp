#include <iostream>

int main() {
	int nota1, nota2, nota3;
	float prom;
	std::cout << "Ingresar la nota 1: ";
	std::cin >> nota1;
	std::cout << "Ingresar la nota 2: ";
	std::cin >> nota2;
	std::cout << "Ingresar la nota 3: ";
	std::cin >> nota3;
	prom = (nota1 + nota2 + nota3) / 3.0f;
	std::cout << "El promedio de las notas ingresadas es: " << prom << std::endl;
	return 0;
}
