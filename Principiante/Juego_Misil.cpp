#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib> // para system("CLS")

using namespace std;

int main() {
    cout << "Presione ENTER para iniciar el lanzamiento!" << endl;
    cin.get(); // Espera tecla

    string cohete[9] = {
        "   /|\\   ",
        "   |B|   ",
        "   |O|   ",
        "   |M|   ",
        "   |B|   ",
        "  //|\\\\  ",
        " ******* ",
        "* * * * *",
        " * * * * "
    };

    // Primera parte: mostrar parte superior del cohete con cuenta regresiva
    for (int i = 1; i <= 11; i++) {
        system("CLS");
        for (int j = 1; j <= 15; j++) cout << endl;
        for (int j = 0; j <= 5; j++) cout << cohete[j] << endl;
        cout << endl;
        cout << "Lanzamiento en " << (11 - i) << endl;
        this_thread::sleep_for(1s);
    }

    // Segunda parte: cohete completo moviéndose hacia arriba
    for (int i = 1; i <= 15; i++) {
        system("CLS");
        for (int j = i; j <= 15; j++) cout << endl;
        for (int j = 0; j <= 7; j++) cout << cohete[j] << endl;
        if (i > 1) cout << " * * * * " << endl;
        this_thread::sleep_for(chrono::milliseconds(1000 / i));
    }

    // Tercera parte: explosión
    int estado[6] = {3, 2, 1, 2, 3, 4};
    for (int i = 1; i <= 10; i++) {
        system("CLS");
        for (int j = 0; j <= 5; j++) {
            estado[j]--;
            switch (estado[j]) {
                case 0:
                    cohete[j] = "    +    "; break;
                case -1: case -5:
                    cohete[j] = "   +X+   "; break;
                case -2: case -4:
                    cohete[j] = "  +XXX+  "; break;
                case -3:
                    cohete[j] = " +XXXXX+ "; break;
                case -6:
                    cohete[j] = "         "; break;
            }
            cout << cohete[j] << endl;
        }
        this_thread::sleep_for(chrono::milliseconds(200));
    }

    return 0;
}
