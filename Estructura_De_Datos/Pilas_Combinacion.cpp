#include <iostream>
#include <stack>

using namespace std;

// Definición básica de la clase plantilla Pila
template <typename T>
class Pila {
    struct Nodo {
        T info;
        Nodo* sig;
        Nodo(T val) : info(val), sig(nullptr) {}
    };
    Nodo* raiz;
public:
    Pila() : raiz(nullptr) {}
    ~Pila() {
        while (raiz) {
            Nodo* tmp = raiz;
            raiz = raiz->sig;
            delete tmp;
        }
    }
    void Insertar(T val) {
        Nodo* nuevo = new Nodo(val);
        nuevo->sig = raiz;
        raiz = nuevo;
    }
    Nodo* Raiz() { return raiz; }
    void MostrarPila() {
        Nodo* actual = raiz;
        while (actual) {
            cout << actual->info << " ";
            actual = actual->sig;
        }
        cout << endl;
    }
};

// Implemente un programa que permita utilizar dos pilas con el mismo
// número de elementos y que genere una tercera pila resultado de la
// combinación de los elementos de las dos pilas iniciales,
// de forma intercalada.

//Concatena dos pilas en una tercera pila
// Pila que contendrá los elementos de las otras dos pilas
void Concatenar(Pila<int> *pila1, Pila<int> *pila2, Pila<int> *pila3)
{
  auto *recorrido1 = pila1->Raiz();
  auto *recorrido2 = pila2->Raiz();

  while (recorrido1 != NULL && recorrido2 != NULL)
  {
    pila3->Insertar(recorrido1->info);
    pila3->Insertar(recorrido2->info);

    recorrido1 = recorrido1->sig;
    recorrido2 = recorrido2->sig;
  }
}

int main()
{
  auto pila1 = new Pila<int>();
  auto pila2 = new Pila<int>();
  auto pila3 = new Pila<int>();
  int n, valor;

  cout << "Ingrese la cantidad de elementos: ";
  cin >> n;

  cout << "Pila 1" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Ingrese un valor: ";
    cin >> valor;

    pila1->Insertar(valor);
  }

  cout << "Pila 2" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Ingrese un valor: ";
    cin >> valor;

    pila2->Insertar(valor);
  }

  Concatenar(pila1, pila2, pila3);

  cout << "Pila 3" << endl;
  pila3->MostrarPila();

  return 0;
}