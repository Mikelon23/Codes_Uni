/*Hacer una estructura en C++ que registre los datos de cinco personas como: Nombre,
apellido, edad, sexo y telefono.
*/
#include<iostream>
using namespace std;
struct persona{
	char nombre[15];
	char apellido[15];
	int edad;
	char sexo[15];
	int telefono;
};

int main(){
	persona amigo[5];
	for(int i=0; i<3; i++){
		cout << "Nombre: "; cin >> amigo[i].nombre;
		cout << "Apellido: "; cin >> amigo[i].apellido;
		cout << "Edad: "; cin >> amigo[i].edad;
		cout << "Genero: "; cin >> amigo[i].sexo;
		cout << "Telefono: "; cin >> amigo[i].telefono;
		cout << "************************" << endl;
	}
	cout << "Ingreso de datos exitoso; presione una tecla para mostrar los datos!! ";
	system("pause>cin");
	system("cls");
	for(int i=0; i<3; i++){
		cout << amigo[i].nombre << endl;
		cout << amigo[i].apellido << endl;
		cout << amigo[i].edad << endl;
		cout << amigo[i].sexo << endl;
		cout << amigo[i].telefono << endl;
	}
	system("pause");
	return 0;
}
