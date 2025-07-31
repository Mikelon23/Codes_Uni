/*multiplicacion de dos matrices en C++*/
#include<iostream>
using namespace std;
int main(){
	int i, j, k, matriz[10][10], matriz2[10][10], mult[10][10], filas, filas2, columnas, columnas2, band;
	do {
		system("cls");
		cout << "Programa que multiplica dos matrices ingresadas por teclado." << endl;
		cout << "Ingrese el numero de filas de la matriz 1 (entre 1 y 10): ";
		cin >> filas;
		cout << "Ingrese el numero de columnas de las matriz 1, numero de filas de la matriz 2 (entre 1 y 10): ";
		cin >> columnas;
		filas2 = columnas;
		cout << "ingrese el numero de columnas de la matriz 2 (entre 1 y 10): ";
		cin >> columnas2;
	}while(filas<0 || filas>10 || columnas<0 || columnas>10 || columnas2<0 || columnas2>10);
	cout << "Ingrese los elementos de la primer matriz (enteros), segun el indice que se solicite\n";
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout << "posicion (" << i << "," << j << "): ";
			cin >> matriz[i][j];
		}
	}
	cout << "Ingrese los elementos de la segunda matriz (enteros), segun el indice que se solicite\n";
	for(i=0; i<filas2; i++){
		for(j=0; j<columnas2; j++){
			cout << "posicion (" << i << "," << j << "): ";
			cin >> matriz2[i][j];
		}
	}
	
	//multiplicacion de las matrices
	for(i=0; i<columnas2; i++){
		for(j=0; j<filas; j++){
			mult[j][i]=0;
			for(k=0; k<columnas; k++){
				mult[j][i]=mult[j][i]+(matriz[j][k]*matriz2[k][i]);
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
	for(i=0; i<filas2; i++){
		for(j=0; j<columnas2; j++){
			cout << "   " << matriz2[i][j];
		}
		cout << endl;
	}
	cout << "Los elementos de la matriz multiplicacion son:\n";
	for(i=0; i<filas; i++){
		for(j=0; j<columnas2; j++){
			cout << "   " << mult[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
