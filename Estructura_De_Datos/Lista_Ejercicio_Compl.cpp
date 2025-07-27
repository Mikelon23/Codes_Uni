#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

class Nodo
{
	public:
		int info;
		Nodo *sig;
		Nodo();
};

Nodo::Nodo()
{
	sig = NULL;
}

class Lista
{
	public:
		Nodo *primero;
		Lista();
	 	void insertarInicio(int);
	 	void insertarFinal(int);
	 	void insertarMedio(int,int);
	 	//void buscarElemento(int);
	 	void eliminarElemento(int);
	 	void mostrarLista();
	 	void generarListaSerie(int);
	 	void eliminarElementoRepetido(int);
	 	int contarMultiplos();
	 	void Negativo();
	 	void mayor();
	 	void Promedio();
	 	void ListaInvertida(Lista *invertida);
	 	void cuadrado(Lista *elevado);
};

Lista::Lista()
{
	primero = NULL;
}

void Lista::insertarInicio(int valor)
{
    Nodo *q;
    q = new Nodo();
    q->info = valor;
    q->sig = primero;
    primero = q;
}
 
void Lista::insertarFinal(int valor)
{
    Nodo *t, *q;
	t = new Nodo();
	q = new Nodo();
 
    q->info  = valor;
    //q->sig = NULL;
 
    if(primero == NULL)
    {
        primero = q;
    }
    else
    {
        t = primero;
        while(t->sig != NULL)
        {
            t = t->sig;
        }
        t->sig = q;
    }
 
}

void Lista::insertarMedio(int valor, int pos)
{
	Nodo *t = new Nodo();
	Nodo *q = new Nodo();
	bool ban = false;
	
	q->info = valor;
	
	if (pos == 1)
    {
    	q->sig = primero;
    	primero = q;
    	ban = true;
    }
    else
    {
        t = primero;
 
        for(int i = 1; t != NULL; i++)
        {
            if (i == pos)
            {
            	ban = true;
                q->sig = t->sig;
                t->sig = q;
            }
            t = t->sig;
        }
    }
    if (ban)
    {
    	cout<<"Nodo insertado \n";
	}
	else
	{
		cout<<"   Error...Posicion no encontrada..!"<<endl;
	}
}

/*void buscarElemento(Tlista lista, int valor)
{
    Tlista q = lista;
    int i = 1, band = 0;
 
    while(q!=NULL)
    {
        if(q->nro==valor)
        {
            cout<<endl<<" Encontrada en posicion "<< i <<endl;
            band = 1;
        }
        q = q->sgte;
        i++;
    }
 
    if(band==0)
        cout<<"\n\n Numero no encontrado..!"<< endl;
}*/

void Lista::eliminarElemento(int valor)
{
    Nodo *p, *ant = new Nodo();
    p = primero;
    ant = p;
    bool ban = false;
 
    if (primero != NULL)
    {
        while (p != NULL && ban == false)
        {
            if (p->info == valor)
            {
                if (p == primero)
                    primero = primero->sig;
                else
                    ant->sig = p->sig;
                delete(p);
                ban = true;
            }
            else
            {
            	ant = p;
            	p = p->sig;
        	}
        }
        if (ban)
    	{
    		cout<<"Nodo eliminado \n";
		}
		else 
		{
			cout<<"   Valor no encontrado"<<endl;
		}
    }
    else
        cout<<" Lista vacia..!";
}
 
void Lista::mostrarLista()
{
	Nodo *q = primero;
    int i = 0;
 	if (q == NULL)
 		cout<<"Lista vacia \n";
 	else
 	{
    	while(q != NULL)
     	{
          	cout <<' '<< i+1 <<") " << q->info << endl;
          	q = q->sig;
          	i++;
     	}
	}
}

void Lista::generarListaSerie(int n)
{
	int t1 = 1;
	int t2 = 5;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			this->insertarInicio(t1);
			t1 = t1 + 2;
		}
		else
		{
			this->insertarInicio(t2);
			t2 = t2 + 2;
		}
	}
}

void Lista::eliminarElementoRepetido(int valor)
{
	Nodo *p, *ant = new Nodo();
    p = primero;
    ant = p;
    bool ban = false;
 
    if (primero != NULL)
    {
        while (p != NULL)
        {
            if (p->info == valor)
            {
                if (p == primero)
                    primero = primero->sig;
                else
                    ant->sig = p->sig;
                delete(p);
                ban = true;
                p = primero;
            }
            else
            {
            	ant = p;
            	p = p->sig;
        	}
        }
        if (ban)
    	{
    		cout<<"Nodo eliminado \n";
		}
		else 
		{
			cout<<"   Valor no encontrado"<<endl;
		}
    }
    else
        cout<<" Lista vacia..!";
	//cout<<"funcion ejecutada\n";
}

int Lista::contarMultiplos()
{
	Nodo *q = primero;
    int c = 0;
 	if (q == NULL)
 		cout<<"Lista vacia \n";
 	else
 	{
    	while(q != NULL)
     	{
          	if (q->info % 3 == 0)
          	{
          		c++;
			}
          	q = q->sig;
     	}
	}
	return c;
}


void Lista::Negativo()
{
	Nodo *q = primero;
    int n = 999999;
 	if (q == NULL)
 		cout<<"Lista vacia \n";
 	else
 	{
    	while(q != NULL)
     	{
          	if (q->info < n)
          	{
          		n = q->info;
			}	
          	q = q->sig;
     	}
	}
	cout<<"menor"<<n;
}
void Lista::mayor()
{
	Nodo *q = primero;
    int n = 0;
 	if (q == NULL)
 		cout<<"Lista vacia \n";
 	else
 	{
    	while(q != NULL)
     	{
          	if (q->info > n)
          	{
          		n = q->info;
			}	
          	q = q->sig;
     	}
	}
	cout<<"mayor"<<n;
}
void Lista::Promedio()
{
	Nodo *q = primero;
    int suma = 0, promedio,c;
 	if (q == NULL)
 		cout<<"Lista vacia \n";
 	else
 	{
    	while(q != NULL)
     	{
          	suma=suma+q->info;
          	c++;
          	q = q->sig;
          	promedio=suma/c;
     	}
	}
	cout<<"El promedio es: "<<promedio;
}
void Lista::cuadrado(Lista *elevado)
{
	Nodo *q = primero;
    int i = 0;
 	if (q == NULL)
 		cout<<"Lista vacia \n";
 	else
 	{
    	while(q != NULL)
     	{
     		elevado->insertarFinal(pow(q->info, 2));
          	q = q->sig;
     	}
	}
}

void Lista::ListaInvertida(Lista *invertida)
{
	Nodo *q = primero;
    
 	if (q == NULL)
 		cout<<"Lista vacia \n";
 	else
 	{
    	while(q != NULL)
     	{
          	invertida->insertarInicio(q->info);
          	q = q->sig;
     	}
	}
}
int menu()
{
	int op;
    cout<<"\n\t\tLISTA ENLAZADA SIMPLE\n\n";
    cout<<" 1. INSERTAR AL INICIO               "<<endl;
    cout<<" 2. INSERTAR AL FINAL                "<<endl;
    cout<<" 3. INSERTAR EN UNA POSICION         "<<endl;
    cout<<" 4. ELIMINAR ELEMENTO 'V'            "<<endl;
    cout<<" 5. MOSTRAR LISTA                    "<<endl;
    cout<<" 6. GENERAR SERIE                    "<<endl; 
    cout<<" 7. ELIMINAR ELEMENTOS CON VALOR 'V' "<<endl;
    cout<<" 8. CONTAR MULTIPLOS    				"<<endl;
    cout<<" 9. LISTA INVERTIDA    				"<<endl;
    cout<<" 10. Numero menor de la lista   				"<<endl;
    cout<<" 11. Numero mayor de la lista   				"<<endl;
    cout<<" 12. El promedio  				"<<endl;
    
    cout<<" 13. Lista cuyos valores sean el cuadrado  				"<<endl;
    cout<<" 14. SALIR                            "<<endl;
 
    cout<<"\n INGRESE OPCION: ";
    cin>>op;
    return op;
} 


main()
{
	Lista *lista, *invertida,*elevado; 
	
    int op;     // opcion del menu
    int dato;  // elemenento a ingresar
    int pos;    // posicion a insertar
 
 	lista = new Lista();
 	invertida = new Lista();
 	elevado = new Lista();

    do
    {
        op = menu();
 
        switch(op)
        {
            case 1:
                cout<< "\n NUMERO A INSERTAR: "; cin>> dato;
                lista->insertarInicio(dato);
            	break;
            case 2:
                cout<< "\n NUMERO A INSERTAR: "; cin>> dato;
                lista->insertarFinal(dato);
            	break;
            case 3:
                cout<< "\n NUMERO A INSERTAR: ";cin>> dato;
                cout<< " Posicion : ";       cin>> pos;
                lista->insertarMedio(dato,pos);
            	break;
            case 4:
                cout<<"\n VALOR A ELIMINAR: "; cin>> dato;
                lista->eliminarElemento(dato);
            	break;
            case 5:
                cout<<"\n\n MOSTRANDO LISTA\n\n";
                lista->mostrarLista();
            	break;
            case 6:
            	int n;
                cout<<"\n\n Ingrese cantidad de términos de la serie:\n\n";
                cin>>n;
                lista->generarListaSerie(n);
            	break;
            case 7:
                cout<<"\n VALOR A ELIMINAR: "; cin>> dato;
                lista->eliminarElementoRepetido(dato);
            	break;
            case 8:
                cout<<"\n CANTIDAD DE MULTIPLOS DE 3: ";
                cout<<lista->contarMultiplos();
            	break;
            case 9:
                cout<<"\n LISTA INVERTIDA: ";
                lista->ListaInvertida(invertida);
                //cout<<"Lista invertida: ";
                invertida->mostrarLista();
            	break;
            case 10:
                cout<<"\n Numero menor de la lista: ";
                lista->Negativo();
            	break;
            case 11:
                cout<<"\n Numero mayor de la lista: ";
                lista->mayor();
            	break;
            case 12:
                cout<<"\n El promedio ";
                lista->Promedio();
            	break;
            case 13:
                cout<<"\n Lista cuyos valores sean el cuadrado ";
                lista->cuadrado(elevado);
                elevado->mostrarLista();
            	break;
			case 14:
            	cout<<"\n\n PROGRAMA TERMINADO\n\n";
 				break;
 			default:
 				cout<<"\n\n OPCION INCORRECTA\n\n";
        }
        cout<<endl<<endl;
        system("pause");  system("cls");
    }while(op != 14);

   system("pause");
   return 0;
}