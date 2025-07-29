#include <iostream>
using namespace std;
int main(){
	int duracion;
	float costo;
	cout <<"ingrese la duracion de la llamada: ";
	cin>>duracion;

	if (duracion<=5)
	{
		costo=duracion*0.9;
	}else{
		costo=((duracion-5)*1.1)+(4.5);
	};
	cout<<"el costo de la llamada es: "<<costo<<endl;
	system("pause");
	return 0;
}