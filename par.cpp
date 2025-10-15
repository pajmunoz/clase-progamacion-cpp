#include <iostream>

using namespace std;

bool esPar(int numero){
	return numero % 2 == 0;
}

int main(){
	int numero;
	
	cout << "Ingrese un numero :" << endl;
	cin >> numero;
	
  	if (esPar(numero)) {
        cout << "El numero " << numero << " es PAR" << endl;
    } else {
        cout << "El numero " << numero << " es IMPAR" << endl;
    }

	return 0;
}