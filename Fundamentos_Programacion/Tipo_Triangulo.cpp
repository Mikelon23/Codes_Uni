/*Elaborar un algoritmo que sirva para identificar el tipo de triangulo (escaleno,
equilatero o isosceles) conociendo sus tres lados.*/
#include <iostream>
using namespace std;
int main()
{
    int lado1, lado2, lado3, tipo;
    cout << "INGRESE EL LADO 1\n";
    cin >> lado1;
    cout << "INGRESE EL LADO 2\n";
    cin >> lado2;
    cout << "INGRESE EL LADO 3\n";
    cin >> lado3;
    if (lado1 == lado2 and lado1 == lado3)
    {
        cout << "EL TIPO DE TRIANGULO ES EQUILATERO";
    }
    else
    {
        if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
        {
            cout << "EL TIPO DE TRIANGULO ES ISOSCELES";
        }
        else
        {
            cout << "EL TIPO DE TRIANGULO ES ESCALENO";
        }
    }
    return 0;
}
