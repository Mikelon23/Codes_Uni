#include <iostream>

int main() {
	float n1, n2, n3, pond1, pond2, pond3, notafinal;
	std::cout << "Ingrese las tres notas: ";
	std::cin >> n1 >> n2 >> n3;
	pond1 = n1 * 0.3f;
	pond2 = n2 * 0.3f;
	pond3 = n3 * 0.4f;
	notafinal = pond1 + pond2 + pond3;
	std::cout << "La nota obtenida es: " << notafinal << std::endl;
	return 0;
}
