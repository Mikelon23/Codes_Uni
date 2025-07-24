#include <iostream> 
#include <conio.h> 
#include <stdlib.h> 
#include <windows.h>

using namespace std;

struct nodo 
{ 
	int info; 
	nodo *izq, *der; 
};

void Insertar(nodo *&raiz, int x); 
nodo *Buscar(nodo *raiz, int x); 
void Borrar(nodo *&p, int x); 
void doshijos(nodo *&d, nodo *&q); 
void VerPreorden(nodo *p); 
void VerEntreorden(nodo *p); 
void VerPostorden(nodo *p); 
void Mostrar(nodo *p, int colpadre, int col, int fil); 
void Mostrar(nodo *p); 
void rayitas(int cuantas);

int main() 
{
	nodo *raiz = NULL; 
	nodo *p; 
	int op, x; 
	do 
	{ 
		system("cls");
		cout << "Arboles de Busqueda - Opciones"; 
		cout << "\n1. Cargar un codigo en el arbol"; 
		cout << "\n2. Buscar un elemento"; 
		cout << "\n3. Borrar una clave"; 
		cout << "\n4. Mostrar en preorden"; 
		cout << "\n5. Mostrar en Entreorden"; 
		cout << "\n6. Mostrar en PostOrden"; 
		cout << "\n7. Mostrar en forma natural..."; 
		cout << "\n\n8. Salir"; 
		cout << "\n\nIngrese opcion: "; 
		cin >> op; 
		system("cls"); 
		switch(op) 
		{
			case 1: 
				cout << "Ingrese clave a insertar (-1 termina): "; 
				cin >> x; 
				while (x != -1) 
				{ 
					Insertar(raiz, x); 
					cout << "Otra clave (con -1 termina): "; 
					cin >> x; 
				} 
				break; 
			case 2: 
				cout << "Clave a buscar (con -1 termina): "; 
				cin >> x; 
				while (x != -1) 
				{ 
					if (Buscar(raiz, x) != NULL) 
					{ 
						cout <<"Existe..."; 
					} 
					else 
					{ 
						cout <<"No existe..."; 
					} 
					cout << "\nOtra clave (con -1 termina): "; 
					cin >> x; 
				} 
				break;
			case 3: 
				cout<< "Clave a borrar (con -1 termina): "; 
				cin >> x; 
				while (x != -1) 
				{ 
					Borrar(raiz, x); 
					cout << "Otra clave (con -1 termina): "; 
					cin >> x; 
				} 
				break; 
			case 4: 
				cout << "Contenido del Arbol, en Preorden:\n"; 
				VerPreorden(raiz); 
				getch(); 
				break; 
			case 5: 
				cout << "Contenido del Arbol, en Entreorden:\n"; 
				VerEntreorden(raiz); 
				getch(); 
				break; 
			case 6: 
				cout << "Contenido del Arbol, en Postorden:\n"; 
				VerPostorden(raiz); 
				getch(); 
				break; 
			case 7: 
				cout << "Contenido del Arbol, en forma natural:\n"; 
				Mostrar(raiz); 
				getch(); 
				break;
			case 8: ; 
		}
	} while (op != 8);
}

void Insertar(nodo *&raiz, int x) 
{ 
	nodo *p = raiz, *q = NULL; 
	while (p!=NULL && x != p->info) 
	{ 
		q = p;
		if (x > p->info) 
			p = p->der; 
		else 
			p = p->izq; 
	} 
	if (p == NULL) 
	{ // no existe... la inserta. 
		nodo *nuevo = new nodo; 
		if (nuevo != NULL) 
		{
			nuevo -> info = x; 
			nuevo -> izq = nuevo -> der = NULL; 
			if (q == NULL) 
				raiz = nuevo; 
			else 
			{ 
				if (x > q->info) 
					q->der = nuevo; 
				else 
					q->izq = nuevo; 
			} 
		} 
		else 
		{ 
			cout << "Error: falta memoria..."; 
			getch(); 
			exit (1); 
		} 
	} 
} 

nodo *Buscar(nodo *raiz, int x)
{ 
	nodo *p = raiz; 
	while (p != NULL && x != p->info) 
	{ 
		if (x < p->info) 
			p = p->izq; 
		else 
			p = p->der; 
	} 
	return p; 
} 

void VerPreorden(nodo *p)
{
	if (p!=NULL) 
	{
		cout << p->info << " - "; 
		VerPreorden(p->izq); 
		VerPreorden(p->der); 
	} 
} 

void VerEntreorden(nodo *p)
{
	if (p!=NULL) 
	{
		VerEntreorden(p->izq); 
		cout << p->info << " - "; 
		VerEntreorden(p->der); 
	}
}

void VerPostorden(nodo *p) 
{ 
	if (p!=NULL) 
	{ 
		VerPostorden(p->izq);
		VerPostorden(p->der); 
		cout << p->info << " - "; 
	} 
}

void Borrar(nodo *&p, int x) 
{ 
	if (p == NULL) 
	{ 
		cout << "La clave no existe..."; 
	} 
	else 
	{ 
		if (x < p->info) 
			Borrar (p->izq, x); 
		else if (x > p->info) 
			Borrar (p->der, x); 
			else 
			{ // nodo encontrado... borrarlo 
				nodo *q = p; 
				if (q->der == NULL) 
					p = q->izq; 
				else 
				{ 
					if (q->izq == NULL) 
						p = q->der; 
					else 
					{ // tiene dos hijos!!! 
						doshijos(q->izq, q); 
					} 
					delete q; 
				} 
			} 
	} 
}

void doshijos(nodo *&d, nodo *&q) 
{ 
	if (d->der != NULL) 
	{ 
		doshijos(d->der, q); 
	} 
	else 
	{ 
		q->info = d->info; 
		q = d; 
		d = d->izq; 
	} 
}

void Mostrar(nodo *p, int colpadre, int col, int fil)
{ 
	if (p != NULL) 
	{ 
		int delta = abs(col - colpadre) / 2; 
		int ci = col - delta; //columna del hijo izquierdo... 
		int cd = col + delta; //columna del hijo derecho..... 
		if (p->izq != NULL) 
		{ 
			//gotoxy (ci, fil); 
			//cout << "┌"; rayitas(delta - 1); 
		} 
		else 
		{ 
			//gotoxy (col, fil); 
		} 
		cout << p->info; 
		if (p->der != NULL) 
		{ 
			//rayitas (delta - 1); 
			//cout << "┐"; 
		} 
		Mostrar (p->izq, col, ci, fil+1); 
		Mostrar (p->der, col, cd, fil+1);
	}
}

void Mostrar(nodo *p)
{ 
	if (p != NULL) 
	{  
		cout << p->info;  
		Mostrar (p->izq); 
		Mostrar (p->der);
	}
}

void rayitas (int cuantas)
{
	for (int i = 1; i <= cuantas; i++)
		cout<<"-";
}

