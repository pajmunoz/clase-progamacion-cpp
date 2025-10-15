#include <iostream>
#include <string>
using namespace std;

bool esDivisibleParaTres(int numero)
{
    return (numero % 3 == 0) ? 1 : 0;
}

bool esDivisibleParaCinco(int numero)
{
    return (numero % 5 == 0) ? 1 : 0;
}

int main()
{
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero >= 100)
    {

        if (esDivisibleParaTres(numero) && esDivisibleParaCinco(numero))
        {
            cout << numero << " es divisible para 3 y 5." << endl;
        }
        else if (esDivisibleParaTres(numero))
        {
            cout << numero << " es divisible para 3." << endl;
        }
        else if (esDivisibleParaCinco(numero))
        {
            cout << numero << " es divisible para 5." << endl;
        }
        else
        {
            cout << numero << " no es divisible para 3 ni para 5." << endl;
        }
    }
    else
    {
        cout << "El numero debe tener al menos 3 digitos" << endl;
        return 1;
    }
    return 0;
}