/*Elabore un algoritmo que solicitar un número entero entre 65 y 90 (validado), y que
según corresponda en el Código ASCII, muestre un mensaje indicando la letra
mayúscula correspondiente*/
#include<iostream>
using namespace std;
int main(){
	{
		int vocal,numero;
		cout<<"INGRESE UN NUMERO ENTRE EL 69 AL 90()\n";
		cin>> numero;
		switch (numero){
			case 69: cout<<"E";
			break;
			case 70: cout<<"F";
			break;
			case 71: cout<<"G";
			break;
			case 72: cout<<"H";
			break;
			case 73: cout<<"I";
			break;
			case 74: cout<<"J";
			break;
			case 75: cout<<"K";
			break;
			case 76: cout<<"L";
			break;
			case 77: cout<<"M";
			break;
			case 78: cout<<"N";
			break;
			case 79: cout<<"O";
			break;
			case 80: cout<<"P";
			break;
			case 81: cout<<"Q";
			break;
			case 82: cout<<"R";
			break;
			case 83: cout<<"S";
			break;
			case 84: cout<<"T";
			break;
			case 85: cout<<"U";
			break;
			case 86: cout<<"V";
			break;
			case 87: cout<<"W";
			break;
			case 88: cout<<"X";
			break;
			case 89: cout<<"Y";
			break;
			case 90: cout<<"Z";
			break;	
		}
		return 0;
	}
}
