#include <iostream>
using namespace std;

int main() {
	double s1, s2, s3, a1, a2, a3;
	cin >> s1 >> s2 >> s3;
	a1 = s1 * 0.1;
	a2 = s2 * 0.12;
	a3 = s3 * 0.15;
	cout << "el aumento del primer sueldo es: " << a1 << endl;
	cout << "el aumento del segundo sueldo es: " << a2 << endl;
	cout << "el aumento del tercer sueldo es: " << a3 << endl;
	return 0;
}
