/*b) Con ayuda de registros anidados (un registro para la fecha con los campos: dia, mes y año 
y otro para datos de una persona con los campos: nombre, apellido y dia_nacimiento, 
crear un programa donde se ingrese la fecha actual y la fecha de nacimiento y se comprube 
si corresponde al día de su cumpleaños. Mostrar un mensaje de felicitaciones en tal caso.*/
#include <iostream>
using namespace std;

struct Fecha{
	int dia,mes,anio;
};
struct datospersona{
	string nombre,apellido,dia_nacimiento;
};
int main(){
	Fecha hoy, cumpleanios;
	datospersona datos;
	cout<<"Ingrese su nombre"<<endl;
	cin>>datos.nombre;
	cout<<"Ingrese su apellido"<<endl;
	cin>>datos.apellido;
	cout<<"Ingrese el dia de nacimiento"<<endl;
	cin>>datos.dia_nacimiento;
	cout<<"Ingrese los datos a continuacion para determinar si corresponden a su fecha de nacimiento"<<endl;
	cout <<"Ingrese la fecha actual" <<endl;
	cout <<"Dia: "<<endl; 
	cin >> hoy.dia;
	cout <<"Mes: "<<endl; 
	cin >> hoy.mes;
	cout <<"Anio: "<<endl;
	cin >> hoy.anio;
	cout <<"Ingrese la fecha de su cumpleanios" <<endl;
    cout <<"Dia: "<<endl;
	cin >> cumpleanios.dia;
	cout <<"Mes: "<<endl;
	cin >> cumpleanios.mes;
	cout <<"Anio: "<<endl;
	cin >> cumpleanios.anio;
	if(cumpleanios.dia == hoy.dia){
	if(cumpleanios.mes == hoy.mes){
cout <<"Muchas felicidades, hoy es el dia de su cumpleanios <3" <<endl;
}	
}
else{
	cout <<"Lo sentimos hoy no es su cumpleanios" <<endl; 
}
system("pause");
return 0;
}
