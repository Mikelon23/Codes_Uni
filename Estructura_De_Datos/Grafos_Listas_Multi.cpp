#include <iostream> 
#include <conio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include <stdio.h>

using namespace std;

struct nodoarco; 

struct nodografo 
{ 
	char info; 
	nodografo *next;
	nodoarco *primarc; 
}; 

struct nodoarco 
{ 
	float peso;//se declara, pero no se usa aquí... 
	nodoarco *sig; 
	nodografo *llegada; 
}; 

void iniciar (nodografo *&grafo); 
void unir (nodografo *grafo, char n1, char n2); 
void desunir (nodografo *grafo, char n1, char n2); 
int adyacentes (nodografo *grafo, char n1, char n2); 
int entregrado (nodografo *grafo, char n1); 
int fueradegrado (nodografo *grafo, char n1); 
void cargar (nodografo *&grafo); 
void mostrar (nodografo *grafo); 
nodografo *buscar (nodografo *grafo, char n1); 
void insertar (nodografo *&grafo, char n1); 

int main ( ) 
{ 
	nodografo *grafo; 
	int n, eg, fg; 
	char n1; 
	//clrscr(); 
	iniciar (grafo); 
	cout << "\nIngrese informacion de los arcos... \n"; 
	cargar (grafo); 
	cout <<"\nIngrese el info de un nodo: "; 
	cin >> n1; 
	eg = entregrado (grafo, n1); 
	fg = fueradegrado (grafo, n1); 
	cout << "\nEl entregrado del nodo es: " << eg; 
	cout << "\nEl fuera de grado del nodo es: " << fg; 
	cout << "\n\nEl grafo en notación de conjuntos es:\n\n"; 
	mostrar (grafo); 
	getch(); 
} 

void iniciar (nodografo *&grafo) 
{ 
	char nodo; 
	grafo = NULL; 
	cout << "Ingrese el info del primer nodo (con 0 termina): "; 
	cin >> nodo; 
	while (nodo != '0') 
	{ 
		insertar (grafo, nodo); 
		cout << "Otro info (con 0 termina): "; 
		cin >> nodo; 
	} 
} 

void unir (nodografo *grafo, char n1, char n2) 
{ // Para simplificar, se asume que n1 y n2 existen en el grafo 
	nodografo *i1, *i2; 
	nodoarco *p, *q=NULL; 
	i1 = buscar (grafo, n1); 
	i2 = buscar (grafo, n2); 
	p = i1->primarc; 
	
	while (p != NULL && p->llegada != i2) 
	{ 
		q = p; 
		p = p->sig; 
	} 
	if (p == NULL) 
	{ 
		nodoarco *r = new nodoarco; 
		if (r == NULL) 
		{ 
			//clrscr();
			cout << "Error: Falta memoria..."; 
			getch(); 
			exit (1); 
		} 
		else 
		{ 
			r->sig = NULL; 
			r->llegada = i2; 
			if (q != NULL) 
				q->sig = r; 
			else 
				i1->primarc = r; 
		} 
	} 
} 

void desunir (nodografo *grafo, char n1, char n2) 
{ // se asume que n1 y n2 existen en el grafo... 
	nodoarco *p, *q=NULL; 
	nodografo *i1, *i2; 
	i1 = buscar (grafo, n1); 
	i2 = buscar (grafo, n2); 
	p = i1->primarc; 
	
	while (p != NULL && p->llegada != i2) 
	{ 
		q = p; 
		p = p->sig; 
	} 
	if (p != NULL) 
	{ 
		if (q!=NULL) 
			q->sig = p->sig; 
		else 
			i1->primarc = p->sig; 
		delete p; 
	} 
} 

int adyacentes (nodografo *grafo, char n1, char n2) 
{ 
	nodografo *i1, *i2; 
	nodoarco *p; 
	i1 = buscar (grafo, n1); 
	i2 = buscar (grafo, n2); 
	p = i1->primarc; 
	
	while (p != NULL && p->llegada != i2) 
		p = p->sig; 
	if (p !=NULL) 
		return 1; 
	else 
		return 0; 
}

int fueradegrado (nodografo *grafo, char n1) 
{ 
	nodografo *i1; 
	nodoarco *p; 
	int c = 0; 
	i1 = buscar (grafo, n1); 
	p = i1->primarc; 
	
	while (p != NULL) 
	{ 
		c++; 
		p = p->sig; 
	} 
	
	return c; 
} 
	
int entregrado (nodografo *grafo, char n1) 
{ 
	nodografo *i1; 
	nodografo *p; 
	int c = 0; 
	i1 = buscar (grafo, n1); 
	p = grafo; 
	
	while (p != NULL) 
	{ 
		nodoarco *q = p->primarc; 
		while (q != NULL && q->llegada != i1) 
			q = q -> sig; 
		if (q != NULL) 
			c++; 
		p = p->next; 
	}
	return c; 
} 

void cargar (nodografo *&grafo) 
{ 
	char n1, n2; 
	cout<<"\nNodo de partida de un arco (con 0 termina): "; 
	cin >> n1; 
	
	while ( n1 != '0' ) 
	{ 
		cout << "Ingrese el nodo de llegada: "; 
		cin >> n2; 
		unir (grafo, n1, n2); 
		cout << "\nOtro nodo de partida (con 0 termina): "; 
		cin >> n1; 
	} 
} 

void mostrar (nodografo *grafo) 
{ 
	int col, fil; 
	nodografo *p = grafo; 
	cout << "Conjunto de nodos: { "; 
	
	while (p != NULL) 
	{ 
		if (p->next != NULL) 
			cout << p->info << "; "; 
		else 
			cout << p->info << " }\n\n"; 
		p = p->next; 
	} 
	p = grafo; 
	cout << "Conjunto de arcos: { "; 
	while (p != NULL) 
	{
		nodoarco *q = p->primarc; 
		while (q != NULL) 
		{ 
			cout<<"("<<p->info<<" , "<<q->llegada->info<<") ; "; 
			q = q->sig; 
		} 
		p = p->next; 
	} 
	//col = wherex(); // esta instrucción y las dos que siguen, 
	//fil = wherey(); // vuelven atrás el cursor y borran 
	//gotoxy(col-2,fil); // el último “;” de la pantalla... 
	cout << "}"; 
} 

nodografo *buscar (nodografo *grafo, char n1) 
{ 
	nodografo *i1 = grafo; 
	while (i1 != NULL && n1 != i1->info) 
		i1 = i1->next; 
	return i1; 
} 

void insertar (nodografo *&grafo, char n1) 
{ 
	nodografo *p = new nodografo; 
	if (p != NULL) 
	{ 
		p->info = n1; 
		p->primarc = NULL; 
		p->next = grafo; 
		grafo = p; 
	} 
	else 
	{ 
		//clrscr(); 
		cout << "Error: Falta memoria..."; 
		getch(); 
		exit (1); 
	}
}
