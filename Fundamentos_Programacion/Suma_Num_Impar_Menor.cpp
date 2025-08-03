/*8.- Diseñar un algoritmo para calcular la suma de los números impares menores o iguales a
n.*/

#include<iostream>
using namespace std;

int main() {
	int i,num,suma;
	cout << "Ingrese un numero para realizar la correspondiente suma de los numeros impares:" << endl;
	cin >> num;
	suma = 0;
	for (i=1;i<=num;i+=2) {
		suma = suma+i;
	}
	cout << "La suma total de los impares del numero ingresado es: " << suma << endl;
	system("pause");
	return 0;
}

