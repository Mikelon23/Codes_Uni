/*3. Hacer estructuras anidadas para registrar los datos de un trabajador y de una 
persona sin oficio.
*/
#include <iostream>
using namespace std;
struct Fecha{
	int dia, mes, anio;
};
struct Persona{
	char nombre[20];
	int edad, cedula;
	Fecha fnacimiento;
	int peso;
} persona={"Monica", 30, 12345678, 12, 12, 1980, 80};
struct Empleado{
	Persona persona;
	int salario;
} trabajador={"Fernanda", 28, 34567890, 01, 01, 1990, 83, 1500};

int main(){
	cout << "*****************PERSONA*****************" << endl;
	cout << "Nombre: " << persona.nombre << endl;
	cout << "Edad: " << persona.edad << endl;
	cout << "Cedula: " << persona.cedula << endl;
	cout << "Fecha de Nacimiento (dd/mm/aaaa): (" << persona.fnacimiento.dia << "/" << persona.fnacimiento.mes << "/" << persona.fnacimiento.anio << ")" << endl;
	cout << "Peso: " << persona.peso; 
	cout << "*****************TRABAJADOR*****************" << endl;
	cout << "Nombre: " << trabajador.persona.nombre << endl;
	cout << "Edad: " << trabajador.persona.edad << endl;
	cout << "cedula: " << trabajador.persona.cedula << endl;
	cout << "Fecha de Nacimiento (dd/mm/aaaa): (" << trabajador.persona.fnacimiento.dia << "/" << trabajador.persona.fnacimiento.mes << "/" << trabajador.persona.fnacimiento.anio << ")" << endl;
	cout << "Salario: " << trabajador.salario << endl;	
	system("pause");
	return 0;
}
