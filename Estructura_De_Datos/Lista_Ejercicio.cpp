#include<iostream>
using namespace std;
class Nodo{
    public:
    int info;
    Nodo *sig;
    Nodo();
};
Nodo::Nodo(){
    sig = NULL;
}
class Lista{
    public:
    Nodo *primero;
    Lista();
    void insertarInicio(int);
    void insertarFinal(int);
    void insertarmedio(int, int);
    void buscarelemento(int);
    bool eliminarelemento(int);
    void imprimir();
    bool vacia();
    void eliminarocurrencias(int);
    void insertarposicion(int, int);
    int contarmultiplos(int);
};
Lista::Lista(){
    primero = NULL;
} 
void Lista::insertarInicio(int valor){
    Nodo *q;
    q = new Nodo();
    q->info = valor;
    q->sig = primero;
    primero = q;
} 
void Lista::insertarFinal(int valor){
    Nodo *t, *q;
    t = new Nodo();
    q = new Nodo();
    q ->info = valor;
    //q->sig = NULL;
    if(vacia()){
        primero = q;
    }
    else{
        t = primero;
        while(t->sig != NULL){
            t = t->sig;
        }
        t->sig = q;
    }
}
void Lista::imprimir(){
    Nodo *q = primero;
    int i = 0;
    if (q == NULL){
        cout << "Lista vacia" << endl;
    }
    else{
        while(q != NULL){
            cout <<' '<<i+1<< q->info << endl;
            q = q->sig;
            i++;
        }
    }
} 
bool Lista::vacia(){
    if(primero == NULL){
        return true;
    }
    else{
        return false;
    }
} 
void Lista::insertarposicion(int x, int pos){
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = NULL;
    if(vacia()){
        primero = nuevo;
    }
    else{
        Nodo *aux;
        aux = primero;
        int cont = 1;
        while(aux->sig != NULL && cont < pos){
            aux = aux->sig;
            cont++;
        }
        nuevo->sig = aux->sig;
        aux->sig = nuevo;
    }
}
void Lista::insertarmedio(int valor, int pos){
    Nodo *t, *q;
    t = new Nodo();
    q = new Nodo();
    bool ban = false;
    q->info = valor;
    if (pos == 1){
        q->sig = primero;
        primero = q;
        ban = true;
    }
    else{
        t = primero;
        for(int i = 1; t != NULL ; i++){
            if(i == pos){
                ban = true;
                q->sig = t->sig;
                t->sig = q;
            }
            t = t->sig;
        }
    }
    if(ban){
        cout << "Nodo insertado..." << endl;
    }else{
        cout << "Posicion no encontrada..." << endl;
    }
}
void Lista::buscarelemento(int valor){
    Nodo *aux;
    aux = primero;
    int cont = 1;
    while(aux != NULL){
        if(aux->info == valor){
            cout << "El elemento se encuentra en la posicion: " << cont << endl;
            break;
        }
        aux = aux->sig;
        cont++;
    }
}
bool Lista::eliminarelemento(int valor){
    Nodo *p, *ant = new Nodo();
    p = primero;
    ant = p;
    bool ban = false;
    if (primero != NULL){
        while(p != NULL && ban != false){
            if(p->info == valor){
                if(p == primero){
                    primero = primero->sig;
                }
                else{
                    ant->sig = p->sig;
                }
                delete p;
                ban = true;
            }else{
                ant = p;
                p = p->sig;
            }
        }
    }
    return ban;
}
void Lista::eliminarocurrencias(int valor){
    if (eliminarelemento(valor)){
        eliminarocurrencias(valor);
    }
}
int Lista::contarmultiplos(int mult){
    Nodo *p, *ant;
    int multiplos = 0;
    p = primero;
    if (primero != NULL){
        while(p != NULL){
            if(p->info % mult == 0){
                multiplos++;
            }
            p = p->sig;
        }
    }
    return multiplos;
}
int main(){
    Lista *listaFila1;
    listaFila1 = new Lista();
    Lista *ElimianrP;
    ElimianrP = new Lista();
    Lista *MostrarLista;
    MostrarLista = new Lista();

    int valor, x, pos, nelem, n;
    int op;
    
    do
    {
        cout<<"Lista enlazada simple"<<endl;
        cout<<"1. Insertar al inicio"<<endl;
        cout<<"2. Insertar al final"<<endl;
        cout<<"3. Insertar en una posicion"<<endl;
        cout<<"4. Insertar en medio"<<endl;
        cout<<"5. Buscar elemento"<<endl;
        cout<<"6. Eliminar elemento"<<endl;
        cout<<"7. Eliminar ocurrencias"<<endl;
        cout<<"8. Contar multiplos"<<endl;
        cout<<"9. Mostrar lista"<<endl;
        cout<<"10. Salir"<<endl;
        cout<<"11. Ingresar numero de lista: "<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>op;
        switch (op)
        {
        case 1:
            cout<<"Ingrese el numero de la lista: "<<endl;
            cin>>x;
            for (int i = 0; i < x; i++)
            {
                cout<<"Ingrese el valor al inicio: "<<"["<<i+1<<"]"<<":";
                cin>>valor;
                listaFila1->insertarInicio(valor);
            }
            break;
        case 2:
            cout<<"Ingrese el valor al final: "<<endl;
            cin>>x;
            for (int i = 0; i < x; i++)
            {
                cout<<"Ingrese el valor al final: "<<"["<<i+1<<"]"<<":";
                cin>>valor;
                listaFila1->insertarFinal(valor);
            }
            break;
        case 3:
            cout<<"Ingrese el numero de la lista: "<<endl;
            cin>>x;
            for (int i = 0; i < x; i++)
            {
                cout<<"Ingrese el valor a insertar: "<<"["<<i+1<<"]"<<":";
                cin>>valor;
                cout<<"Ingrese la posicion: ";
                cin>>pos;
                listaFila1->insertarposicion(valor, pos);
            }
            break;
        case 4:
            cout<<"Ingrese el numero de la lista: "<<endl;
            cin>>x;
            for (int i = 0; i < x; i++)
            {
                cout<<"Ingrese el valor a insertar: "<<"["<<i+1<<"]"<<":";
                cin>>valor;
                cout<<"Ingrese la posicion: ";
                cin>>pos;
                listaFila1->insertarmedio(valor, pos);
            }
            break;
        case 5:
            cout<<"Ingrese el valor a buscar: "<<endl;
            cin>>valor;
            listaFila1->buscarelemento(valor);
            break;
        case 6:
            cout<<"Ingrese el valor a eliminar: "<<endl;
            cin>>valor;
            listaFila1->eliminarelemento(valor);
                cout<<"Elemento eliminado"<<endl;
            break;
        case 7:
            cout<<"Ingrese el valor a eliminar 'concurrencias': "<<endl;
            cin>>valor;
            listaFila1->eliminarocurrencias(valor);
            break;
        case 8:
            cout<<"Ingrese el valor a contar 'multiplos': "<<endl;
            cin>>valor;
            cout<<"La cantidad de multiplos es: "<<listaFila1->contarmultiplos(valor)<<endl;
            break;
        case 9:
            cout<<"Mostrando lista: "<<endl;
            listaFila1->imprimir();
            break;
        case 10:
            cout<<"Saliendo..."<<endl;
            break;
        case 11:
            //int n, n=1;
            listaFila1 = new Lista();
            cout<<"Ingrese la cantidad de elementos que desea: "<<endl;
            cin>>n;
            for (int i = 0; i <= n; i++)
            {
                listaFila1->insertarFinal(x);
                if (i % 2 == 0)
                {
                    x = x - 2;
                }else{
                    x = x + 4;
                }
            }
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }
    } while (op != 10);
    return 0;    
}
