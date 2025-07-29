#include<iostream>
using namespace std;
int main() {
    int a, b, c, cont, num;
    cout << "Ingrese numero Limite\n " ;
    cin >> num;
    a = 0;
    b = 1;
    c = 0;
    cont = 0;
    cout << " " << endl;
    while (cont < num) {
        cout << c << endl;
        a = b;
        b = c;
        c = a+b;
        cont = cont+1;
    }
    return 0;
}
