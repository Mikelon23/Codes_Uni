/*Escribir las instrucciones para realizar cada una de las siguientes operaciones:*/
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

using namespace std;
int main(){

	struct Tdato{
	int b;
	char s[100];
};

	int x, n, a[10]={1,2,3,4,5,6,7,8,9,0};
	double f;
	char nombre[]="Ejercicios ficheros binarios";
	Tdato p;
	ifstream f1;
	ofstream f2;
	f1.open("entrada.dat", ios::binary);
	f2.open("salida.dat", ios::binary);

	//a. Escribir el dato entero x en el fichero.
	x=349;
	f2.write((char*)&x,sizeof(int));
	//b. Escribir el dato double f en el fichero.
	f=3.2332;
	f2.write((char*)&f,sizeof(double));
	//c. Escribir los 5 primeros elementos del array a en el fichero.
	f2.write((char*)&a[0],5*sizeof(int));
	//d. Escribir los 10 primeros caracteres de la cadena nombre en el fichero.
	f2.write(nombre,10);
	//e. Escribir el dato de tipo Tdato p en el fichero.
	p.b=894;
