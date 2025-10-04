//Desarrollar un programa, donde el usuario ingrese un rango de numeros enteros e imprima todos los numeros perfectos que existe en el rango indicado.
#include <iostream>
using namespace std;

//  es perfecto?
bool esPerfecto(int num) {
    int sum = 0;
    for (int i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int n1, n2,contador = 0;

    cout << "Ingrese el numero inicial del rango: \n";
    cin >> n1;

    cout << "Ingrese el numero final del rango (mayor que el primero): \n";
    cin >> n2;

    while (n2 <= n1) {
        cout << "Error: el segundo numero debe ser mayor que el primero. Intente nuevamente: \n";
        cin >> n2;
    }

    cout << "\nNumeros perfectos en el rango [" << n1 << ", " << n2 << "]:\n";

    for (int i = n1; i <= n2; ++i) {
        if (esPerfecto(i)) {
            cout << i << " ";
            contador++;
        }
    }

    if (contador == 0) {
        cout << "No se encontraron numeros perfectos en este rango. \n";
    }

    return 0;
}