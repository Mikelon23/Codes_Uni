#include <iostream>
#include <queue>

using namespace std;

// Crear un nodo para cola con la siguiente información:
// nombre de usuario y servicio requerido.
// Modificar la clase cola que permita encolar y desencolar los nodos
// con la nueva información.
// Mostrar una lista de servicios ofrecidos en un Registro Civil para
// que un usuario pueda seleccionar el servicio que requiera.
// Los servicios en la lista son: Cedulación, Renovación de cédula,
// Generación de pasaporte, Certificado de nacimiento, Certificado
// de función.
// Implemente un programa que permita ingresar un conjunto de usuarios,
// indicando por cada uno el servicio que requiere y asignarlo a una cola
// para dicho servicio. Cada servicio maneja una cola diferente en donde
// se ingresan los usuarios que necesitan acceder a dicho servicio.
// El programa debe mostrar los elementos de las colas ingresadas.
// Si una cola no tiene usuarios, mostrar un mensaje indicando que la
// cola está vacía.

struct Servicio
{
  char Nombre[50];
  string Tipo;
};

// Definición de nodo para la cola
template <typename T>
struct Nodo
{
    T info;
    Nodo<T>* sig;
    Nodo(const T& dato) : info(dato), sig(NULL) {}
};

// Definición de la clase Cola
template <typename T>
class Cola
{
private:
    Nodo<T>* frente;
    Nodo<T>* final;
public:
    Cola() : frente(NULL), final(NULL) {}

    void Encolar(const T& dato)
    {
        Nodo<T>* nuevo = new Nodo<T>(dato);
        if (final == NULL)
        {
            frente = final = nuevo;
        }
        else
        {
            final->sig = nuevo;
            final = nuevo;
        }
    }

    bool Vacia() const
    {
        return frente == NULL;
    }

    Nodo<T>* Raiz() const
    {
        return frente;
    }

    ~Cola()
    {
        while (frente != NULL)
        {
            Nodo<T>* temp = frente;
            frente = frente->sig;
            delete temp;
        }
    }
};

void Mostrar(Cola<Servicio> *cola)
{
  auto *recorrido = cola->Raiz();

  while (recorrido != NULL)
  {
    cout << "Cliente: " << recorrido->info.Nombre << endl;
    cout << "Servicio: " << recorrido->info.Tipo << endl;
    cout << endl;

    recorrido = recorrido->sig;
  }
}

int main()
{
  Cola<Servicio> *cedula = NULL,
                 *renovacion = NULL,
                 *pasaporte = NULL,
                 *nacimiento = NULL,
                 *defuncion = NULL;
  Servicio servicio;
  int n, opcion;

  cout << "Ingrese la cantidad de clientes: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    system("cls"); // Limpia la pantalla
    cin.ignore(); // Limpia el buffer de entrada

    cout << "Ingrese el nombre del cliente: ";
    fgets(servicio.Nombre, sizeof(servicio.Nombre), stdin);

    cout << "Servicios disponibles: " << endl;
    cout << "1. Cedulacion" << endl;
    cout << "2. Renovacion de cedula" << endl;
    cout << "3. Generacion de pasaporte" << endl;
    cout << "4. Certificado de nacimiento" << endl;
    cout << "5. Certificado de defuncion" << endl;
    cout << "Ingrese el servicio que requiere: ";
    cin >> opcion;

    switch (opcion)
    {
      case 1:
        servicio.Tipo = "Cedulacion";
        
        if (cedula == NULL)
          cedula = new Cola<Servicio>();

          cedula->Encolar(servicio);
        break;
      case 2:
        servicio.Tipo = "Renovacion de cedula";
        
        if (renovacion == NULL)
          renovacion = new Cola<Servicio>();

          renovacion->Encolar(servicio);
        break;
      case 3:
        servicio.Tipo = "Generacion de pasaporte";
        
        if (pasaporte == NULL)
          pasaporte = new Cola<Servicio>();

          pasaporte->Encolar(servicio);
        break;
      case 4:
        servicio.Tipo = "Certificado de nacimiento";
        
        if (nacimiento == NULL)
          nacimiento = new Cola<Servicio>();

          nacimiento->Encolar(servicio);
        break;
      case 5:
        servicio.Tipo = "Certificado de defuncion";
        
        if (defuncion == NULL)
          defuncion = new Cola<Servicio>();

          defuncion->Encolar(servicio);
        break;
      default:
        cout << "Opción no valida" << endl;
        i--;
        break;
    }
  }

  // Mostrar las colas si no están vacías, caso contrario mostrar un mensaje

  cout << "Cedulacion" << endl;
  if (cedula != NULL)
    Mostrar(cedula);
  else
    cout << "No hay clientes en la cola" << endl;

  cout << "Renovación de cedula" << endl;
  if (renovacion != NULL)
    Mostrar(renovacion);
  else
    cout << "No hay clientes en la cola" << endl;

  cout << "Generación de pasaporte" << endl;
  if (pasaporte != NULL)
    Mostrar(pasaporte);
  else
    cout << "No hay clientes en la cola" << endl;

  cout << "Certificado de nacimiento" << endl;
  if (nacimiento != NULL)
    Mostrar(nacimiento);
  else
    cout << "No hay clientes en la cola" << endl;

  cout << "Certificado de defunción" << endl;
  if (defuncion != NULL)
    Mostrar(defuncion);
  else
    cout << "No hay clientes en la cola" << endl;

  return 0;
}