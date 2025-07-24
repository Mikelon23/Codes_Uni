#include "iostream"
#include "string.h"

using namespace std;

void Ingreso(int v[], int len)
{
	cout << "INGRESO DE DATOS" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "Ingrese el elemento #" << i + 1 << ": ";
		cin >> v[i];
	}
}

void Mostrar(int v[], int len)
{
	cout << "SALIDA" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

void MetodoInsercion(int v[], int len)
{
	cout << "ORDENAMIENTO - METODO INSERCION" << endl;
	int k, aux;
	
	for(int i = 0; i < len; i++)
	{
		aux = v[i];
		k = i - 1;
		
		while (k >= 0 && aux < v[k])
		{
			v[k + 1] = v[k];
			k--;
		}
		v[k + 1] = aux;
	}
}
void BusquedaBinaria(int v[], int len, int b)
{
	int mitad, primero, ultimo;
	bool ban = false;
	primero = 0;
	int x=0;
	ultimo  = len-1;
	while (primero <= ultimo && ban == false)
	{
		mitad = (primero + ultimo)/2;
			if(b == v[mitad])
			ban = true;
			if( b < v[mitad])
			ultimo = mitad-1;
			if(b > v[mitad])
			primero = mitad+1; 
			
	}
	if(ban)
	cout<<"El numero "<<b<<" se encuentra en el vector"<<endl;
	else
	cout<<"El numero "<<b<<" no se encuentra en el vector"<<endl;
}
void BusquedaSecuencial(int v[], int len, int b)
{
	bool ban = false;
	int i=0;
	int x=0; 
	while(i < len && ban == false)
	{
		if( v[i] == b)
		{
			ban= true;
			for(int i=0;i<len;i++){
				if(v[i]==b)
				x++;
			}
			cout<<"El numero "<<b<<" se encuentra en el vector "<<x<<" veces"<<endl;	
				for(int i=0;i<len;i++){
				if(v[i]==b)
			cout<<"El numero "<<b<<" se encuentra en la posicion "<< i+1 <<endl;
			}
		}
		
		i++;
	
	}
	

}

int main()
{
	int nums[10];
	int n = sizeof(nums) / sizeof(nums[0]);
	int x;
	Ingreso(nums, n);
	Mostrar(nums, n);
	MetodoInsercion(nums, n);
	Mostrar(nums, n);
	cout<<"Ingrese el numero que desea buscar"<<endl;
	cin>>x;
	cout<<"----------------Busqueda Secuencial----------------"<<endl;
	BusquedaSecuencial(nums, n, x);
	cout<<"----------------Busqueda Binaria ----------------"<<endl;
	BusquedaBinaria(nums, n, x);


	
	
	return 0;
}
