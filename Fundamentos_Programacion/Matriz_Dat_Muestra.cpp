/*19. En un laboratorio de muestras médicas, se almacenan los datos de los exámenes clínicos
realizados 2012 utilizando una matriz A de Nx5. Los datos almacenados son rut, dd, mm, aaaa
y valor de la muestra.*/

#include<iostream>
using namespace std;
#define ARREGLO_MAX 100

int main() {
	float rutmen, sum, suma2, men, cont2012, j;
	int i,n;
	float mat[ARREGLO_MAX][5];
	cout << "Ingrese el numero de pacientes" << endl;
	cin >> n;
	for (i=1;i<=n;i++) {
		cout << "Ingrese el rut" << endl;
		cin >> mat[i-1][0];
		cout << "Ingrese el dia" << endl;
		cin >> mat[i-1][1];
		cout << "Ingrese el mes" << endl;
		cin >> mat[i-1][2];
		cout << "Ingrese el anio" << endl;
		cin >> mat[i-1][3];
		cout << "Ingrese el valor de la muestra" << endl;
		cin >> mat[i-1][4];
	}
	sum = 0;
	for (i=1;i<=n;i++) {
		if (mat[i-1][3]==2012) {
			sum = sum+mat[i-1][4];
		}
	}
	cout << "El total por muestras es: " << sum << endl;
	cont2012 = 0;
	for (i=1;i<=n;i++) {
		if (mat[i-1][2]==12 && mat[i-1][3]==2012) {
			cont2012 = cont2012+1;
		}
	}
	cout << "La cantidad de atenciones en diciembre fue" << cont2012 << endl;
	men = mat[0][4];
	rutmen = mat[0][0];
	for (i=1;i<=n;i++) {
		if (mat[i-1][4]<men) {
			men = mat[i-1][4];
			rutmen = mat[i-1][0];
		}
	}
	cout << "El rut que pago menor valor es: " << rutmen << endl;
	suma2 = 0;
	for (i=1;i<=n;i++) {
		if (mat[i-1][1]>=15 && mat[i-1][1]<=20) {
			suma2 = suma2+mat[i-1][4];
		}
	}
	cout << "El total de los valores de las muestras entre el 15 y 20 de cada mes es: " << suma2 << endl;
	system("pause");
	return 0;
}