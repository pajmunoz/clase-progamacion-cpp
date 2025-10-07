#include <iostream>
using namespace std;

int main(){
    int x = 50;
    int y = 5;
    double z = 0;

    try{//se ejecuta siempre que se cumpla la condicion
        if(y == 0){
            throw "Division para cero ";
        }
        z = x / y;
        cout << "El resultado es: " << z << endl;

    } catch (const char* msg){
        cerr << msg << endl; //catch error (cerr)
    }
    return 0;
}