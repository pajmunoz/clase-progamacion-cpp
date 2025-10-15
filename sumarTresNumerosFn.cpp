#include <iostream>
using namespace std;

int sumarTresNumeros(int a, int b, int c){
    return a+b+c;
}

int main(){
    int a,b,c;
    cout << "Ingrese tres numeros enteros: ";
    cin >> a >> b >> c;
    int resultado= sumarTresNumeros(a,b,c);
    cout << "La suma de los tres numeros es: " << resultado << endl;
    return 0;
}