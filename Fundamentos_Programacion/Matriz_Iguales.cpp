/*Escriba un programa para verificar si dos matrices son iguales o no en C++*/
#include<iostream>
using namespace std;
int main(){
	int i, j, matriz[10][10], matriz2[10][10], filas, columnas;
	bool band=true;   // si cambia a falso en la ejecución, las matrices son diferentes.
	do {
		system("cls");
		cout << "Programa que verifica si dos matrices ingresadas por teclado son iguales" << endl;
		cout << "Ingrese el numero de filas de la matriz (entre 1 y 10): ";
		cin >> filas;
		cout << "Ingrese el numero de columnas de la matriz (entre 1 y 10): ";
		cin >> columnas;
	}while(filas<0 || filas>10 || columnas<0 || columnas>10);
	cout << "Ingrese los elementos de la primer matriz (enteros), segun el indice que se solicite\n";
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout << "posicion (" << i << "," << j << "): ";
			cin >> matriz[i][j];
		}
	}
	cout << "Ingrese los elementos de la segunda matriz (enteros), segun el indice que se solicite\n";
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout << "posicion (" << i << "," << j << "): ";
			cin >> matriz2[i][j];
			if(matriz[i][j] != matriz2[i][j]){
				band=false;
			}
		}
	}
	cout << "Ingreso exitoso de informacion, presione una tecla para continuar!!";
	system("pause>cin");
	system("cls");
	cout << "Los elementos de la primer matriz son:\n";
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout << "   " << matriz[i][j];
		}
		cout << endl;
	}
	cout << "Los elementos de la segunda matriz son:\n";
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout << "   " << matriz2[i][j];
		}
		cout << endl;
	}
	if(band){
		cout << "las matrices son iguales!!!" << endl;
	}else{
		cout << "las matrices son diferentes" << endl;
	}
	system("pause");
	return 0;
}
