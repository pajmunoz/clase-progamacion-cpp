#include <iostream>
#include <cstring>
#include <algorithm>
// ejercicio palindromo
//strleng: devuelve la longitud de una cadena
// strcmp: compara dos cadenas
//strcpy: copia una cadena en otra
//strcat: concatena dos cadenas
using namespace std;

int main(){
    string str1;
    char origen[]= "Hola Mundo";
    char destino[50];
    int z;
    
    strcpy(destino, origen);// copia el contenido de origen en destino
    cout << "Cadena copiada: " << destino << endl;

    z=strlen(origen);// devuelve la longitud de la cadena destino
    cout << "Longitud de la cadena destino: " << strlen(origen) << endl;

    strcat(destino, "!!!");// concatena "!!!" al final de destino
    cout << "Cadena concatenada: " << destino << endl;

    cout << "Ingrese una cadena de caracteres: ";
    getline(cin, str1);// Usar getline para permitir espacios, se guarda como string
    return 0;
}