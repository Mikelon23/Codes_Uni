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
