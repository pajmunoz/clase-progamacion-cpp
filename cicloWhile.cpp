#include <iostream>

using namespace std;

int main(){
	int n, counter, suma;
	n = 0,counter = 1, suma=0; //encerar las variables, Buena Practica
	
	while(counter <= 10 ){

	cout << "Ingresa n"<< counter<< endl;

	cin >> n;
	suma = suma + n;
	counter += 1;
	
	
}
cout << "Suma total es: " << suma<< endl;
	return 0;
}