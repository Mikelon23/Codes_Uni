/*2.- Diseñar un algoritmo para determinar la media de una lista indefinida de números
positivos o ceros, entonces se debe acabar el programa al ingresar un número negativo.*/

#include<iostream>
using namespace std;

int main() {
	float cont,i,media,n;
	cout << "Ingrese un numero positivo para realizar una operacion" << endl;
	cout << "Para terminar con la ejecucion del programa, ingrese un numero negativo" << endl;
	cin >> n;
	media = 0;
	cont = 0;
	i = 0;
	while ((n>=0)) {
		media = media+n;
		cont = cont+1;
		cin >> n;
	}
	i = media/cont;
	cout << "La media de los numeros ingresados es: " << i << endl;
	system("pause");
	return 0;
}

