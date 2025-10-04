/*Solicitar el ingreso de un número entero. Si el número ingresado es impar, se deberán imprimir los
números correlativos desde el ingresado hasta el doble de este. Si el número ingresado es par, se deberán
mostrar los números pares desde el ingresado hasta el doble del ingresado. Por ejemplo, si se ingresa un
8, se mostrará 8, 10, 12, 14, 16. Si se ingresa un 5, se mostrarán 5, 6, 7, 8, 9, 10.*/

#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Ingrese un numero: ";
    cin >> number;
    if (number % 2 == 0){
        //par
        for (int i = number; i <= number * 2; i += 2){
            cout << i << " ";
        } 
    }else{
        //impar
        for (int i = number; i <= number * 2; i++){
                cout << i << " ";
            }
    }
    return 0;
}