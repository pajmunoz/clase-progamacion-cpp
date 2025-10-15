/*Programa para verificar palíndromos
Un palíndromo es una palabra o frase que se lee igual de izquierda a derecha
que de derecha a izquierda. Por ejemplo: ana, oso, reconocer*/

#include <iostream>
#include <string>
using namespace std;

bool esPalindromo(const string texto) {
    
    int longitud = texto.length();
    for(int posicion = 0; posicion < longitud / 2; posicion++) {
        if(texto[posicion] != texto[longitud - 1 - posicion]) {
            return false;  
        }
    }
    return true; 
}

int main() {
    string palabra;

    cout << "=== Verificador de Palíndromos ===" << endl;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    if (esPalindromo(palabra)) {
        cout << "¡'" << palabra << "' es un palíndromo!" << endl;
        cout << "Se lee igual e ambos sentidos" << endl;
    } else {
        cout << "'" << palabra << "' no es un palíndromo." << endl;
        cout << "No se lee igual al reves" << endl;
    }

    return 0;
}