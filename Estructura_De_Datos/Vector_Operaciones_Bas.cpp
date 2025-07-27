/* Dado un arreglo de números enteros y su dimensión, calcular la cantidad de valores que cumplen con las siguientes condiciones:

    Son números primos.
    Son números positivos.
    Son números negativos.
    Son múltiplos de 4.
    Son divisores de 24.*/
#include<iostream>
using namespace std;

void LeerVector(int v[], int n){
	for(int i=0; i<n; i++){
		cout<<"Ingrese los datos: "<<i+1 <<";";
		cin>>v[i];
	}
}
void MostrarVector(int v[], int n, int cp, int cn, int cpri, int cmul, int cdiv){
	for(int i=0; i<n; i++){
		cout<<"Ingrese los datos: "<<i+1 <<";";
		cout<<v[i]<<endl;
	}
	cout<<"*********************************************"<<endl;
	cout<<"LOS RESULTAODS SON: "<<endl;
	cout<<"Numeros positivos: "<<cp<<endl;
	cout<<"Numeros negativos: "<<cn<<endl;
	cout<<"Numeros primos: "<<cpri<<endl;
	cout<<"Numeros multiplos de 4: "<<cmul<<endl;
	cout<<"Numeros divisores de 24: "<<cdiv<<endl;
}
void posneg(int v[], int n, int *cp, int *cn){
	*cp=0;
	*cn=0;
	for(int i=0; i<n; i++){
		if(v[i]>0){
			*cp=*cp+1;
		}
		if(v[i]<0){
			*cn=*cn+1;
		}
	}
}
void nprimos(int v[], int n, int *cpri){
	*cpri=0;
	for(int i=1;i<=n; i++){
		if(v[i]%i){
		*cpri=*cpri+1;
		}	
	}
}
void nmultiplos(int v[], int n , int *cmul){
	*cmul=0;
	for(int i=1;i<=n; i++){
		if(v[i]%4==0){
		*cmul=*cmul+1;
		}	
	}
}

void ndiv(int v[], int n , int *cdiv){
	*cdiv=0;
	for(int i=1;i<=n; i++){
		if(v[i]%24==0){
		*cdiv=*cdiv+1;
		}	
	}
}
int main(){
	int vector[5];
	
    int positivo, negativo, primo, multiplo, divisor;
	
    LeerVector(vector, 5);
	
    posneg(vector, 5, &positivo, &negativo);
	
    nprimos(vector, 5, &primo);
	
    nmultiplos(vector, 5, &multiplo);
	
    ndiv(vector, 5, &divisor);
	
    MostrarVector(vector, 5, positivo, negativo, primo, multiplo, divisor);
	
    system("pause");
}