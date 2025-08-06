#include <iostream>

int main() {
	int seging, seg, min;
	std::cout << "Ingrese la cantidad de segundos: ";
	std::cin >> seging;
	min = seging / 60;
	seg = seging % 60;
	std::cout << "Los minutos son: " << min << std::endl;
	std::cout << "Los segundos son: " << seg << std::endl;
	return 0;
}
