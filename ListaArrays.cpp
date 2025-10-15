// Actividad 3
// 1. Crear una lista con 10 elementos de tipo entero
// 2.-Contar los elementos pares e impares
// 3.-Imprimir la cantidad de elementos pares e impares
//-----------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int lista[10] = {1,2,3,4,5,6,14,8,12,10};
    int par = 0, impar = 0;
    for (int i = 0; i < 10; i++)
    {
        if (lista[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }   
    }
        cout << "Numeros pares: " << par << endl;
        cout << "Numeros impares: " << impar << endl;
    return 0;
}