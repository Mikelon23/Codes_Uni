/*5.- Diseñar un algoritmo para calcular la suma de los primeros cien números con un ciclo
mientras.*/

#include<iostream>
using namespace std;

int main() {
	int cont,suma;
	cont = 0;
	suma = 0;
	while ((cont<100)) {
		cont = cont+1;
		suma = suma+cont;
	}
	cout << "La suma de los cien primeros numeros son: " << suma << endl;
	system("pause");
	return 0;
}
