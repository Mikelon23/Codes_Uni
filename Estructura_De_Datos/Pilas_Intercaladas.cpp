/*Implemente un programa que permita utilizar dos pilas con el mismo número de elementos y que genere 
una tercera pila resultado de la combinación de los elementos de las dos pilas iniciales, de forma intercalada.*/
#include<iostream>
using namespace std;
class Nodo{	
	public:
		int n1, n2;
		Nodo *sig;
	;
};

class Pila{
	public:
		Nodo *raiz, *raiz2;
		Pila();
		~Pila();
		void InsertarNumeros(int num1,int num2);
		int Retirar();	
		void ImprimirPila01();
		void ImprimirPila02();
		void ImprimirPila03();
	
};

Pila::Pila(){
	raiz = NULL;
	raiz2 = NULL;
};

void Pila::InsertarNumeros(int num1, int num2){
	Nodo *nuevo = new Nodo();
	nuevo->n1 = num1;
	if(raiz == NULL){
		raiz = nuevo;
		nuevo->sig=NULL;
	}
	else{
		nuevo->sig=raiz;
		raiz = nuevo;
	}
	Nodo *nuevo2 = new Nodo();
	nuevo2->n2 = num2;
	if(raiz2 == NULL){
		raiz2 = nuevo2;
		nuevo2->sig=NULL;
	}
	else{
		nuevo2->sig=raiz2;
		raiz2 = nuevo2;
	}
};

int Pila::Retirar(){
	if(raiz != NULL){
		int mi_n1 = raiz->n1;
		Nodo *aux =raiz;
		raiz = raiz -> sig;
		delete aux;
		return mi_n1;
	}
	else{
		return -1;
	}
};

void Pila::ImprimirPila01(){
	cout<<"------Numeros de la Pila 1------"<<endl;
	Nodo *recorrido = raiz;
	while(recorrido !=NULL){
		cout<<recorrido->n1<<endl;
		recorrido = recorrido->sig;			
	}	
};

void Pila::ImprimirPila02(){
	cout<<"------Numeros de la Pila 2------"<<endl;
	Nodo *recorrido2 = raiz2;
	while(recorrido2 !=NULL){
		cout<<recorrido2->n2<<endl;
		recorrido2 = recorrido2->sig;			
	}
};

void Pila::ImprimirPila03(){
	Nodo *recorrido = raiz;	
	cout<<"------Numeros intercalados de pilas 1 y 2------"<<endl;
	Nodo *recorrido2 = raiz2;
	while(recorrido2 !=NULL){
		cout<<recorrido->n1<<endl;
		recorrido = recorrido->sig;
		cout<<recorrido2->n2<<endl;
		recorrido2 = recorrido2->sig;
	}
};

Pila::~Pila(){
	Nodo *recorrido = raiz;
	Nodo *aux;
	while(recorrido !=NULL){
		aux = recorrido;
		recorrido = recorrido->sig;
		delete aux;
	}
};

int main(){
	Pila *Pila01;
	Pila01 = new Pila();
	int n ,numeros,numeros2;
	cout<<"Ingrese el numero de elementos de la pila: ";
	cin>>n;
	for(int i = 0; i < n; i++){
		cout<<"Ingrese los numeros de la pila 1: ";
		cin>>numeros;
		cout<<"Ingrese los numeros de la pila 2: ";
		cin>>numeros2;
		Pila01->InsertarNumeros(numeros, numeros2);
	}
	Pila01->ImprimirPila01();
	Pila01->ImprimirPila02();
	Pila01->ImprimirPila03();
	system ("pause");
};
