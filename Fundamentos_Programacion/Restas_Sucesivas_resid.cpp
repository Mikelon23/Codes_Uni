/*1.- Diseñar un algoritmo para calcular el resto y cociente por medio de restas sucesivas.*/
#include<iostream>
using namespace std;

int main() {
	float cont,den,num,resto;
	resto = 0;
	cont = 0;
	cout << "Ingrese los valores a continuacion para calcular el resto y el cociente" << endl;
	cout << "Numerador" << endl;
	cin >> num;
	cout << "Denominador" << endl;
	cin >> den;
	do {
		num = num-den;
		resto = num;
		cont = cont+1;
	} while (num>=den);
	cout << "El resto es: " << resto << endl;
	cout << "El cociente es: " << cont << endl;
	system("pause");
	return 0;
}

