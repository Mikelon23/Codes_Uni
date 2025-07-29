/*01. calcular el promedio de tres notas.
Hacer un programa para calcular el promedio de 3 notas; si el promedio es mayor que 10.5
mostrar aprobado de lo contrario mostrar desaprobado.*/

//por defecto, C++ al dividir dos enteros nos devuelve un resultado entero. (10/3)=3
//para que C++ retorne con decimal, debe dividir entre numeros reales (float)
//Recordar que los reales contienen a los enteros.

#include<iostream>
using namespace std;

int main(){
	//definicion de variables
	float n1, n2, n3, prom;	
	//ingreso de datos
	cout << "\nIngrese una calificacion (entre 1 y 20): ";
	cin >> n1;
	while(n1<1 || n1>20){
		system("cls");
		cout << "\nIngrese una calificacion (entre 1 y 20): ";
		cin >> n1;
	}
	system("cls");
	cout << "\nIngrese la segunda calificacion (entre 1 y 20): ";
	cin >> n2;
	while(n2<1 || n2>20){
		system("cls");
		cout << "\nIngrese la segunda calificacion (entre 1 y 20): ";
		cin >> n2;
	}
	system("cls");
	cout << "\nIngrese la tercera calificacion (entre 1 y 20): ";
	cin >> n3;
	while(n3<1 || n3>20){
		system("cls");
		cout << "\nIngrese la tercera calificacion (entre 1 y 20): ";
		cin >> n3;
	}
	//proceso
	prom=(n1+n2+n3)/3;
	//Muestra de resultados	
	system("cls");
	cout << "nota 1: " << n1 << endl;
	cout << "nota 2: " << n2 << endl;
	cout << "nota 3: " << n3 << endl;
	cout << "\nel promedio de las notas ingresadas es:" << prom << endl;
	system("pause");
	return 0;
}
