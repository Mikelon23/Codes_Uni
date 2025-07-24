#include <iostream>
#include <stack>

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
};

// Function to display books from the stack
void Mostrar(stack<Libro> &pila) {
    stack<Libro> temp = pila;  // Create a temporary stack to preserve original
    
    if (temp.empty()) {
        cout << "La pila está vacía" << endl;
        return;
    }
    
    while (!temp.empty()) {
        Libro libro = temp.top();
        cout << "\n=== Informacion del Libro ===" << endl;
        cout << "Titulo: " << libro.Titulo << endl;
        cout << "Autor: " << libro.Autor << endl;
        cout << "Paginas: " << libro.Paginas << endl;
        cout << "ISBN: " << libro.ISBN << endl;
        cout << "==========================\n" << endl;
        temp.pop();
    }
}

int main()
{
  stack<Libro> pila;
  Libro libro;
  int n;

  cout << "Ingrese el numero de libros: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Ingrese el titulo del libro: ";
    cin.ignore();
		getline(cin, libro.Titulo);
    cout << "Ingrese el autor del libro: ";
    cin.ignore();
		getline(cin, libro.Autor);
    cout << "Ingrese el numero de paginas del libro: ";
    cin >> libro.Paginas;
    cout << "Ingrese el ISBN del libro: ";
    cin.ignore();
		getline(cin, libro.ISBN);

    cout << endl;

    pila.push(libro);
  }

  // Mostrar la pila
  Mostrar(pila);

  return 0;
}
