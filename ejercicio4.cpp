/* Escribir un programa que solicite ingresar una cantidad de números enteros a procesar. Luego, permitir
al usuario ir ingresando uno a uno la cantidad pedida de números. Una vez finalizado el ingreso, se deberá
mostrar la suma total de los números ingresados.*/

#include <iostream>
using namespace std;

int main(){

    int numbers;
    int numInput;
    int suma = 0;

    cout << "ingrese números para procesar: ";
    cin >> numbers;

    for(int i = 0; i < numbers; i++){
        cout << "ingrese los numero "<< i + 1 << "; ";
        cin >> numInput;
        suma += numInput;
    }
    cout << "la suma de los números es: " << suma << endl;

    return 0;
}
