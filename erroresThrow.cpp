#include <iostream>
#include <stdexcept>
using namespace std;


int main(){
    int x = 50;
    int y = 5;
    double z = 0;

    try{//se ejecuta siempre que se cumpla la condicion
        if(y == 0){
            throw runtime_error("Division para cero");
        }
        z = x / y;
        cout << "El resultado es: " << z << endl;

    } catch (const runtime_error& e){
        cout << "error: " << e.what() << endl;
        //err << msg << endl; //catch error (cerr)
    }
    return 0;
}