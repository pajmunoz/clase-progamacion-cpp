/*escribir un programa, que lea una lista de números enteros ingresadas por el usuario, 
verificando si cada número es par o impar utilizando condicionales, 
posteriormente calcular e imprimir el promedio de los números impares de la lista*/
#include <iostream>
using namespace std;

bool esPar(int numero) {
    return numero % 2 == 0;
}

int calcularPromedioImpares(int suma, int contador) {
    if (contador == 0) {
        return 0; 
    }
    return suma / contador;
}
int main(){
    int cantidad = 5;
    int lista[cantidad];
    int sumaImpares = 0;
    int contadorImpares = 0;
    cout << "Ingrese 5 numeros enteros:" << endl;
    for (int i = 0; i < cantidad; i++) {
        cin >> lista[i];
        if (esPar(lista[i])) {
            cout << lista[i] << " es un numero par.\n" << endl;
        } else {
            cout << lista[i] << " es un numero impar.\n" << endl;
            sumaImpares += lista[i];
            contadorImpares++;
        }
    }
    int promedioImpares = calcularPromedioImpares(sumaImpares, contadorImpares);
    if (contadorImpares > 0) {
        cout << "El promedio de los numeros impares es: " << promedioImpares << endl;
    } else {
        cout << "No se ingresaron numeros impares." << endl;
    }
    return 0;
}

