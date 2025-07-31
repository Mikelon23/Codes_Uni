/*Escriba un programa para encontrar la suma de los elementos diagonales principales de una
matriz en C++*/
#include<iostream>
using namespace std;
int main(){
	int i, j, matriz[10][10], filas, columnas, sumdiagp=0;
	do {
		system("cls");
		cout << "Ingrese el numero de filas y columnas de la matriz (entre 1 y 10): ";
		cin >> filas;
		columnas = filas;
	}while(filas<0 || filas>10);
	cout << "Ingrese los elementos de la matriz (enteros), segun el indice que se solicite\n";
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout << "posicion (" << i << "," << j << "): ";
			cin >> matriz[i][j];
		}
	}
	cout << "Ingreso exitoso de informacion, presione una tecla para continuar!!";
	system("pause>cin");
	system("cls");
	cout << "Los elementos de la matriz son:\n";
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout << "   " << matriz[i][j];
			if(i==j){
				sumdiagp=sumdiagp+matriz[i][j];
			}
		}
		cout << endl;
	}
	cout << endl << "la suma de los elementos de la diagonal principal es: " << sumdiagp << endl;
	system("pause");
	return 0;
}
