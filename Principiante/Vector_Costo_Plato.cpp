// ===============================
//  Programa: Vector Costo Plato
// ===============================

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;                          // Cantidad de ingredientes
    double s = 0;                   // Acumulador del costo total
    string np;                      // Nombre del plato

    cout << "Ingrese el nombre del plato: ";
    getline(cin, np);

    cout << "Ingrese la cantidad de ingredientes del plato: ";
    cin >> n;

    // Vectores dinámicos
    vector<string> Vi(n);  // Ingredientes
    vector<int> Vc(n);     // Cantidades
    vector<double> Vpu(n); // Precio unitario
    vector<double> Vpt(n); // Precio total por ingrediente

    cout << "\nDetalle a continuacion el listado de ingredientes con sus cantidades y precios\n";

    for (int i = 0; i < n; i++) {
        cout << "\nIngrese el producto " << i + 1 << ": ";
        cin.ignore(); // limpiar buffer
        getline(cin, Vi[i]);

        cout << "Ingrese la cantidad " << i + 1 << ": ";
        cin >> Vc[i];

        cout << "Ingrese el precio unitario " << i + 1 << ": ";
        cin >> Vpu[i];

        Vpt[i] = Vc[i] * Vpu[i];
        s += Vpt[i];
    }

    cout << "\nEl costo total del plato \"" << np << "\" es: " << s << endl;

    return 0;
}
