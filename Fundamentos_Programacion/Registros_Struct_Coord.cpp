/*4. Hacer un programa que establezca las coordenadas (x,y) de una curva en el 
dominio [-3,3]. El programa solo deberá pedir la altura que tenga en el punto 
del dominio, luego, mostrar las coordenadas resultantes*/
#include<iostream>
using namespace std;
struct Punto{
	int x, y;
};
int main(){
	Punto punto[7]={0,0};   //creacion e inicializacion de un vector de puntos en 0
	for(int i=0; i<7; i++){
		cout << "\ningrese el valor de y para x= " << i-3 << ": ";
		cin >> punto[i].y;
		punto[i].x=i-3;
	}
	cout << "ingreso existoso de datos, presione una tecla para continuar.";
	system("pause>cin");
	system("cls");
	cout << "Las cooredenadas ingresadas son: \n";
	for(int i=0; i<7; i++){
		cout << "(" << punto[i].x << "," << punto[i].y << ")\n";
	}
	system("pause");
	return 0;
}
