/*Solicitar al usuario que ingrese el día de la semana y la cantidad de artículos comprados por un cliente
en una tienda. Finalmente, imprimir “Accede al descuento” si el día es lunes y el cliente compró más de
3 artículos. En caso contrario, no imprimir nada.*/

#include <iostream>
using namespace std;
int main(){
    string dia;
    int artículos;
    cout << "Ingrese el nombre del dia: ";
    cin >> dia;
    cout << "Ingrese la cantidad de artículos comprados: ";
    cin >> artículos;
    if(dia == "lunes" ){
        if(artículos>= 3){
            cout << "Accede al descuento";
            }else{
                return 0;
            }
    }else{
        return 0;
    }
    return 0;
}