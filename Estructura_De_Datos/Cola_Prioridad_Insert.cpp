#include<iostream>
using namespace std;
class cola{
    private:
    class nodo{
        public:
        int info;
        nodo *sig;
    };
    nodo *raiz;
    nodo *fondo;
    public:
    cola();
    ~cola();
    void insertar(int x);
    int extraer();
    void imprimir();
    bool vacia();
};
cola::cola(){
    raiz = NULL;
    fondo = NULL;
}
cola::~cola(){
    nodo *reco = raiz;
    nodo *bor;
    while (reco != NULL){
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
} 
void cola::insertar(int x){
    nodo *nuevo;
    nuevo = new nodo();
    nuevo->info = x;
    nuevo->sig = NULL;
    if (vacia()){
        raiz = nuevo;
        fondo = nuevo;
    }
    else{
        fondo->sig = nuevo;
        fondo = nuevo;
    }
}
int cola::extraer(){
    if (!vacia()){
        int informacion = raiz->info;
        nodo *bor = raiz;
        if (raiz == fondo){
            raiz = NULL;
            fondo = NULL;
        }
        else{
            raiz = raiz->sig;
        }
        delete bor;
        return informacion;
    }
    else{
        return -1;
    }
}
void cola::imprimir(){
    nodo *reco = raiz;
    cout << "Listado de todos los elementos de la cola." << endl;
    while (reco != NULL){
        cout << reco->info << " - ";
        reco = reco->sig;
    }
    cout << endl;
}
bool cola::vacia(){
    if (raiz == NULL){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cola *cola1 = new cola();
    cola *cola2 = new cola();
    cola *cola3 = new cola();
    cola *cola4 = new cola();
    int depo, reti, atencion, prefer, opc;
    do
    {
        cout << "1. Insertar" << endl;
        cout << "2. listar" << endl;
        cout << "3. salir" << endl;
        cout << "4. prioridad: " << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "Ingrese el numero de deposito: " << endl;
            cin >> depo;
            cout << "Ingrese el numero de retiro: " << endl;
            cin >> reti;
            cout << "Ingrese el numero de atencion: " << endl;
            cin >> atencion;
            cout << "Ingrese el numero de preferencia alta (1) y baja (0): " << endl;
            cin >> prefer;
            cola1->insertar(depo);
            cola2->insertar(reti);
            cola3->insertar(atencion);
            cola4->insertar(prefer);
            break;
        case 2: 
            cout << "Listado de depositos: " << endl;
            cola1->imprimir();
            cout << "Listado de retiros: " << endl;
            cola2->imprimir();
            cout << "Listado de atenciones: " << endl;
            cola3->imprimir();
            cout << "Listado de preferencias: " << endl;
            cola4->imprimir();
            break;
        case 3: 
            cout << "Saliendo..." << endl;
            break;
        case 4: 
            if (cola4->extraer() == 1)
            {
                cout << "El cliente con preferencia alta es: " << endl;
                cout << "Deposito: " << endl;
                cola1->imprimir();
                cout << "Retiro: " << endl;
                cola2->imprimir();
                cout << "Atencion: " << endl;
                cola3->imprimir();
            }
            else
            {
                cout << "El cliente con preferencia baja es: " << endl;
                cout << "Deposito: " << endl;
                cola1->imprimir();
                cout << "Retiro: " << endl;
                cola2->imprimir();
                cout << "Atencion: " << endl;
                cola3->imprimir();
            }
            break;
        default: 
            cout << "Opcion no valida" << endl;
            break;
        }

    } while (opc != 3);
    
}