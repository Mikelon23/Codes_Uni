/*18. Escriba un programa para verificar la matriz simétrica.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	int i, j;
	char band=false;
	int mat[10][10],filas,columnas;
	cout<<"Ingrese las dimensiones de la matriz"<<endl;
	cout<<"Ingrese el numero de filas";cin>>filas;
	cout<<"Ingrese el numero de columnas";cin>>columnas;
	for (int i=0;i<filas;i++) {
		for (int j=0;j<columnas;j++) {
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: ";
			cin>>mat[i][j];
		}
	}
	if(filas==columnas){
		for (int i=0;i<filas;i++){
			for (int j=0;j<filas;j++){
				if(mat[i][j]==mat[j][i]){
					band=true;
				}
			}
		}
	} 
	if (band==true) {
		cout << "La matriz es simetrica"<<endl;
	} else {
		cout << "La matriz no es simetrica"<<endl;
	}
	system("pause");
	return 0;
}