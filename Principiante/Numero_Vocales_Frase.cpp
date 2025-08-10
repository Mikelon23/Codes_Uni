// Este ejemplo muestra como utilizar las funciones para manejo 
// de cadenas de caracteres. Requiere que el perfil de lenguaje
// habilite estas funciones. Si al intentar ejecutar obtiene
// errores en las funciones, revise su configuracion en el
// item "Opciones del lenguaje" del menú "Configurar".
#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string frase, vocales = "aeiouAEIOUáéíóúÁÉÍÓÚ";
	int cantVocales = 0;

	// el usuario ingresa una frase, vamos a contar cuantas vocales tiene
	std::cout << "Ingrese una frase: ";
	std::getline(std::cin, frase);

	// pasamos toda la frase a minusculas para no tener que preguntar 2 veces por cada vocal
	std::transform(frase.begin(), frase.end(), frase.begin(), ::tolower);

	// lista de letras que vamos a buscar
	// vocales ya definida arriba

	// comparar todas las letras de frase con las de vocales y contar coincidencias
	for (size_t i = 0; i < frase.length(); ++i) {
		for (size_t j = 0; j < vocales.length(); ++j) {
			if (frase[i] == vocales[j]) {
				cantVocales = cantVocales + 1;
			}
		}
	}

	std::cout << "La frase contiene " << cantVocales << " vocales." << std::endl;

	return 0;
}
