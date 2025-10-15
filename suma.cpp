#include <iostream>
#include <string>

using namespace std;

// Funciones matemáticas
float suma(float num1, float num2) {
    return num1 + num2;
}

float resta(float num1, float num2) {
    return num1 - num2;
}

void oper(float (*task)(float, float )) {
    float a, b;

    cout << "Ingrese un numero: ";
    cin >> a;

    cout << "Ingrese otro numero: ";
    cin >> b;

    float resultado = task(a, b);

    cout << "Su resultado es: " << resultado << endl;
}

int main() {
    int operacion;

    cout << "Bienvenido a calculadora" << endl;
    cout << "Que quieres hacer?" << endl;
    cout << "SUMA (0)" << endl;
    cout << "RESTA (1)" << endl;
    cin >> operacion;

    if (operacion == 0) {
    	cout << "--SUMA--" << endl;
        oper(suma);
    } else if (operacion == 1) {
    	cout << "--RESTA--" << endl;
        oper(resta);
    } else {
        cout << "Opcion inválida." << endl;
    }

    return 0;
}
