/*5. Hacer un programa donde se ingrese la fecha actual y se compruebe si corresponde 
al dia de tu cumpleaños. Mostrar un mensaje de felicitaciones en tal caso. Usar una 
estructura para la fecha.*/
#include <iostream>
using namespace std;
struct Fecha{
	int dia, mes, anio;
};
int main(){
	Fecha hoy, cumpleanios;
	cout << "Ingrese la fecha de su nacimiento: \n";
	cout << "Dia: ";
	cin >> cumpleanios.dia;
	cout << "Mes: ";
	cin >> cumpleanios.mes;
	cout << "Anio: ";
	cin >> cumpleanios.anio;
	cout << "Ingrese la fecha actual: \n";
	cout << "Dia: ";
	cin >> hoy.dia;
	cout << "Mes: ";
	cin >> hoy.mes;
	cout << "Anio: ";
	cin >> hoy.anio;
	
	if(hoy.anio < cumpleanios.anio)
		cout << "Fecha erronea!!!!!" << endl;
	else{
		if(hoy.dia == cumpleanios.dia){
			if(hoy.mes == cumpleanios.mes){
				cout << "Feliz cumpleanios" << endl;
			}
			cout << "es el mismo dia, pero el mes es diferente." << endl;
		}
		else{
			cout << "hoy no es su cumpleanios" << endl;
		}
	}
	system("pause");
	return 0;
}
