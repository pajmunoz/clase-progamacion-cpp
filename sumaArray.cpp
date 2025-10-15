#include <iostream>
using namespace std;

int main (){
    int suma = 0;
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++){
        cout << "Numero " << i+1 << ": " << a[i] << endl;
        suma += a[i];
    }
    cout << "La suma es: " << suma << endl;
    return 0;       
}