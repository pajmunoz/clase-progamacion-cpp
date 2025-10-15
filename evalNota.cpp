#include <iostream>
using namespace std;
int main(){
	int nota;
	
	cout << "Ingrese nota: "<< endl;
	cin >> nota;
	
	if (nota >= 90){
		cout << "A " << endl;
	}else if(nota >= 80){
		cout << "B " << endl;
	}else if(nota >= 70){
		cout << "C " << endl;
	}
	
	else{
		cout << "Reprobo el examen"<< endl;
	}
	return 0;
}