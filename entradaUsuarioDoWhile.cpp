#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Ingrese un numero entero positivo: \n";
        cin >> n;

        if (n <= 0) {
            cout << "Entrada no valida. Intente nuevamente. \n";
        }

    } while (n <= 0);

    cout << "!Numero valido ingresado! \n";

    return 0;
}
