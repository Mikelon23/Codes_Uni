/*Ingresar dos numeros enteros y un operador (+, -, x, /) prueba */
#include <iostream>
using namespace std;
int main()
{
    // definir variables
    int a, b;
    char c;
    // ingreso de datos
    cout << "Programa operaciones basicas\n";
    cout << "Ingrese dos numeros (separados por enter): ";
    cin >> a >> b;

    cout << " +) Suma\n";
    cout << " -) Resta\n";
    cout << " x) Multiplicacion\n";
    cout << " /) Division\n";
    cout << " .) Salir\n";
    cout << "Escriba la operacion a realizar\n";
    cin >> c;
    if (c != '.')
    {

        do
        {

            // proceso y salida de resultados

            switch (c)
            {
            case ('+'):
            {
                cout << "La suma de los numeros ingresados es " << a + b << endl;
                break;
            }
            case ('-'):
            {
                cout << "Deseas restar el primer numero menos el segundo (s o n): ";
                cin >> c;
                if (c == 's')
                    cout << "La resta de los numeros ingresados es " << a - b << endl;
                else
                    cout << "La resta de los numeros ingresados es " << b - a << endl;
                break;
            }
            case ('x'):
            {
                cout << "La multiplicacion de los numeros ingresados es " << a * b << endl;
                break;
            }
            case ('/'):
            {
                float a1 = a, b1 = b;
                cout << "Deseas dividir el primer numero para el segundo o al reves (s o n): ";
                cin >> c;
                if (c == 's')
                {

                    if (b1 == 0)
                        cout << "division por cero no definida\n";
                    else
                        cout << "La division de los numeros ingresados es " << a1 / b1 << endl;
                }
                if (c == 'n')
                {

                    if (a1 == 0)
                        cout << "division por cero no definida\n";

                    else

                        cout << "La division de los numeros ingresados es " << b1 / a1 << endl;
                }

                break;
            }
            }
            cout << "Programa operaciones basicas\n";
            cout << " +) Suma\n";
            cout << " -) Resta\n";
            cout << " x) Multiplicacion\n";
            cout << " /) Division\n";
            cout << " .) Salir\n";
            cout << "Escriba la operacion a realizar\n";
            cin >> c;
        } while (c != '.');
    }
    else
    {
        system("exit");
    }
    system("pause");
    return 0;
}
