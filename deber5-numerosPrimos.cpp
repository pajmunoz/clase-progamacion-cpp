/*Desarrollar un programa, en el cual se cree una
función que reciba un arreglo de 10 números enteros y
determinar si es primo o no. En el programa principal, pedir
al usuario ingresar los números y mostrar el resultado en dos
listas diferentes*/

#include <iostream>

using namespace std;

int esPrimo(int numero)
{
    if (numero <= 1)
        return 0;
    for (int i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            return 0; 
        }
    }
    return 1; 
}

int main()
{   
    int numeros[10];
    int primos[10];
    int noPrimos[10];
    int contadorPrimos = 0;
    int contadorNoPrimos = 0;

    cout << "Ingrese 10 numeros enteros: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> numeros[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (esPrimo(numeros[i]) == 1)
        {
            primos[contadorPrimos] = numeros[i];
            contadorPrimos++;
        }
        else
        {
            noPrimos[contadorNoPrimos] = numeros[i];
            contadorNoPrimos++;
        }
    }

    cout << "Numeros primos: ";
    for (int i = 0; i < contadorPrimos; i++)
    {
        cout << primos[i] << " ";
    }
    cout << endl;
    cout << "Numeros no primos: ";
    for (int i = 0; i < contadorNoPrimos; i++)
    {
        cout << noPrimos[i] << " ";
    }
    cout << endl;
    
    return 0;
}