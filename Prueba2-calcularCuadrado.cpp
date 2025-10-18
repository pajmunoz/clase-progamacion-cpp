/*Calcular el cuadrado de un número usando una función*/
#include <iostream>
using namespace std;
int calcularCuadrado(int numero) {
    return numero * numero;
}
int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    int cuadrado = calcularCuadrado(numero);
    cout << "El cuadrado de " << numero << " es " << cuadrado << endl;
    return 0;
}