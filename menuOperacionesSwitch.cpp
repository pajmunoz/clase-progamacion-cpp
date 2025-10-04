#include <iostream>

using namespace std;

int main(){
	 int option, num1, num2;
	 
	 
	 cout << "1. Suma \n";
	 cout << "2. Resta \n";
	 cout << "3. Salir \n";
	 cout << "Elija una opcion: ";
	 cin >> option;
	 
	 switch(option){
	 	case 1:
	 		cout << "Ingrese dos numeros: ";
	 		cin >> num1 >> num2;
	 		cout << "Suma: " << (num1+num2)<< endl;
	 		break;
	 	case 2:
	 		cout << "Ingrese dos numeros: ";
	 		cin >> num1 >> num2;
	 		cout << "Suma: " << (num1-num2)<< endl;
	 		break;
	 	case 3:
	 		break;
	 	default:
	 		cout << "Opcion no valida \n";
	 		break;
	 }
	
	return 0;
}