/*1. Diseñar un algoritmo que permita leer por teclado una matriz de dimensión 5 x 5, 
luego debe solicitar un nuemro de fila, validar que dicho valor sea correcto y, 
ordenar la fila señalada de mayor a menor por el método de su preferencia.*/

#include<iostream>
using namespace std;

#define ARREGLO_MAX 100

int main(){
	int aux,i,j,k,m,n;
	int mat[ARREGLO_MAX][ARREGLO_MAX];
	int v[ARREGLO_MAX];
	do{
		cout << "INGRESE EL VALOR 5 PARA OBTENER LA DIMENSION DE LA MATRIZ 5X5" << endl;
		cout << "Ingrese el numero de la matriz" << endl;
		cin >> m;
		if ((m!=5)){
			cout << "El datos ingresado no es correcto" << endl;
		}
	}while ((m!=5));
	k = 1;
	cout << "Ingrese los elementos de la matriz" << endl;
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			cout << "Ingrese el elemento en la posicion:" << "(" << i << "," << j << ")" << endl;
			cin >> mat[i-1][j-1];
		}
	}
	cout << "Los elementos de la matriz original son:" << endl;
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			cout << mat[i-1][j-1]<<"   ";
		}
		cout << "" << endl;
	}
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			v[k-1] = mat[i-1][j-1];
			k = k+1;
		}
	}
	for (i=1;i<=m*m;i++){
		for (j=1;j<=(m*m)-1;j++){
			if (v[j-1]>v[j]){
				aux = v[j-1];
				v[j-1] = v[j];
				v[j] = aux;
			}
		}
	}
	k = 1;
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			mat[i-1][j-1] = v[k-1];
			k = k+1;
		}
	}
	cout << "Los elementos de la matriz ordenada ascendentemente son:" << endl;
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			cout << mat[i-1][j-1] << "   ";
		}
		cout << "" << endl;
	}
	system("pause");
	return 0;
}