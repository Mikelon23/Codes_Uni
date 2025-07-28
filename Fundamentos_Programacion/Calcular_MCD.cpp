/*2. Crear una función que calcule el Máximo común divisor (MCD) de dos números por el método de Euclides. El método de Euclides es el siguiente:
Se divide el número mayor entre el menor.
Si la división es exacta, el divisor es el MCD.
Si la división no es exacta, dividimos el divisor entre el resto obtenido y se continúa de esta forma hasta obtener una división exacta, siendo el último divisor el MCD.
Crear un programa principal que lea dos números enteros y muestre el MCD.*/

#include<iostream>
#include<conio.h>
#include <math.h>

using namespace std;

int maxcd(int a,int b,int c);

int maxcd(int a,int b,int c){
	c = a%b;
	if(c == 0){
       cout<<" El mcd es: "<<b;
       }
    while(!c == 0){
	a=b;
	b=c;
	c=a%b;
	if(a%b == 0){
		cout<<"El mcd por el metodo Euclides es: "<<b;
		break;
		}
    }
}
//principal
int main(){
	int a,b,res;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl;
	cin>>b;
    maxcd(a,b,res);
	return 0;
}
