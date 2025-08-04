/*14.- En cierta provincia desean saber cuál es la ciudad con la población de más personas, si
dicha provincia tiene once ciudades, diseñar un algoritmo que nos permita saber eso (Se
ingresarán los 11 valores que representan al número de habitantes de cada población).*/

#include<iostream>
using namespace std;

int main() {
	int ciudad,cont,mayor;
	cout << "Ingrese el numero de personas de las 11 ciudades" << endl;
	mayor = 0;
	cont = 1;
	while (cont<=11) {
		cin >> ciudad;
		if (ciudad>mayor) {
			mayor = ciudad;
		}
		cont = cont+1;
	}
	cout << "La poblacion con mayor numero de personas es: " << mayor << endl;
	system("pause");
	return 0;
}

