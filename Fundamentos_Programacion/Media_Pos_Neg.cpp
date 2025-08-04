/*12.- Diseñar un algoritmo para calcular la media de los números positivos y negativos, sólo
se ingresarán diez números.*/

#include<iostream>
using namespace std;

int main() {
	float cont,contneg,contpos,medneg,medpos,num,sumneg,sumpos;
	cout << "Ingrese 10 numeros positivos o negativos para realizar las operaciones" << endl;
	cont = 0;
	contpos = 0;
	contneg = 0;
	sumpos = 0;
	sumneg = 0;
	medpos = 0;
	medneg = 0;
	do {
		cin >> num;
		if (num>0) {
			sumpos = sumpos+num;
			contpos = contpos+1;
		} else {
			sumneg = sumneg+num;
			contneg = contneg+1;
		}
		cont = cont+1;
	} while (cont!=10);
	medpos = sumpos/contpos;
	medneg = sumneg/contneg;
	cout << "La media de los numeros positivos ingresados es: " << medpos << endl;
	cout << "La media de los numeros negativos ingresados es: " << medneg << endl;
	system("pause");
	return 0;
}
