/*8. Escriba un programa para encontrar la suma de cada fila y columna de una matriz*/

#include<iostream>
using namespace std;

int main(){
	int i, j, k, m, n, s;
	int mat[4][4];
	int vsc[4];
	int vsf[4];
	s = 0;
	k = 1;
	cout << "Ingrese los elementos de la matriz (3*3)" << endl;
	for (i=1;i<=3;i++) {
		for (j=1;j<=3;j++) {
			cin >> mat[i][j];
		}
	}
	cout << "Los elementos de la matriz son:" << endl;
	for (i=1;i<=3;i++) {
		for (j=1;j<=3;j++) {
			cout << mat[i][j] << "   ";
		}
		cout << "" << endl;
	}
	for (i=1;i<=3;i++) {
		for (j=1;j<=3;j++) {
			s = s+mat[i][j];
		}
		vsf[k] = s;
		k = k+1;
		s = 0;
	}
	cout << "Los elementos del vector suma filas son:" << endl;
	for (i=1;i<=3;i++) {
		cout << vsf[i] << endl;
	}
	k = 1;
	for (i=1;i<=3;i++) {
		for (j=1;j<=3;j++) {
			s = s+mat[j][i];
		}
		vsc[k] = s;
		k = k+1;
		s = 0;
	}
	cout << "Los elementos del vector suma columnas son:" << endl;
	for (i=1;i<=3;i++) {
		cout << vsc[i] << " ";
	}
	return 0;
}