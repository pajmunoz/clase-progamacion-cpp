#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number;
    do
    {
        cout << "ingrese un numero";
        cin >> number;
    } while (number.length() == 0);
}