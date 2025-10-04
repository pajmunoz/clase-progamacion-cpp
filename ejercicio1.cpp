/*Solicitar el ingreso de un número entero. Si el número leído es par, imprimir la leyenda 'El número es
PAR'. En caso contrario, deberá mostrar el texto 'El número es IMPAR'. Un número es par si el resto de
dividirlo por 2 es 0.*/

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "El numero es par." << endl;
    }
    else
    {
        cout << "El  numero es impar." << endl;
    }
    return 0;
}