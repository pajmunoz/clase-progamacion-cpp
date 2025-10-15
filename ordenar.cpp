#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void orderList(vector<int>& num) {
    sort(num.begin(), num.end());
}

int main() {
    vector<int> numbers;
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Extraer digitos
    while (numero > 0) {
        numbers.push_back(numero % 10);
        numero /= 10;
    }

    orderList(numbers);

    cout << "Digitos ordenados: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}