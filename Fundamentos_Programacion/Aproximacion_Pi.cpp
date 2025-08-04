/*21.- Hacer un algoritmo que cumpla con la aproximación del número pi con la
serie de Gregory-Leibniz. La formula que se debe aplicar es:
Pi = (4/1) - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) + (4/13) - (4/15) ...*/

#include<iostream>
using namespace std;

int main() {
	int cont,i,num;
	float pii;
	pii = 0;
	cont = 0;
	cout << "Ingrese un numero para determinar la aproximacion de pi" << endl;
	cin >> num;
	for (i=1;i<=num;i+=2) {
		if ((cont%2==0)) {
			pii = pii+(4/i);
		} else {
			pii = pii-(4/i);
		}
		cont = cont+1;
	}
	cout << "El valor de pi se aproxima a: " << pii << endl;
	system("pause");
	return 0;
}
