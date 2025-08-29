#include <iostream>
#include <vector>
#include <string>
using namespace std;

double ingreso_compra(vector<int> &vc, vector<string> &vd, vector<double> &vp, vector<double> &vpt, int n) {
    double suma = 0.0;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese la cantidad del producto " << i + 1 << ": ";
        cin >> vc[i];
        cin.ignore(); // limpiar buffer
        cout << "Ingrese el nombre del producto " << i + 1 << ": ";
        getline(cin, vd[i]);
        cout << "Ingrese el precio unitario del producto " << i + 1 << ": ";
        cin >> vp[i];

        vpt[i] = vc[i] * vp[i];
        suma += vpt[i];
    }
    return suma;
}

void visualizar_compra(vector<int> &vc, vector<string> &vd, vector<double> &vp, vector<double> &vpt, int n, double suma, double iva, double total) {
    cout << "\nN°  Cantidad  Producto          P. Unitario  P. Total\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "    " << vc[i] << "        " << vd[i] << "      " << vp[i] << "       " << vpt[i] << endl;
    }
    cout << "\n                          Subtotal: " << suma << endl;
    cout << "                         IVA (12%): " << iva << endl;
    cout << "                             Total: " << total << endl;
}

int main() {
    cout << "===== FACTURA DE COMPRA =====" << endl;

    int n;
    cout << "Ingrese el numero de articulos que va a facturar: ";
    cin >> n;

    vector<int> vc(n);
    vector<string> vd(n);
    vector<double> vp(n);
    vector<double> vpt(n);

    cout << "\nIngrese el detalle de la compra:" << endl;
    double suma = ingreso_compra(vc, vd, vp, vpt, n);
    double iva = suma * 0.12;
    double total = suma + iva;

    // Visualizar la factura
    visualizar_compra(vc, vd, vp, vpt, n, suma, iva, total);

    return 0;
}
