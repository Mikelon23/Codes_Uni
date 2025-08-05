/*2.Crear una función que calcule la temperatura media de un día a partir de la temperatura máxima y mínima. 
Crear un programa principal que, utilizando la función anterior, vaya pidiendo la temperatura máxima y mínima de cada día y vaya mostrando la media. 
El programa pedirá el número de días que se van a introducir.*/

#include<iostream>
using namespace std;
float temp_media(float temp1, float temp2);

int main(){
	int dias;
	float max,min;
	cout<<"Ingrese el numero de dias"<<endl;
	cin>>dias;
	for (int i=1;i<=dias;i++) {
		cout<<"Ingrese la temperatura maxima"<<endl;
		cin>>max;
		cout<<"Ingrese la temperatura minima"<<endl;
		cin>>min;
		cout<<"La media de los valores ingresados es: "<<temp_media(max,min)<<endl;
	}
	return 0;
}
float temp_media(float temp1, float temp2){
	float media;
	media=(temp1+temp2)/2;
	return media;
}
