/*10.- Diseñar un algoritmo para calcular el factorial de un número con la estructura de
repetición repetir.*/

#include<iostream>
using namespace std;

int main() {
	float cont,factorial,num;
	cout << "Ingrese un numero para conocer su factorial:" << endl;
	cin >> num;
	cont = 1;
	factorial = 1;
	do {
		factorial = factorial*cont;
		cont = cont+1;
	} while (cont<=num);
	cout << "El factorial del numero ingresado es: " << factorial << endl;
	system("pause");
	return 0;
}

