/*20.- Diseñar un algoritmo que nos permita saber si un número es un número perfecto.*/

#include<iostream>
using namespace std;

int main() {
	int n,perfecto,x;
	cout << "Ingrese un numero para determinar si es o no perfecto" << endl;
	cin >> n;
	x = 2;
	perfecto = 0;
	while (x<=n) {
		if (n%x==0) {
			perfecto = perfecto+(n/x);
		}
		x = x+1;
	}
	if (perfecto==n) {
		cout << "El numero ingresado es un numero perfecto" << endl;
	} else {
		cout << "El numero ingresado no es un numero perfecto" << endl;
	}
	system("pause");
	return 0;
}
