/*4.- Diseñar un algoritmo para calcular la suma de los primeros cien números con un ciclo
para.*/

#include<iostream>
using namespace std;

int main() {
	float i,suma;
	suma = 0;
	for (i=1;i<=100;i++) {
		suma = suma+i;
	}
	cout << "La suma de los cien primeros numeros son: " << suma << endl;
	system("pause");
	return 0;
}

