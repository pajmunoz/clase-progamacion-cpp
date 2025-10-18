/*Sumar los elementos de un arreglo*/
#include <iostream>
using namespace std;

int sumarElementosArray(int arr[], int tamaño) {
    int suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += arr[i];
    }
    return suma;
}

int main() {
    const int tamaño = 5;
    int arr[tamaño];

    cout << "Ingrese " << tamaño << " números:" << endl;
    for (int i = 0; i < tamaño; i++) {
        cin >> arr[i];
    }

    int suma = sumarElementosArray(arr, tamaño);
    cout << "La suma de los elementos del arreglo es: " << suma << endl;

    return 0;
}