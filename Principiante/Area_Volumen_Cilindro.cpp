#include <iostream>
#define PI 3.14159265358979323846

int main() {
	double radio, altura, area, vol;
	std::cout << "Ingrese el radio y la altura del cilindro: ";
	std::cin >> radio >> altura;
	area = 2 * PI * radio * (altura + radio);
	vol = PI * radio * radio * altura;
	std::cout << "El area del cilindro es: " << area << std::endl;
	std::cout << "El volumen del cilindro es: " << vol << std::endl;
	return 0;
}
