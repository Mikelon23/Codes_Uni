#include <iostream>
#include <conio.h>
#include <stdlib.h>
 using namespace std; 
 void IngresarVector(int v[], int d)
 { 	 	for(int i=0; i<d; i++){
 		cout<<"ingrese elemento "<<i+1<<" :"<<endl;
 		cin>>v[i];
 	}
 }
 void MostrarVector(int v[], int d)
 {
	 for(int i=0;i<d;i++){
	 	cout<<v[i]<<endl;
	 }
 }
 void MetodoBurbuja(int v[], int d)
 {
 	int aux;
 	for (int k=1; k<d; k++)
	 {
	 	for (int i = 0; i <d; i++)
	 	{
	 		if (v[i]> v[i+1])
			{
				 aux= v[i];
	 			v[i]=v[i+1];
	 			v[i+1]=aux; 
			}
		}
	 }
 }
 void MetodoInsercion(int v[], int d){
 	cout<<"Ordenamiento por el metodo Inseccion"<<endl; 
	int k, aux; 
	for (int i=0; i < d; i++)
	{
		aux = v[i]; 
		k = i - 1; 
		while ((k>=0) && (aux < v[k]))
		{
			v[k+1] = v[k];
			k--;
		}
		v[k+1] = aux; 
	}
 };
 void MetodoSeleccion(int v[], int d){
 	cout<<"Ordenamiento por metodo por seleccion: "<<endl;
 	int min, aux;
 	for(int i=0; i<d-1;i++){
 		min=i;
 		for(int j=i+1; j<d; j++){
 			if(v[min]>v[j]){
 				min=j;
			 }
		 }
		 aux=v[min];
		 v[min]=v[i];
		 v[i]=aux;
	 }
 };
 void MetodoQuicksort(int v[],int primero,int ultimo){
 
 	int i,j,aux,pivote;
 	i=primero;
 	j=ultimo;
 	pivote=v[(primero+ultimo)/2]; 
 	do{
 		while(pivote > v[i])
 		i++;
 		while(pivote < v[j])
 		j--;
 		if(i <= j){
 			aux=v[i];
		 	v[i]=v[j];
		 	v[j]=aux;
		 	i++;
		 	j--;
		 }
	 }while(i <= j);
	 if(primero < j)
		MetodoQuicksort(v,primero,j);
	 if(ultimo > i)
	 MetodoQuicksort(v,i,ultimo);
 };
 int main(){
 	int v[10];
 	int aux;
 	int opcion;
 	do{
	cout << "Metodos de ordenamiento - Opciones"; 
		cout << "\n1. Ingresar el vector"; 
		cout << "\n2. Metodo Burbuja"; 
		cout << "\n3. Metodo Insercion"; 
		cout << "\n4. Metodo Seleccion"; 
		cout << "\n5. Metodo Quicksort"; 
		cout << "\n6. Mostrar el vector Ordenado"; 
		cout << "\n\n0. Salir"; 
		cout << "\n\nIngrese opcion: "; 
    cin >> opcion;

    switch(opcion)
    {
        case 1:
			cout<<"Ingrese los elementos del vector :"<<endl; 
 			IngresarVector(v,10);
 			MostrarVector(v,10);
        break;
        case 2:
 			MetodoBurbuja(v,10);	
        break;
        case 3:
			 MetodoInsercion(v,10);
        break;
        case 4:
			 MetodoSeleccion(v,10);
        break;
        case 5:
			MetodoQuicksort(v,0,9);;
        break;
        case 6:
        	cout<<"Ingrese el vector Ordenado es :"<<endl; 
			MostrarVector(v,10);
        break;
        default: cout << "Usted ha ingresado una opción incorrecta";
    }
  }while(opcion!=0);
    return 0;
 }
