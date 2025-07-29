/*Elaborar un algoritmo que permita calcular el numero de CDs necesarios para hacer
una copia de seguridad, de la disco cuya capacidad se conoce. Considerar
informacion almacenada en un que el disco duro esta lleno de informacion, ademas
expresado en gigabyte. Un CD virgen tiene 700 Megabytes de capacidad y una
Gigabyte es igual a 1024 Megabytes*/
#include <iostream>
using namespace std;
int main()
{
    float gb, mb, cd;
    cout << "Ingrese la capacidad del Disco Duro en gigabyte : ";
    cin >> gb;
    mb = gb * 1024;
    cd = mb / 700;
    cout << "La cantidad de Cds a utilizar en el respaldo es :" << cd;
    return 0;
}
