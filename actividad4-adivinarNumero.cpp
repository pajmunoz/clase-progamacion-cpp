/*Actividad 4: Desarrollar un programa, en donde se escoja
un numero al azar entre el 1 al 100 y el usuario intente
adivinar. El programa deberá dar pista si es que el número
ingresado por el usuario es mayor o menor al número a
adivinar. El usuario tiene solo 5 intentos para adivinar*/

#include <iostream>

using namespace std;
int generarNumeroAleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}
int main(){
    srand(static_cast<unsigned int>(time(0)));
    int numeroAdivinar = generarNumeroAleatorio(1,100);
    int intento;
    int intentosRestantes = 5;

    cout << "Adivina el numero entre 1 y 100. Tienes 5 intentos." << endl;
    while (intentosRestantes > 0) {
        cout << "Ingresa tu intento: ";
        cin >> intento;

        if (intento == numeroAdivinar) {
            cout << "Felicidades! Adivinaste el numero!" << endl;
            break;
        } else if (intento < numeroAdivinar) {
            cout << "El numero es mayor. Te quedan " << intentosRestantes - 1 << " intentos." << endl;
        } else {
            cout << "El numero es menor. Te quedan " << intentosRestantes - 1 << " intentos." << endl;
        }
        intentosRestantes--;
    }
    return 0;
}