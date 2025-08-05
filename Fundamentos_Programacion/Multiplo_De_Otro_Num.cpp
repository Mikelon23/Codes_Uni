/*1.Crear un programa que pida dos números enteros al usuario y diga si alguno de ellos es múltiplo del otro. 
Crea una función EsMultiplo que reciba los dos números, y devuelve si el primero es múltiplo del segundo.*/

#include<iostream>
#include<stdbool.h>
using namespace std;
int multiplo(int num1,int num2);

int main(){
	int num1,num2;
	cout<<"Ingrese el primero numero"<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	if(multiplo(num1,num2)){
		cout<<" El numero "<< num1 <<"  es multiplo de  "<<num2<<endl;
	}else
		cout<<" El numero  "<<num1<<"  no es multiplo de  "<<num2<<endl;
		return 0;
}
int  multiplo (int num1,int num2){
	int esmult;
	if (num1%num2==0){
	esmult=true;
	}else{
	esmult=false;
	}
	return esmult;
}