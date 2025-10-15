//genera 5 primeros numeros pares
#include <iostream>

using namespace std;

int main(){
	int p=0;
	for (int i=1; i<=5; ++i){
		p+=2;
		cout << "numero par " << p << endl;
	}
		
	return 0;
}