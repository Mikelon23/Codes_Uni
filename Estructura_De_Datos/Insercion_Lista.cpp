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
    void insertarInicio(int x);
    void insertarFinal(int x);
    void imprimir();
    bool vacia();
    void insertarposicion(int x, int pos);
};
Lista::Lista(){
    primero = NULL;
} 
void Lista::insertarInicio(int x){
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
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
} 
void Lista::insertarFinal(int x){
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
        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
}
void Lista::imprimir(){
    Nodo *aux;
    aux = primero;
    while(aux != NULL){
        cout << aux->info << " ";
        aux = aux->sig;
    }
    cout << endl;
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
int main(){
    Lista *lista;
    lista = new Lista();
    int n;
    int valor;
 cout << "Ingrese la cantidad de elementos" << endl;
 cin>>n;
 for(int i=0; i<n;i++){
 	cout<<"Ingrese el valor"<<endl;
 	cin>>valor;
 lista->insertarInicio(valor);
}
	lista->imprimir();
} 