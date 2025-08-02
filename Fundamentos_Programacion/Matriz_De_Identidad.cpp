/*16. Escriba un programa para verificar la matriz de identidad.*/

#include<iostream>
using namespace std;

int main() {
	int i, j;
	float mat[4][4];
	cout<<"Ingrese los valores de la matriz (3*3)"<<endl;
	for (i=1;i<=3;i++) {
		for (j=1;j<=3;j++) {
			mat[i][j] = 0;
		}
	}
	for (i=1;i<=3;i++) {
		mat[i][i] = 1;
	}
	for (i=1;i<=3;i++) {
		for (j=1;j<=3;j++) {
			cout << mat[i][j] << "  ";
		}
		cout << " " << endl;
	}
	system("pause");
	return 0;
}