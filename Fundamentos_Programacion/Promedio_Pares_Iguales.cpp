/*9- Diseñar un algoritmo para calcular el promedio de los números pares menores o iguales
a n.*/

#include<iostream>
using namespace std;

int main() {
	int cont,contador,i,num,suma;
	cout << "Ingrese un numero para determinar el promedio de los numeros pares" << endl;
	cin >> num;
	i = 1;
	contador = 1;
	suma = 0;
	cont = 0;
	while (contador<=num) {
		if (i%2==0) {
			cont = cont+1;
			cout << i << endl;
			suma = suma+i;
			contador = contador+1;
		}
		i = i+1;
	}
	cout << "El promedio de los numeros pares es: " << suma/cont << endl;
	system("pause");
	return 0;
}
