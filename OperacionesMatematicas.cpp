/*Desarrollar un programa que pida al usuario dos numeros enteros. Luego, debe realizar y mostrar los resultados de la suma, resta, multiplicacion 
y division.
Todo debe presentarse de forma clara para que el usuario entienda los resultados*/
#include <iostream>
using namespace std;

int main(){
	int num1, num2, resultSuma = 0, resultResta = 0, resultMulti=0, resultDivision=0;
	
	cout << "Ingrese un numero porfavor"<<endl;
	cin >> num1;
	
	cout << "Ingrese otro numero" << endl;
	cin >> num2;
	
	resultSuma = num1 + num2;
	resultResta = num1 - num2;
	resultMulti = num1 * num2;
   
	
	cout << "_____OPERACIONES_____" << endl;
	cout << num1 << " + " << num2 << " = " << resultSuma << endl;
	cout << num1 << " - " << num2 << " = " << resultResta <<  endl;
	cout << num1 << " X " << num2 << " = " << resultMulti <<  endl;

	if (num2 != 0) {
		resultDivision = num1 / num2;
	    cout << num1 << " / " << num2 << " = " << resultDivision << endl;
	} else {
	    cout << "Error: No se puede dividir entre cero." << endl;
	}

	
	return 0;
}