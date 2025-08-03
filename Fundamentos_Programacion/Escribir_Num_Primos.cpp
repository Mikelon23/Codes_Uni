/*7.- Diseñar un algoritmo que escriba todos los números primos del 1 al 100.*/

#include<iostream>
using namespace std;

int main() {
	int cont,i,num;
	cout << "Los numeros primos de los cien primeros numeros son: " << endl;
	for (num=1;num<=100;num++) {
		i = 1;
		cont = 0;
		while (i<=num) {
			if (num%i==0) {
				cont = cont+1;
			}
			i = i+1;
		}
		if (cont==2) {
			cout << num << endl;
		}
	}
	system("pause");
	return 0;
}
