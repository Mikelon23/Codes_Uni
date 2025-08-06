#include <iostream>

int main() {
	int B, A;
	double area;
	std::cout << "Ingrese la base y la altura: ";
	std::cin >> B >> A;
	area = B * A / 2.0;
	std::cout << "El area del triangulo es: " << area << std::endl;
	return 0;
}
