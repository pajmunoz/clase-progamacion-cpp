
#include <iostream>
// Ingresar 3 numeros, hacer promedio, chequear cual es el mayor de los 3, incluyendo si hay iguales

using namespace std;

int main() {
    double n1, n2, n3, promedio;

    cout << "Ingrese el primer numero: " << endl;
    cin >> n1;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> n2;

    cout << "Ingrese el tercer numero: " << endl;
    cin >> n3;

    promedio = (n1 + n2 + n3) / 3;

    cout << "El promedio es: " << promedio << endl;

    // Verificar si todos son iguales
    if (n1 == n2) {
        if (n2 == n3) {
            cout << "Todos los numeros son iguales: " << n1 << endl;
        } 
    } else if (n1 > n2) {
        if (n1 > n3) {
            cout << "El numero mayor es: " << n1 << endl;
        } else {
            if (n3 > n1) {
                cout << "El numero mayor es: " << n3 << endl;
            } else {
                cout << "El numero mayor es: " << n1 << " y " << n3 << " (iguales)" << endl;
            }
        }
    } else {
        if (n2 > n3) {
            cout << "El numero mayor es: " << n2 << endl;
        } else {
            if (n3 > n2) {
                cout << "El numero mayor es: " << n3 << endl;
            } else {
                cout << "El numero mayor es: " << n2 << " y " << n3 << " (iguales)" << endl;
            }
        }
    }

    return 0;
}
