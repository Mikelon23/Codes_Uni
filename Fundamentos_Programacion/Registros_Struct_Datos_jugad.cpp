/*a) Empleando registros, crear un programa que pida al usuario los nombres, edades, altura, peso y 
el nombre de equipo de 10 jugadores. Luego, con el uso de un menu el usuario podrá:
1. Listar los nombres de los jugadores.
2. Listas las edades de los jugadores.
3. listar todos los datos de los jugadores.
4. Buscar un jugador por nombre.
5. Salir*/
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
 
struct datojugador{
	char nombre[20];
	int edad;
	float altura;
	float peso;
};
 
int main(){
		datojugador jugador[20];
		int numjugad=0,contador=0,out,opc,ext;
		double pesont=0,edadnt=0,alturant=0;
		char salir;
		string buscar,nomEquipo;
	do{
	cout<<"1. Listar los nombres de los jugadores.\n";
	cout<<"2. Listas las edades de los jugadores.\n";
	cout<<"3. listar todos los datos de los jugadores.\n";
	cout<<"4. Buscar un jugador por nombre.\n";
	cout<<"5. Salir.\n";
	cout << "Elija una opcion"<<endl;
	cin>>opc;		
	switch (opc){
		case 1:
			cout<<"\n Ingresar los nombres de los 10 jugadores.";
			for (int i=0; i<10; i++){	
				cout << "\n Ingrese el nombre del jugador #" << numjugad++ << ": ";
				cin >> jugador[i].nombre;
			}
			cout<<"\n Ingresar el peso de los 10 jugadores.";
			for (int i=0; i<10; i++){
				cout << "\n Ingrese el peso del jugador " << jugador[i].nombre << ": ";
				cin >> jugador[i].peso;
				pesont += jugador[i].peso;
			}
			break;
		case 2:
			cout<<"\n Ingresar las edades de los 10 jugadores.";
			for (int i=0; i<10; i++){
				cout << "\n Ingrese la edad del jugador " << jugador[i].nombre << ": ";
				cin >> jugador[i].edad;
				edadnt += jugador[i].edad;
			}
			cout<<"\n Ingresar la altura de los 10 jugadores.";
			for (int i=0; i<10; i++){
				cout << "\n Ingrese la altura del jugador: " << jugador[i].nombre << ": ";
				cin >> jugador[i].altura;
				alturant += jugador[i].altura;
			}
			break;
		case 3:
			cout << "Digite el nombre del equipo: ";
			cin >> nomEquipo;
			for (out=0; out<numjugad; out++ )
			{
				cout << "Nombre: " << jugador[out].nombre << "	Peso: "<< jugador[out].peso << "	Kg. " << "	Edad: " << jugador[out].edad << "	Altura: " << jugador[out].altura << "m." <<endl;
			}
			break;
		case 4:
			cout<<"\n Ingrese el nombre de la persona a buscar.";
			cin>>buscar;
			for (int i=0; i<10; i++){
				if (buscar==jugador[i].nombre){
					cout << "\n El jugador esta en el equipo";
				}
				else{
					cout << "\n El jugador no esta en el equipo";
				}
			}
			break;
		case 5:
			cout<<"Salir.\n";
			cout<<"\n 1. Si";
			cout<<"\n 2. No"<<endl;
			cin>>ext;
		if (ext==1){
			return 0;
		}
		else{
			return main();
		}
		break;
	default:
		return main();
		break;
		}		
	}
	while (opc!=5);
	system("pause");
	return main();
}
