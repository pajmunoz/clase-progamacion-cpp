#include <iostream>

using namespace std;

int main()
{
    string texto;
    string sinModificar;
    cout << "Ingrese un texto: ";
    cin >> texto;
    sinModificar = texto;
    for (int i = 0; i < texto.length(); i++)
    {
        if (texto[i] == 'e')
        {
            texto[i] = 'X';
        }
    }
    cout <<"\n";
    cout << "Texto sin modificar: \n" << sinModificar << endl;
    cout <<"\n";
    cout << "Texto modificado: \n" << texto << endl;
    return 0;
}