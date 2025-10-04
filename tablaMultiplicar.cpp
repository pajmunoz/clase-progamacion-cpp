//mostrar tabla de multiplicar de un numero
//pida al usuario un numero entero positivo y luego muestre la tabla de multiplicar de ese numero del 1 al 10 usando For
#include <iostream>
using namespace std;

int main(){
	int numero = 0;
	int resultado;
	cout << "Ingrese un numero porfavor: "<< endl;
	cin >> numero;
	if (numero >= 1){
	
		for (int i=1; i<=10; ++i){
	resultado = numero * i;
	
	cout << numero << " X " << i << " = " << resultado <<  endl;
}
	
	}else{
		cout << "Ingrese un numero positivo"<< endl;
	}

	
	return 0;
}