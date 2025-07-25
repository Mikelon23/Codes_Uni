#include <iostream>
#include <stack>
#include <limits>

// Implemente las operaciones de la pila, indicadas en clase,
// y trabaje con un nodo que contenga la información de libros.
// Los atributos a registrar del libro son: título, autor,
// número de páginas e ISBN. Implemente un programa principal en
// donde se pueda ingresar un números determinado de libros en la pila
// y que permita mostrar la información de cada libro ingresado.

using namespace std;

struct Libro {
    string Titulo;
    string Autor;
    int Paginas;
    string ISBN;
    int Edicion;  // Added edition number
};

void limpiarBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void ingresarLibro(Libro &libro) {
    cout << "\n=== Ingreso de Libro ===\n";
    
    cout << "Titulo: ";
    limpiarBuffer();
    getline(cin, libro.Titulo);
    
    cout << "Autor: ";
    getline(cin, libro.Autor);
    
    cout << "Paginas: ";
    while (!(cin >> libro.Paginas) || libro.Paginas <= 0) {
        cout << "Por favor ingrese un número válido de páginas: ";
        limpiarBuffer();
    }
    
    cout << "ISBN: ";
    limpiarBuffer();
    getline(cin, libro.ISBN);
}

void mostrarPila(stack<Libro> &pila) {
    if (pila.empty()) {
        cout << "La pila está vacía\n";
        return;
    }

    stack<Libro> temp = pila;
    while (!temp.empty()) {
        const Libro &libro = temp.top();
        cout << "\n=== Libro ===\n"
             << "Titulo: " << libro.Titulo << "\n"
             << "Autor: " << libro.Autor << "\n"
             << "Paginas: " << libro.Paginas << "\n"
             << "ISBN: " << libro.ISBN << "\n"
             << "============\n";
        temp.pop();
    }
}

int main() {
    stack<Libro> pila;
    int n;

    cout << "Ingrese el número de libros: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Por favor ingrese un número válido: ";
        limpiarBuffer();
    }

    for (int i = 0; i < n; i++) {
        Libro libro;
        ingresarLibro(libro);
        pila.push(libro);
    }

    cout << "\nMostrando todos los libros:\n";
    mostrarPila(pila);

    return 0;
}
