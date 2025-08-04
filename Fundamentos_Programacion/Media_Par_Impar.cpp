/*13.- Diseñar un algoritmo parar calcular la media de los números pares e impares, sólo se
ingresará diez números.*/

#include<iostream>
using namespace std;

int main() {
	float cont,contneg,contpos,medneg,medpos,num,sumneg,sumpos;
	cont = 0;
	contpos = 0;
	contneg = 0;
	sumpos = 0;
	sumneg = 0;
	medpos = 0;
	medneg = 0;
	cout<<"Ingrese los 10 numeros para determinar las operaciones"<<endl;
	do {
		cin >> num;
		if (num==2) {
			sumpos = sumpos+num;
			contpos = contpos+1;
		} else {
			if (num!=2) {
				sumneg = sumneg+num;
				contneg = contneg+1;
			}
		}
		cont = cont+1;
	} while (cont!=10);
	medpos = sumpos/contpos;
	medneg = sumneg/contneg;
	cout << "La media de los numeros positivos es: " << medpos << endl;
	cout << "La media de los numeros negativos es: " << medneg << endl;
	system("pause");
	return 0;
}
