#include <iostream>
#include <queue>


using namespace std;

// Implemente las funciones necesarias para ingresar elementos
// en una cola, y desencolar el primer elemento y volver a encolarlo
// al final de la cola.

//Retira el primer elemento de la cola y
//lo coloca al final de la cola.
//Cola a modificar.
void Intercambiar(queue<int> &cl)
{
    // Encolamos el primer elemento al final de la cola
    cl.push(cl.front());
    
    // Desencolamos el primer elemento.
    cl.pop();
}

// Función principal.
int main()
{
    queue<int> cl;
    int n, val;

    system("cls");

    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> val;

        cl.push(val);
    }

    cout << "Entrada: " << endl;
    // Mostrar elementos de la cola
    queue<int> temp = cl;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    Intercambiar(cl);

    cout << "Salida: " << endl;
    temp = cl;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}