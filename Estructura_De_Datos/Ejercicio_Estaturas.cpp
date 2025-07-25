#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
 using namespace std; 
 void IngresarVector(float v[], char g[], int d)
 { 	
 	char f; 	
 for(int i=0; i<d; i++)
 		{
 		cout<<"ingrese estaturas "<<i+1<<" :"<<endl;
 		cin>>v[i];
 			cout<<"Ingrese el genero "<<i+1<<" :"<<endl;
 		cin>>f;
 		v[i]=toupper(f);
 		}
 }
  /*void IngresarVector(char v[], int d)
 { 	
 	char g;
  	for(int i=0; i<d; i++)
 		{
 		cout<<"Ingrese el genero "<<i+1<<" :"<<endl;
 		cin>>g;
 		v[i]=toupper(g);
	 	}
 }*/
 void MostarVector( float v[],char g[], int d)
 {
 
 	for(int i = 0; i<d; i++)
 		{
 			cout<<"Estatura: ()"<<v[i]<<") Genero ("<<g[i]<<endl;
		}
 }
 //-La altura maxima y minima de las ingresadas
 float MaximaEstatura(float v[], int d)
 {
 	float max = v[0];
 	for(int i = 0; i < d; i++)
 		{
 			if(max<v[i])
 			{
 				max = v[i];
			}
		}
		return max;
 }
  float MinimoEstatura(float v[], int d)
 {
 	float min= v[0];
 	for(int i = 0; i < d; i++)
 		{
 			if(min>v[i])
 			{
 				min = v[i];
			}
		}
		return min;
 }
 //-La altura Maxima y minima de las mujeres y la minima de los hombre
  float MaximaMujeres(float v[], char g[], int d)
 {
 	float max=0;
 	for(int i = 0; i < d; i++)
 		{
 			if(g[i] == 'F')
 			{
 				if(max<v[i])
 				{
 					max = v[i];
				}
			}
		}
		return max;
 }
   float MinimaHombre(float v[], char g[], int d)
 {
 	float min=999;
 	for(int i = 0; i < d; i++)
 		{
 			if(g[i] == 'M')
 			{
 				if(min>v[i])
 				{
 					min = v[i];
				}
			}
		}
		return min;
 }
 //Promedio de Alturas
 float PromedioEstaturas(float v[], int d)
 {
 	float ac=0;
 	for( int i = 0; i < d; i++)
 	{
 		ac=ac+v[i];
	 }
	 return ac/d;
 }
 //numero de mujeres que tienen la estatura mayor al promedio general
   int MujeresMayorPromedio(float v[], char g[], int d,float promgen)
 {
 	int num =0;

 	for(int i = 0; i < d; i++)
 		{
 			if(g[i] == 'F')
 			{
 				if(v[i]>promgen)
 				{
 					num++;
				}
			}
		}
		return num;
 }
   int HombresIgualPromedio(float v[], char g[], int d,float promgen)
 {
 	int nums =0;

 	for(int i = 0; i < d; i++)
 		{
 			if(g[i] == 'M')
 			{
 				if(v[i]==promgen)
 				{
 					nums++;
				}
			}
		}
		return nums;
 }
 int main()
 {
 	float estaturas[10];
 	char generos[10];
	float estaturaMaxima, estaturaMinima;
	float estaturaMaxima1, estaturaMinima1;
	float promedio;
	int nummaym, igualhombres;
 	IngresarVector(estaturas,generos, 10);
 	/*IngresarVector(generos,10);//F,M*/
 	MostarVector(estaturas, generos, 10);

 	estaturaMaxima = MaximaEstatura(estaturas,10);
 	
    estaturaMinima = MinimoEstatura(estaturas,10);
 	
    cout<<"Estatura Maxima General: "<<estaturaMaxima<<endl;
 	
    cout<<"Estatura Minima General: "<<estaturaMinima<<endl;	
 	
    estaturaMaxima1 = MaximaMujeres(estaturas, generos,10);
 	
    estaturaMinima1 = MinimaHombre(estaturas, generos, 10);
 	
    cout<<"Estatura Maxima De Mujeres: "<<estaturaMaxima1<<endl;
 	
    cout<<"Estatura Minima De Hombres: "<<estaturaMinima1<<endl;
 	
    promedio = PromedioEstaturas(estaturas, 10);
 	
    cout<<"Promedio General De Estaturas: "<< promedio<<endl;
 	
    nummaym = MujeresMayorPromedio(estaturas, generos, 10, promedio);
 	
    cout <<"Numero de Mujeres con Estatura Mayor al promedio: "<<nummaym<<endl;
 	
    igualhombres = HombresIgualPromedio(estaturas,generos, 10 , promedio);
 	
    cout <<"Numero de Hombres con Estatura Igual al promedio: "<<igualhombres<<endl;
 	
    getch();
 	
 }
