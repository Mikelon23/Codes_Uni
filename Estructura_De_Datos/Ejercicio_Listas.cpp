#include <iostream>
using namespace std;

// Implemente las operaciones de la estructura lista, indicadas en clase
// y resuelva los siguientes ejercicios:
// - Generar una lista que almacene la siguiente serie numérica:
//   1,5,3,7,5,9,7,11,9... Para ello, todos los valores serán ingresados
//   al inicio de la lista, y se deberá indicar el número de términos
//   de la serie que se van a insertar.
// Genera una serie numérica y la inserta al final de la lista.
// Parámetros:
//   lista - puntero a la lista donde se insertarán los elementos.
//   n     - cantidad de términos de la serie a generar.

// Nodo genérico
template <typename T>
struct Nodo {
    T info;
    Nodo* sig;
    Nodo(T val) : info(val), sig(nullptr) {}
};

// Lista simplemente enlazada
template <typename T>
class Lista {
    Nodo<T>* raiz;
public:
    Lista() : raiz(nullptr) {}

    Nodo<T>* Raiz() { return raiz; }

    void InsertarFinal(T val) {
        Nodo<T>* nuevo = new Nodo<T>(val);
        if (!raiz) {
            raiz = nuevo;
        } else {
            Nodo<T>* temp = raiz;
            while (temp->sig) temp = temp->sig;
            temp->sig = nuevo;
        }
    }

    void InsertarInicio(T val) {
        Nodo<T>* nuevo = new Nodo<T>(val);
        nuevo->sig = raiz;
        raiz = nuevo;
    }

    void EliminarElemento(T val) {
        Nodo<T>* temp = raiz;
        Nodo<T>* prev = nullptr;

        while (temp) {
            if (temp->info == val) {
                if (prev) prev->sig = temp->sig;
                else raiz = temp->sig;
                Nodo<T>* borrar = temp;
                temp = temp->sig;
                delete borrar;
            } else {
                prev = temp;
                temp = temp->sig;
            }
        }
    }

    void MostrarLista() {
        Nodo<T>* temp = raiz;
        while (temp) {
            cout << temp->info << " ";
            temp = temp->sig;
        }
        cout << endl;
    }
};

// Genera una serie alternando +4 y -2 y la inserta al inicio
void GenerarSerie(Lista<int>* lista, int n) {
    int x = 1;
    for (int i = 1; i <= n; i++) {
        lista->InsertarInicio(x);
        if (i % 2 == 0)
            x -= 2;
        else
            x += 4;
    }
}

// Elimina todas las ocurrencias de un valor de la lista
void EliminarOcurrencias(Lista<int>* lista, int x) {
    // Eliminación segura mientras se recorre
    Nodo<int>* actual = lista->Raiz();
    while (actual) {
        int valor = actual->info;
        actual = actual->sig;
        if (valor == x) {
            lista->EliminarElemento(valor);
        }
    }
}

// Cuenta la cantidad de múltiplos de 3 en la lista
int ContarMult3(Lista<int>* lista) {
    Nodo<int>* recorrido = lista->Raiz();
    int contador = 0;

    while (recorrido != nullptr) {
        if (recorrido->info % 3 == 0)
            contador++;
        recorrido = recorrido->sig;
    }

    return contador;
}

int main() {
    auto lista = new Lista<int>();
    int n, item;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> n;

    GenerarSerie(lista, n);

    cout << "\nLista generada:\n";
    lista->MostrarLista();

    cout << "\nIngrese el valor a eliminar: ";
    cin >> item;

    EliminarOcurrencias(lista, item);

    cout << "\nLista despues de eliminar el valor:\n";
    lista->MostrarLista();

    cout << "\nCantidad de multiplos de 3: " << ContarMult3(lista) << endl;

    delete lista;
    return 0;
}