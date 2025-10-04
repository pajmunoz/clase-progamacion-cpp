// area de circulo
// Area = PI * r2
#include <iostream>
using namespace std;

const float PI = 3.1416;

float calcularArea(int radio) {
    return PI * (radio * 2);
}

int main() {
    float radio;

    cout << "Ingrese RADIO del circulo: " << endl;
    cin >> radio;

    float area = calcularArea(radio);

    cout << "El AREA del circulo es: " << area << endl;

    return 0;
}