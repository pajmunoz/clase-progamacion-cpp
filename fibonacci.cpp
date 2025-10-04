//Desarrollar un programa que genere los primeros n numeros de la secuencia Fibonacci, donde n es el numero entero que ingrese el usuario por consola
#include <iostream>
using namespace std;

int main() {
    int n,a = 0, b = 1, c;

    cout << "Ingrese numero entero : ";
    cin >> n;
    
    cout << "____fibonacci____"<<endl;

    for (int i = 0; i < n; ++i) {
        cout << a << ",";
        c = a + b;
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}
