// ingrese un N numero de elementos en el array, por cada elemento ,
// controlar que no se divida por cero, si no se divide poner un mensaje,  "no se divide por 100"

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int n;
    double z;
    int *lista = new int[n]; // array dinamico va con *

    cout << "Ingrese el numero de elementos del array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error. Tamano debe ser mayor a 0" << endl;
        return 1; // para cerrar el programa - finalizar
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Valor [" << i << "]:";
        cin >> lista[i];
    }
    cout << "\n Divisor de 100 por cada valor\n ";
    for (int i = 0; i < n; i++)
    {
        try
        {

            if (lista[i] == 0)
            {
                throw runtime_error "Division para 0";
            }
            z = 100 / lista[i];
            cout << "100/" << lista[i] << " = " << z << endl;
        }
        catch (const char *msg)
        {
            cout << msg 
            //cerr << msg << endl;  catch error (cerr) 
        }
    }
    delete[] lista; // liberar memoria  
    return 0;
}