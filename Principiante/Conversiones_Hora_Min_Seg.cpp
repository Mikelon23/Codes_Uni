#include <iostream>

int main() {
	int horas, minutos, segunds, seg;
	std::cout << "Conversiones entre horas, minutos, segundos\n";
	std::cout << "Ingrese cantidad en segundos: ";
	std::cin >> segunds;
	horas = segunds / 3600;
	minutos = (segunds % 3600) / 60;
	seg = segunds % 60;
	std::cout << "horas: " << horas << std::endl;
	std::cout << "minutos: " << minutos << std::endl;
	std::cout << "segundos: " << seg << std::endl;
	return 0;
}
