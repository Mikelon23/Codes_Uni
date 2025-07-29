/*Si se conocen los puntos A y B, en el cuadrante positivo del plano cartesiano, elabore
el algoritmo que permite calcular la distancia entre A y B*/
#include<iostream>
using namespace std;
int main(){
	float ax,ay,bx,by,d;
	cout<<"INGRESE LAS COORDENADAS DEL PUNTO A\n";
	cin>> ax;
	cin>> ay;
	cout<<"INGRESE LAS COORDENADAS DE PUNTO B\n";
	cin>> bx;
	cin>> by;
    d= ((ax-bx)*2 + (ay-by)*2 );
	cout<<"LA DISTANCIA ES"<< d <<endl;
	return 0;
	}
