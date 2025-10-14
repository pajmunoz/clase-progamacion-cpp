#include <iostream>
using namespace std;

//partes de la funcion: nombre, parametro , tipo de retorno, instrucciones

int max(int a, int b){ //funcion sin tipo de retorno
    if(a>b){
        return a;
    } else {
        return b;
    }
}


int main(){
    int a,b;
cout << "Ingrese dos numeros enteros: ";
cin >> a >> b;
int random= rand() % 10 +1; //numero aleatorio entre 1 y 10
cout << "El numero aleatorio es: " << random << endl;
int potencia= pow(a,b);
cout << "El resultado es: " << potencia << endl;
int z= max(a,b);
cout << "El valor mayor es: " << z << endl;
    return 0;
}