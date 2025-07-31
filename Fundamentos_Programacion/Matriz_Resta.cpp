/*resta de dos matrices en C++*/
#include<iostream>
using namespace std;
int main(){
	int i, j, matriz[10][10], matriz2[10][10], resta[10][10], filas, columnas, band;
	do {
		system("cls");
		cout << "Programa que resta dos matrices ingresadas por teclado." << endl;
		cout << "Ingrese el numero de filas de las matrices (entre 1 y 10): ";
		cin >> filas;
		cout << "Ingrese el numero de columnas de las matrices (entre 1 y 10): ";
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
		}
	}
do{
	system("cls");
	cout << "1.- restar primer matriz menos segunda matriz" << endl;
	cout << "2.- restar segunda matriz menos primer matriz" << endl;
	cin >> band;	
}while(band<1 || band>2);
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
	if(band==1){
		cout << "Los elementos de la matriz resta son:\n";
		for(i=0; i<filas; i++){
			for(j=0; j<columnas; j++){
				resta[i][j]=matriz[i][j]-matriz2[i][j];
				cout << "   " << resta[i][j];
			}
			cout << endl;
		}
	}
	else{
		cout << "Los elementos de la matriz resta son:\n";
		for(i=0; i<filas; i++){
			for(j=0; j<columnas; j++){
				resta[i][j]=matriz2[i][j]-matriz[i][j];
				cout << "   " << resta[i][j];
			}
			cout << endl;
		}
		
	}
	system("pause");
	return 0;
}