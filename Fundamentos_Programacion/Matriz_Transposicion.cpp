/*14.Escriba un programa para encontrar la transposición de una matriz.*/

#include<iostream>
using namespace std;

int main() {
	int i, j;
	int mat[4][4];
	int mat2[4][4];
	cout << "Ingrese los elementos de la matriz (3*3)" << endl;
	for (i=1;i<=3;i++) {
		for (j=1;j<=3;j++) {
			cin >> mat[i][j];
		}
	}
	cout << "la matriz ingresada es:" << endl;
	for (i=1;i<=3;i++) {
		for (j=1;j<=3;j++) {
			cout << mat[i][j] << "  ";
		}
		cout << " " << endl;
	}
	for (i=1;i<=3;i++) {
		for (j=1;j<=3;j++) {
			mat2[i][j] = mat[j][i];
		}
	}
	cout << "la matriz transpuesta es:" << endl;
	for (i=1;i<=3;i++) {
		for (j=1;j<=3;j++) {
			cout << mat2[i][j] << "  ";
		}
		cout << " " << endl;
	}
	system("pause");
	return 0;
}