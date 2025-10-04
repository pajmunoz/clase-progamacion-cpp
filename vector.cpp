//Desarrollar un programa, donde se crea un vector de 5 elementos que sean una cadena de Strings, inicializar el vector con datos 
//leidos por medio de consola. Imprimir
//dos vectores donde el primer vector sea de manera inversa y el segundo vector sea un vector ordenado del vector original

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> numeros;
	int n;
	
	cout << "ingrese numeros: \n";
	
	while (cin >> n && numeros.size() < 5) {
	    numeros.push_back(n);
	}

	cout << "--inversa--" << endl;
	for (int i = 0; i < numeros.size(); ++i) {
		
        cout << numeros[i] << endl;
    }
    cout << endl;

	return 0;
}