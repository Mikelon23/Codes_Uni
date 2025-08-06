/*3.Crea una función “calcularMaxMin” que recibe un arreglo con valores numéricos y devuelve el valor máximo y el mínimo. 
Crear un programa que pida números por teclado y muestre el máximo y el mínimo, utilizando la función anterior.*/

#include<iostream>
using namespace std;
void max_min(int vec[], float size,int &max,int &min);

int main(){
	int i,nums[10],size_num,max,min;
	size_num=10;
	cout<<"Ingrese los numeros"<<endl;
	for (i=0;i<=size_num-1;i++){
		cin>>nums[i];
	}
	max_min(nums,size_num,max,min);
	cout<<"El valor minimo de los numeros ingresados es: "<<min<<endl;
	cout<<"El valor maximo de los numeros ingresados es: "<<max<<endl;
	return 0;
}
void max_min(int vec[],float size,int &max,int &min){
	int i;
	min=vec[0];
	max=vec[0];
	for (i=0;i<=size-1;i++){
		if (min>vec[i]){
			min=vec[i];
		}
		if (max<vec[i]){
			max=vec[i];
		}
	}
}