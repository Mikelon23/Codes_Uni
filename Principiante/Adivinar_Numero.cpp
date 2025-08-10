// Juego simple que pide al usuario que adivine un numero en 10 intentos

#include <iostream>
#include <cstdlib>
#include <ctime>

void Adivina_Numero() {
	int intentos, num_secreto, num_ingresado;
	intentos = 10;
	num_secreto = rand() % 100 + 1;

	std::cout << "Adivine el numero (de 1 a 100):" << std::endl;
	std::cin >> num_ingresado;
	while (num_secreto != num_ingresado && intentos > 1) {
		if (num_secreto > num_ingresado) {
			std::cout << "Muy bajo" << std::endl;
		} else {
			std::cout << "Muy alto" << std::endl;
		}
		intentos = intentos - 1;
		std::cout << "Le quedan " << intentos << " intentos:" << std::endl;
		std::cin >> num_ingresado;
	}

	if (num_secreto == num_ingresado) {
		std::cout << "Exacto! Usted adivino en " << 11 - intentos << " intentos." << std::endl;
	} else {
		std::cout << "El numero era: " << num_secreto << std::endl;
	}
}

int main() {
	srand(static_cast<unsigned int>(time(0))); // Inicializa la semilla para números aleatorios
	Adivina_Numero();
	return 0;
}
