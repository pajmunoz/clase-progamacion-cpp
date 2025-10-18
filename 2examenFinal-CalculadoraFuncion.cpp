/*Crear una función que reciba un número entero y genere su tabla de multiplicar del 1 al 10.*/
#include <iostream>
using namespace std;

int generarTablaMultiplicar(int numero)
{
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << numero << " X " << i << " = " << numero * i << endl;
    }
    return 0;
}

int main()
{
    int numero;
    cout << "Ingrese un número entero para generar su tabla de multiplicar: ";
    cin >> numero;
    generarTablaMultiplicar(numero);
    return 0;
}
