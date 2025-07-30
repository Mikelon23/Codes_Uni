/*Se necesita obtener el promedio simple de un estudiante a partir de sus tres notas
parciales*/
#include<iostream>
using namespace std;
int main() {
	float n1,n2,n3, promedio;
	cout<<"Ingrese la nota 1\n";
	cin >> n1;
	cout<<"Ingrese la nota 2\n";
	cin>>n2;
	cout<<"Ingrese la nota 3\n";
	cin>>n3;
	promedio=(n1+n2+n3)/3;
	cout<<"EL PROMEDIO DEL ESTUDIANTE ES:"<< promedio << endl;
	return 0; 
}
