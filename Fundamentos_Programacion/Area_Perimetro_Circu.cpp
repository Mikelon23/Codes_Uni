/*4.Diseñar una función que calcule el área y el perímetro de una circunferencia. 
Utiliza dicha función en un programa principal que lea el radio de una circunferencia y muestre su área y perímetro.*/

#include<iostream>
#include<cmath>
using namespace std;
void area_per(float rad, float &area, float &per);

int main(){
	float area,per,rad;
	cout<<"Ingrese el radio"<<endl;
	cin>>rad;
	area_per(rad,area,per);
	cout<<"El area de la circunferencia es: "<< area<<" cm. "<< endl;
	cout<<"El perimetro de la circunferencia es: "<<per<<" cm. "<< endl;	
	system("pause");
	return 0;
}
void area_per(float rad, float &area, float &per) {
	float pi;
	area=M_PI*rad*rad;
	per=2*M_PI*rad;
}