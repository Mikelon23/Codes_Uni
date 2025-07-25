#include <iostream>
#include <queue>

using namespace std;

// Implemente una clase Nodo que tenga la siguiente información:
// tipo de servicio (depósito, retiro, atención al cliente), y una
// prioridad (0 para usuario normal y 1 para usuario especial,
// siendo éste el que tiene preferencia). Implemente las funciones
// necesarias para ingresar una cola de atenciones para un grupo
// de usuarios, y que permitan generar una cola adicional con las
// atenciones prioritarias, dejando la cola original solo con las
// atenciones para usuarios normales.

struct Servicio
{
    string tipo;
    int prioridad;

    void Mostrar()
    {
        cout << "Tipo: " << tipo << endl;
        cout << "Prioridad: " << prioridad << endl;
    }
};

// Definición de la clase Cola y su clase interna Nodo
template <typename T>
class Cola {
public:
    struct Nodo {
        T info;
        Nodo* sig;
        Nodo(const T& val) : info(val), sig(nullptr) {}
        Nodo() : sig(nullptr) {}
    };

    Cola() : frente(nullptr), final(nullptr) {}

    void Encolar(const T& val) {
        Nodo* nuevo = new Nodo(val);
        if (!final) {
            frente = final = nuevo;
        } else {
            final->sig = nuevo;
            final = nuevo;
        }
    }

    Nodo* Raiz() {
        return frente;
    }

    void Vaciar() {
        while (frente) {
            Nodo* temp = frente;
            frente = frente->sig;
            delete temp;
        }
        final = nullptr;
    }

    ~Cola() {
        Vaciar();
    }

private:
    Nodo* frente;
    Nodo* final;
};

void Dividir(Cola<Servicio> *col1, Cola<Servicio> *col2)
{
    auto *aux = new Cola<Servicio>();
    auto recorrido = new Cola<Servicio>::Nodo();

    recorrido = col1->Raiz();

    // Recorremos la cola original.
    while (recorrido != NULL)
    {
        // Si el elemento tiene prioridad 1,
        // lo encolamos en la cola 2.
        // De lo contrario, lo encolamos en la cola auxiliar.
        if (recorrido->info.prioridad == 1)
            col2->Encolar(recorrido->info);
        else
            aux->Encolar(recorrido->info);

        recorrido = recorrido->sig;
    }

    // Vaciamos la cola original.
    col1->Vaciar();

    recorrido = aux->Raiz();

    // Recorremos la cola auxiliar.
    while (recorrido != NULL)
    {
        // Encolamos los elementos de la cola auxiliar
        // en la cola original.
        col1->Encolar(recorrido->info);

        recorrido = recorrido->sig;
    }
}

/// @brief Muestra los elementos de una cola.
/// @param cola Cola a mostrar.
void MostarCola(Cola<Servicio> *cola)
{
    auto recorrido = new Cola<Servicio>::Nodo();

    recorrido = cola->Raiz();

    while (recorrido != NULL)
    {
        recorrido->info.Mostrar();
        recorrido = recorrido->sig;
    }
}

// Función principal.
int main()
{
    auto *cl1 = new Cola<Servicio>();
    auto *cl2 = new Cola<Servicio>();
    int n, opc;
    Servicio val;

    system("cls");

    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el tipo de servicio: ";
        cin >> val.tipo;

        cout << "Ingrese la prioridad [0 - 1]: ";
        cin >> val.prioridad;

        cl1->Encolar(val);
    }

    // clx->MostrarCola();
    // Imprimir la cola directamente no funciona
    // porque no se puede acceder a los elementos
    // de la cola.

    cout << "\nEntrada: " << endl;
    MostarCola(cl1);

    Dividir(cl1, cl2);

    cout << "\nSalida 1: " << endl;
    MostarCola(cl1);

    cout << "\nSalida 2: " << endl;
    MostarCola(cl2);

    return 0;
}