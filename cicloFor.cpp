#include <iostream>

//imprimir en pantalla numeros del 1 al 10
using namespace std;

int main(){
	int numero;
	numero = 0;
	
	for(int i=1; i<=10; ++i){//inicio variable i que inicie en 1; siempre que i sea menor o igual a 10; incrementar cada vez que hasta que la condicion se ejecute
		cout << "# " << i<< endl;
		cout << "contador" << endl;
	}
	
	
	return 0;
}