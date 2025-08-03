/*6.- Diseñar un algoritmo que calcule si un numero ingresado por teclado es o no primo*/

#include<iostream>
using namespace std;

int main() {
	int num;
	cout<<"Ingrese un numero para determinar si es o no primo"<<endl;
	cin>>num;
	bool primo=true;
	for (int i=2;i<num;i++) {
		if (num%i==0) primo=false;
	}
	if (primo==true)
	{
		cout << "El numero ingresado es primo" << endl;
	} else {
		cout << "El numero ingresado no es primo" << endl;
	}
	system("pause");
	return 0;
}
