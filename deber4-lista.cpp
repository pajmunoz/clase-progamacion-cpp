// Deber 4: Desarrollar un programa, en donde se cree una
// función que haga una lista con palabras y escoja
// aleatoriamente una de las palabras para que
// posteriormente sea adivinada por el usuario en la función principal

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int generarNumeroAleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main()
{
    string palabras[] = {"programacion", "computadora", "desarrollo", "funcion", "variable"};
    srand(static_cast<unsigned int>(time(0)));
    int num = generarNumeroAleatorio(0,4); 
    string palabraElegida = palabras[num];
    string intento;

    cout << "Palabra elegida!! \n adivine la palabra: " << endl;
    cin >> intento;
    
    if (intento == palabraElegida) {
        cout << "Felicidades, adivinaste la palabra!" << endl;
    } else {
        cout << "Lo siento, la palabra correcta era: " << palabraElegida << endl;
    }

return 0;
}
