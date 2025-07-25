#include <iostream>
#include <string>
#include <limits>

// Escriba un programa que defina un nodo libro que tenga los siguientes
// datos: título, autor, número de páginas, edición (primera edición,
// segunda edición, etc). 
// Escriba las funciones que permitan resolver las siguientes operaciones:
// - Determinar el número de libros que tienen una segunda edición.
// - Determinar el mayor número de páginas ingresado en los libros.
// - Crear una pila de libros que tengan una segunda edición.

using namespace std;

// Estructura de un libro
struct Libro {
    string Titulo;
    string Autor;
    int Paginas;
    int Edicion;
};

// Nodo genérico
template <typename T>
struct Nodo {
    T info;
    Nodo* sig;
    Nodo(T valor) : info(valor), sig(nullptr) {}
};

// Clase de pila genérica
template <typename T>
class Pila {
private:
    Nodo<T>* tope;
public:
    Pila() : tope(nullptr) {}

    void Insertar(T valor) {
        Nodo<T>* nuevo = new Nodo<T>(valor);
        nuevo->sig = tope;
        tope = nuevo;
    }

    Nodo<T>* Raiz() { return tope; }

    bool EstaVacia() { return tope == nullptr; }

    void MostrarPila() {
        Nodo<T>* actual = tope;
        while (actual != nullptr) {
            cout << "\n=== Libro ===\n";
            cout << "Titulo: " << actual->info.Titulo << endl;
            cout << "Autor: " << actual->info.Autor << endl;
            cout << "Paginas: " << actual->info.Paginas << endl;
            cout << "Edicion: " << actual->info.Edicion << endl;
            cout << "=============\n";
            actual = actual->sig;
        }
    }

    ~Pila() {
        while (tope != nullptr) {
            Nodo<T>* temp = tope;
            tope = tope->sig;
            delete temp;
        }
    }
};

// Cuenta los libros de segunda edición y los guarda en otra pila
void SegundaEdicion(Pila<Libro>* origen, Pila<Libro>* destino, int& cantidad) {
    auto* actual = origen->Raiz();
    cantidad = 0;

    while (actual != nullptr) {
        if (actual->info.Edicion == 2) {
            destino->Insertar(actual->info);
            cantidad++;
        }
        actual = actual->sig;
    }
}

// Determina el mayor número de páginas
int MayorPaginas(Pila<Libro>* pila) {
    auto* actual = pila->Raiz();
    int mayor = 0;

    while (actual != nullptr) {
        if (actual->info.Paginas > mayor)
            mayor = actual->info.Paginas;
        actual = actual->sig;
    }
    return mayor;
}

int main() {
    auto* pilaA = new Pila<Libro>();
    auto* pilaB = new Pila<Libro>();
    Libro libro;
    int n, segundaEdicionCount;

    cout << "Ingrese el numero de libros: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Por favor ingrese un numero valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    for (int i = 0; i < n; i++) {
        cout << "\nLibro #" << i + 1 << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Ingrese el titulo: ";
        getline(cin, libro.Titulo);

        cout << "Ingrese el autor: ";
        getline(cin, libro.Autor);

        cout << "Ingrese el numero de paginas: ";
        while (!(cin >> libro.Paginas) || libro.Paginas <= 0) {
            cout << "Por favor ingrese un número valido: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Ingrese la edición (ej. 1, 2...): ";
        while (!(cin >> libro.Edicion) || libro.Edicion <= 0) {
            cout << "Por favor ingrese un número válido: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        pilaA->Insertar(libro);
    }

    // Mostrar libros ingresados
    cout << "\nTodos los libros ingresados:" << endl;
    pilaA->MostrarPila();

    // Procesar libros de segunda edición
    SegundaEdicion(pilaA, pilaB, segundaEdicionCount);

    cout << "\nLibros de segunda edicion:" << endl;
    pilaB->MostrarPila();

    cout << "\nNumero de libros de segunda edicion: " << segundaEdicionCount << endl;

    // Mostrar mayor número de páginas
    cout << "\nEl mayor numero de paginas es: " << MayorPaginas(pilaA) << endl;

    delete pilaA;
    delete pilaB;

    return 0;
}
