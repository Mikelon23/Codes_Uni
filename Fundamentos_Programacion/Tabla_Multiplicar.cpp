/*Tabla de multiplicar de un numero del 1 al 12 ingresado por teclado*/
#include<iostream>
using namespace std;

int main(){
	//definicion de variables
	int num;
	//ingreso de datos
	cout << "Ingrese un numero para mostrar su tabla de multiplicar (entre 1 y 12): ";
	cin >> num;
	while(num<1 || num>12){
		system("cls");
		cout << "Ingrese un numero para mostrar su tabla de multiplicar (entre 1 y 12): ";
		cin >> num;	
	}
	//proceso
	for (int i=0; i<=12; i++){
		cout << num << " * " << i << " = " << num*i << endl;
	}	
	system("pause");
	return 0;
}
