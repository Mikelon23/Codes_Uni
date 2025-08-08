#include <iostream>

int main() {
	int num, cen, residuo, dec, uni;
	std::cout << "Encontrar la unidad, decena, centena" << std::endl;
	std::cout << "Ingrese un numero de 3 cifras:" << std::endl;
	std::cin >> num;
	cen = (num - (num % 100)) / 100;
	residuo = num % 100;
	dec = (residuo - (residuo % 10)) / 10;
	uni = residuo % 10;
	std::cout << "Unidad : " << uni << std::endl;
	std::cout << "Decena : " << dec << std::endl;
	std::cout << "Centena : " << cen << std::endl;
	return 0;
}
