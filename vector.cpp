//Desarrollar un programa, donde se crea un vector de 5 elementos que sean una cadena
// de Strings, inicializar el vector con datos 
//leidos por medio de consola. Imprimir
//dos vectores donde el primer vector sea de manera inversa y el segundo vector sea un vector ordenado del vector original

#include <iostream>
using namespace std;

int main(){
	int vector[5];
	for(int i=0; i<5; i++){
		cout << "Ingrese un numero: ";
		cin >> vector[i];
	}
	cout << "Vector inverso: ";
	for(int i=4; i>=0; i--){
		cout << vector[i] << " ";
	}
	cout << endl;
	//Ordenar el vector
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(vector[i] > vector[j]){
				int aux = vector[i];
				vector[i] = vector[j];
				vector[j] = aux;
			}
		}
	}
	cout << "Vector ordenado: ";
	for(int i=0; i<5; i++){
		cout << vector[i] << " ";
	}
	cout << endl;	

	return 0;
}