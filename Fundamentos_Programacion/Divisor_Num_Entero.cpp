/*19.- Diseñar un algoritmo que muestre los divisores de un numero entero.*/

#include<iostream>
using namespace std;

int main() {
	int num;
	float i;
	cout << "Ingrese un numero entero para determinar sus divisores" << endl;
	cin >> num;
	for (int i=1;i<=num;i++) {
		if (num%i==0) {
			cout << "Los divisores del numero entero ingresado son: " << i << endl;
		}
	}
	system("pause");
	return 0;
}

