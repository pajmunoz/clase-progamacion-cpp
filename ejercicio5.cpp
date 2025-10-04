/*Modificar el programa anterior para que, si se ingresa un número negativo, no se procese, pero continúe
la ejecución. Finalmente, mostrar por separado la suma de los números positivos pares e impares
ingresados.*/

#include <iostream>
using namespace std;

int main()
{

    int numbers;
    int numInput;
    int sumaPar = 0;
    int sumaImpar = 0;

    cout << "ingrese números para procesar: ";
    cin >> numbers;

    for (int i = 0; i < numbers; i++)
    {
        cout << "ingrese los numero " << i + 1 << "; ";
        cin >> numInput;
        if (numInput > 0)
        {
            for (int i = numInput; i; i % 2 == 0)
            {
                sumaPar += i;
            }
            for (int i = numInput; i; i++)
            {
                sumaImpar += i;
            }
        }
    }

    cout << "la suma de los números pares es: " << sumaPar << endl;
    cout << "la suma de los números impares es: " << sumaImpar << endl;

    return 0;
}
