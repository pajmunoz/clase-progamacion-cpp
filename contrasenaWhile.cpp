#include <iostream>
using namespace std;
int main(){
	string pass = "clave123";
	int counter = 1;
	string intento;
	
	while(counter <= 3){
			cout << "Ingrese la contrasena: ";
			cin >> intento;
			
			if(intento == pass){
				cout << "Acceso concedido.\n";
				break;
			}else{
				cout << "Contrasena incorrecta.\n";
				counter++;
			}
		
	}
	
	if (counter > 3) {
	        cout << "Acceso bloqueado.\n" << endl;
	    }

	

	
	
	
	return 0;
}