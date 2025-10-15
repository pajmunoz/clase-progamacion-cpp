#include <iostream>
#include <string>

using namespace std;

int main()
{
    int edad;
    float altura;
    char inicial;
    bool esEstudiante;
    string nombre;
    int x = 10;
	int* p = &x;

	cout << x << endl;
	cout << *p << endl;
	
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su altura (en metros): ";
    cin >> altura;

    cout << "Ingrese la inicial de su nombre: ";
    cin >> inicial;

    cout << "¿Es estudiante? (1 para sí, 0 para no): ";
    cin >> esEstudiante;

    cout << "\n--- Datos ingresados ---\n";
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Altura: " << altura << " metros" << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "¿Es estudiante?: " << (esEstudiante ? "Sí" : "No") << endl;

    return 0;
}