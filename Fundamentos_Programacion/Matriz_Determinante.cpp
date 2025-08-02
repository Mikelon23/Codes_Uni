/*15. Escriba un programa para encontrar el determinante de una matriz.*/

#include<iostream>
using namespace std;

int main() {
	int det, i, j;
	int mat[3][3];
	cout << "Ingrese los valores de la matriz (2*2)" << endl;
	for (i=1;i<=2;i++) {
		for (j=1;j<=2;j++) {
			cin >> mat[i][j];
		}
	}
	cout << endl;
	cout << "La matriz es:" << endl;
	for (i=1;i<=2;i++) {
		for (j=1;j<=2;j++) {
			cout << mat[i][j] << "  ";
		}
		cout << "" << endl;
	}
	det = mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1];
	cout << "La determinante 2x2 es:" << det << endl;
	system("pause");
	return 0;
}