#include <iostream>
#include <cstdlib>

using namespace std;
class nodo
{
public:
    int info;
    nodo *sig;
};
class cola
{
public:
    cola(void);
    void encolar(int);
    int desencolar(void);
    bool colavacia(void);
    void mostrarcola(void);
    void vaciarcola(void);
    void encontrarUltimoPrimero(void);
    void ColaParesSinCero(cola *c);
    void ColasImparesSintres(cola *c);
    void ColaParesCeroImparesTres(cola *c);
    void ColaPositivosSinCincos(cola *c);
    void ColaNegativosSinCuatro(cola *c);
    void ColaCeroCincosCuatro(cola *c);
    void mayorMenor(cola *c);
    // OPCION 1
    // 1. generar una nueva cola en la que se inserten los valores de la cola original que sean pares excepto los terminados en '0'
    // 2. generar una nueva cola en la que se inserten los valores de la cola original que sean impares excepto los multiplos '3'
    // 3. generar una nueva cola en la que se inserten los valores de la cola original que sean cero '0' y los valores que no se insertaron en la cola del literal '1'
    // OPCION 2
    // dado un programa que permita ingresar n valores en una cola de numeros enteros, escriba las funciones necesarias para:
    // 1. generar una nueva cola en la que se inserten los valores de la cola original que sean posisitivos excepto los terminados en '5'
    // 2. generar una nueva cola en la que se inserten los valores de la cola original que sean negativos excepto los multiplos '4'
    // 3. generar una nueva cola en la que se inserten los valores de la cola original que sean cero '0' y los valores que no se insertaron en las colas anteriores
private:
    nodo *delante; // puntero al frente de la cola
    nodo *atras;   // puntero al final de la cola
};
cola::cola(void)
{
    delante = NULL;//inicializamos los punterios
    atras = NULL;
}
bool cola::colavacia(void)
{
    if (delante == NULL)
        return true;
    else
        return false;
}
void cola::encolar(int x)
{
    nodo *p_aux;
    p_aux = new nodo();
    p_aux->info = x;
    p_aux->sig = NULL;
    if (colavacia())
    {
        delante = p_aux;
    }
    else
    {
        atras->sig = p_aux;
    }
    atras = p_aux;
}
int cola::desencolar(void)
{
    int n;
    nodo *p_aux;
    p_aux = delante;
    n = p_aux->info;
    delante = (delante)->sig;
    delete (p_aux);
    return n;
}
void cola::mostrarcola(void)
{
    nodo *p_aux;
    p_aux = delante;
    while (p_aux != NULL)
    {
        cout <<"\n\n\t"<< p_aux->info;
        p_aux = p_aux->sig;
    }
}
void cola::vaciarcola(void)
{
    nodo *p_aux, *r_aux;
    p_aux = delante;
    while (p_aux != NULL)
    {
        r_aux = p_aux;
        p_aux = p_aux->sig;
        delete (r_aux);
    }
    delante = NULL;
    atras = NULL;
}
void cola::encontrarUltimoPrimero(void)
{
    int n = desencolar();
    encolar(n);
}
/// @brief 
/// @param c 
void cola::ColaParesSinCero(cola *c)
{
    nodo *p;
    p = delante;
    while (p != NULL)
    {
        if ((p->info % 2 == 0) && (p->info % 10 != 0))
        {
            c->encolar(p->info);
        }
        p = p->sig;
    }
}
void cola::ColasImparesSintres(cola *c)
{
    nodo *p;
    p = delante;
    while (p != NULL)
    {
        if ((p->info % 2 == 1) && (p->info % 3 != 0))
        {
            c->encolar(p->info);
        }
        p = p->sig;
    }
}
void cola::ColaParesCeroImparesTres(cola *c)
{
    nodo *p;
    p = delante;
    while (p != NULL)
    {
        if ((p->info % 10 == 0) || ((p->info % 3 == 0) && (p->info % 2 == 1)))
        {
            c->encolar(p->info);
        }
        p = p->sig;
    }
}
void cola::ColaPositivosSinCincos(cola *c)
{
    nodo *p;
    p = delante;
    while (p != NULL)
    {
        if ((p->info > 0) && ((p->info % 5 != 0) && (p->info % 10 == 0)))
        {
            c->encolar(p->info);
        }
        p = p->sig;
    }
}
void cola::ColaNegativosSinCuatro(cola *c)
{
    nodo *p;
    p = delante;
    while (p != NULL)
    {
        if ((p->info < 0) && (p->info % 4 != 0))
        {
            c->encolar(p->info);
        }
        p = p->sig;
    }
}
void cola::ColaCeroCincosCuatro(cola *c)
{
    nodo *p;
    p = delante;
    while (p != NULL)
    {
        if ((p->info == 0) || (p->info % 5 == 0) || (p->info % 10 != 0) || (p ->info % 4 == 0))
        {
            c->encolar(p->info);
        }
        p = p->sig;
    }
}
void cola::mayorMenor(cola *c)
{
    nodo *p;
    p = delante;
    int mayor = 0;
    int menor = 0;
    while (p != NULL)
    {
        if (p->info > mayor)
        {
            mayor = p->info;
        }
        if (p->info < menor)
        {
            menor = p->info;
        }
        p = p->sig;
    }
    cout << "\n\n\tEl numero mayor es: " << mayor;
    cout << "\n\n\tEl numero menor es: " << menor;
}
int menu(void){
    int opcion;
    cout<<"\n\n\t -------------------------------------------\n";
    cout<<"\t|        IMPLEMENTACION DE UNA COLA         |\n";
    cout<<"\t|-------------------------------------------|\n";
    cout<<" \t|                                           |"<<endl;
    cout<<" \t|  1. ENCOLAR                               |"<<endl;
    cout<<" \t|  2. DESENCOLAR                            |"<<endl;
    cout<<" \t|  3. MOSTRAR COLA                          |"<<endl;
    cout<<" \t|  4. VACIAR COLA                           |"<<endl;
    cout<<" \t|  5. ENVIAR PRIMERO A ULTIMO               |"<<endl;
    cout<<" \t|  6. COLA DE PARES EXCEPTO TERMINADOS EN 0 |"<<endl;
    cout<<" \t|  7. COLA DE IMPARES EXCEPTO MULTIPLOS DE 3|"<<endl;
    cout<<" \t|  8. COLA DE VALORES RESTANTES             |"<<endl;
    cout<<" \t|  9. COLA DE PAR TERM EN 0 E IMPAR MULT 3  |"<<endl;
    cout<<" \t|  10. COLA DE MAYOR MENOS                  |"<<endl;
    cout<<" \t|  0. SALIR                                 |"<<endl;
    cout<<" \t|                                           |"<<endl;
    cout<<"\t -------------------------------------------\n";
    cout<<"\t Ingrese opcion: ";
    cin>>opcion;
    return opcion;
}
int main(void){
    cola Cola, *capres, *cimpares, *cres;
    capres = new cola();
    cimpares = new cola();
    cres = new cola();
    int opc, x;
    do
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            cout << "\n\n\tIngrese un numero a encolar: ";
            cin >> x;
            Cola.encolar(x);
            cout << "\n\n\tNumero encolado";
            break;
        case 2:
            if (Cola.colavacia() == true)
            {
                cout << "\n\n\tCola vacia";
            }
            else
            {
                x = Cola.desencolar();
                cout << "\n\n\tNumero desencolado: " << x;
            }            
            break;
        case 3:
            cout << "\n\n\tMostrando cola";
            if (Cola.colavacia() != true)
            {
                cout << "\n\n\tCola vacia";
            }
            else
            {
                Cola.mostrarcola();
            }
            break;
        case 4:
            cout << "\n\n\tcola eliminada";
            Cola.vaciarcola();
            break;  
        case 5:
            cout << "\n\n\tEnviando primero a ultimo";
            Cola.encontrarUltimoPrimero();
            break;
        case 6:
            capres -> vaciarcola();
            Cola.ColaParesSinCero(capres);
            cout << "\n\n\tCola de pares excepto terminados en 0";
            capres->mostrarcola();
            break;
        case 7:
            cimpares -> vaciarcola();
            Cola.ColasImparesSintres(cimpares);
            cout << "\n\n\tCola de impares excepto multiplos de 3";
            cimpares->mostrarcola();
            break;
        case 8:
            cres -> vaciarcola();
            Cola.ColaParesCeroImparesTres(cres);
            Cola.ColaPositivosSinCincos(cres);
            Cola.ColaNegativosSinCuatro(cres);
            Cola.ColaCeroCincosCuatro(cres);
            cout << "\n\n\tCola de valores restantes";
            cres->mostrarcola();
            break;
        case 9:
            cres -> vaciarcola();
            Cola.ColaParesCeroImparesTres(cres);
            cout << "\n\n\tCola de pares terminados en 0 e impares multiplos de 3";
            cres->mostrarcola();
            break;
        case 10:
            cout << "\n\n\tCola de mayor menos";
            Cola.mayorMenor(cres);
            break;
            default:
            cout << "\n\n\tOpcion no valida";
        }
        cout << "\n\n";
        system("pause");
        system("cls");
    } while (opc != 0);
    return 0;    
}
