/*13. Escriba un programa para encontrar la suma de la matriz triangular inferior.*/

#include<iostream>
using namespace std;

int main() {
	int i, j;
	float mat[4][4];
	float suma;
	cout<<"Ingrese los elementos de la matriz (3*3)"<<endl;
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
	cout << "Triangular inferior" << endl;
	suma = 0;
	for (i=2;i<=3;i++) {
		for (j=1;j<=3-1;j++) {
			suma = suma+mat[i][j];
		}
	}
	cout << "La suma de la matriz triangular inferior es: " << suma << endl;
	system("pause");
	return 0;
}
