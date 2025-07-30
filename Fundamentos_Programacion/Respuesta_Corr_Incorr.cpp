/*Elaborar un algoritmo que solicite el número de respuestas correctas, incorrectas y
en blanco, correspondientes a postulantes, y muestre su puntaje final considerando,
que por cada respuesta correcta tendrá 4 puntos, respuestas incorrectas tendrá -1
y respuestas en blanco tendrá 0*/
#include <iostream>
using namespace std;
int main()
{
	int rc, ri, rb, respuestasc, respuestasi, respuestasb, puntajef;
	cout << "INGRESE EL NUMERO DE RESPUESTAS CORRECTAS\n";
	cin >> rc;
	cout << "INGRESE EL NUMERO DE RESPUESTAS INCORRECTAS\n";
	cin >> ri;
	cout << "INGRESE EL NUMERO DE RESPUESTAS EN BLANCO\n";
	cin >> rb;
	respuestasc = rc * 4;
	respuestasi = ri * -1;
	respuestasb = rb * 0;
	puntajef = respuestasc + respuestasi + respuestasb;
	cout << "EL PUNTAJE FINAL OBTENIDO ES:" << puntajef << endl;
	return 0;
}
