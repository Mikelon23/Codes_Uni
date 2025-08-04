/*11.- Diseñar un algoritmo que permita calcular el producto de 2 números enteros por sumas
sucesivas empleando la estructura de programación para.*/

#include<iostream>
using namespace std;

int main() {
	float aux,i,num1,num2;
	cout << "Ingrese 2 numeros enteros para encontrar el producto mediante sumas sucesivas" << endl;
	cin >> num1;
	cin >> num2;
	aux = 0;
	for (i=1;i<=num2;i++) {
		aux = aux+num1;
		cout << num1 << endl;
	}
	cout << "Resultado del producto mediante sumas sucesivas es: " << aux << endl;
	system("pause");
	return 0;
}

