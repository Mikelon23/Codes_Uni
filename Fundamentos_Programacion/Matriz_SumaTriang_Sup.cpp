/*12.Escriba un programa para encontrar la suma de la matriz triangular superior.*/

#include<iostream>
using namespace std;

int main() {
	int i;
	int j;
	float mat[4][4];
	float suma;
	cout<<"Ingrese la matriz (3*3)"<<endl;
	for (i=1;i<=3;i++) {
		for (j=1;j<=3;j++) {
			cin >> mat[i][j];
		}
	}
	cout << "Los elementos de la matriz son:" << endl;
	for (i=1;i<=3;i++) {
		for (j=1;j<=3;j++) {
			cout << mat[i][j] << " ";
		}
		cout << "" << endl;
	}
	cout << "Triangular Superior" << endl;
	suma = 0;
	for (i=1;i<=3-1;i++) {
		for (j=i+1;j<=3;j++) {
			suma = suma+mat[i][j];
		}
	}
	cout << "La suma de la matriz triangular superior es: " << suma << endl;
	return 0;
}