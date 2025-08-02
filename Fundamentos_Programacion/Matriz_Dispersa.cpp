/*17. Escriba un programa para verificar la matriz dispersa.
la matriz dispersa es aquella en la que la mayoria de sus elementos son cero
*/
#include<iostream>
using namespace std;
int main(){
	int filas, columnas, i, j, matriz[10][10], cont=0;
	do{
		system("cls");
		cout << "ingrese el numero de filas de la matriz (maximo 10): ";
		cin >> filas;
		cout << "ingrese el numero de columnas de la matriz (maximo 10): ";
		cin >> columnas;
	}while(filas<1 || filas>10 || columnas<1 || columnas>10);
	//ingreso de datos
	cout << "ingrese los elementos de la matriz segun la posicion solicitada: "<< endl;
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout << "posicion [" << i << "," << j << "]: ";
			cin >> matriz[i][j];
		}
	}
	cout << "ingreso exitoso de los datos; presione una tecla para continuar." << endl;
	system("pause>cin");
	system("cls");
	//proceso
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			if(matriz[i][j] == 0)
				cont++; 
		}
	}
	//muestra de resultados
	cout << "Matriz ingresada: " << endl;
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			cout << "\t" << matriz[i][j];
		}
		cout << endl;
	}
		
	if (cont > (filas*columnas/2))
		cout << "La matriz ingresada es dispersa!!!" << endl;
	else
		cout << "La matriz ingresada no es dispersa!!!" << endl;

	system("pause");
	return 0;
}
