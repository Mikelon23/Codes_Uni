/*c) Mediante el uso de vectores y una estructura llamada alumno con campos nombre, apellido, edad y estatura, 
diseñar un programa para calcular la media de las estaturas y de las edades de una clase asumiendo que 
el número máximo de alumnos en la clase es de 50 y que, además, las estaturas son valores expresados en 
centímetros y las edades en meses. Determinar también cuántos alumnos son más altos y cuántos más bajos que la media, 
así mismo determinar cuantos alumnos son mayores que la mediav
r y cuanto menores que la media.*/

#include<iostream>
using namespace std;
int main() {
	string nombre[50],apellido[50];
	float edad[50],estatura[50],mayored,mayorest,menored,menorest,edadmed,estmed,sumaed,sumaest;
	int i;
	sumaed=0,sumaest=0,edadmed=0,estmed=0,mayored=0,menored=0,mayorest=0,menorest=0;
	cout<<"\n Ingrese los datos que se le solicitan a continuacion para proseguir con la ejecucion del programa"<<endl;
	for (i=1;i<=50;i++) {
		cout << "\n Digite el nombre del alumno " << i << endl;
		cin >> nombre[i];
		cout << "\n Digite el apellido del alumno " << i << endl;
		cin >> apellido[i];
		cout << "\n Digite la edad (en meses) del alumno " << i << endl;
		cin >> edad[i];
		cout << "\n Digite la estatura (en centimetros) del alumno " << i << endl;
		cin >> estatura[i];
	}
	for (i=1;i<=50;i++) {
		sumaed=edad[i]+sumaed;
		edadmed=(sumaed/3);
		sumaest=estatura[i]+sumaest;
		estmed=(sumaest/3);
		if (edad[i]>edadmed) {
			mayored=mayored+1;
			menored=3-mayored;
		}
		if (estatura[i]>estmed) {
			mayorest=mayorest+1;
			menorest=3-mayorest;
		}
	}
	cout<<"\n La suma de las edades ingresadas es: "<< sumaed<<endl;
	cout<<"\n La media de las edades es: "<<edadmed<<endl;
	cout<<"\n En total hay "<< mayored<<" alumnos de mayor edad a la media" << endl;
	cout<<"\n Hay "<< menored<<" alumnos de menor edad a la media" << endl;
	cout<<"\n La suma de las estaturas ingresadas es: "<<sumaest<<endl;
	cout<<"\n La media de las estaturas es: "<< estmed<<endl;
	cout<<"\n En total hay "<<mayorest<<" alumnos de estatura mayor a la media" << endl;
	cout<<"\n Hay "<<menorest<<" alumnos de estatura menor a la media" << endl;
	system("pause");
	return 0;
}