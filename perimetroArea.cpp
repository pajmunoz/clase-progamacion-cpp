#include <iostream>

using namespace std;

int main() {
    double lado, base, altura;

    cout << "Ingrese el lado: " << endl;
    cin >> lado;

    cout << "Ingrese la base: " << endl;
    cin >> base;

    cout << "Ingrese la altura: " << endl;
    cin >> altura;

    double perimetro = 3 * lado;
    
    double area = (base * altura) / 2;

    cout << "El perimetro es: " << perimetro << endl;
    cout << "El area del triangulo: " << area << endl;

    return 0;
}