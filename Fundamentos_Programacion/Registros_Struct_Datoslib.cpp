/*2. Hacer un programa en C++ para registrar los datos de tres libros como: título, 
autor, año y color del libro. El color se deberá hacer mediante una enumeración y 
sólo habrá rojo, verde y azul.*/
#include<iostream>
using namespace std;
enum Color{
	rojo,verde,azul
};
struct Libro{
	char titulo[20], autor[20];
	int anio;
	Color color;
};

int main(){
	Libro libro[3];
	for(int i=0; i<3; i++){
		cout << "ingrese el titulo del libro " << i+1 << ": ";
		cin >> libro[i].titulo;
		cout << "ingrese el nombre del autor del libro: ";
		cin >> libro[i].autor;
		cout << "ingrese el anio de publicacion del libro: ";
		cin >> libro[i].anio;
	}
	libro[0].color = rojo;
	libro[1].color = verde;
	libro[2].color = azul;
	cout << "ingreso de datos exitoso, presione una tecla para continuar!!";
	system("pause>cin");
	system("cls");
	cout << "El registro de libros ingresado es: " << endl;
	cout << "Titulo \t\tAutor \t\tAnio \t\tColor" << endl;
	for(int i=0; i<3; i++){
		cout << libro[i].titulo << "\t\t" << libro[i].autor << "\t\t" << libro[i].anio << "\t\t";
		switch(libro[i].color){
			case rojo:{
				cout << "Rojo" << endl;
				break;
			}
			case verde:{
				cout << "Verde" << endl;
				break;
			}
			case azul:{
				cout << "Azul" << endl;
				break;
			}
		}
	}

	system("pause");
	return 0;
}
