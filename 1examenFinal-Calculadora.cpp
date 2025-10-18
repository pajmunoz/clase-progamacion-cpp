/*Desarrollar un programa que solicite al usuario tres notas (valores enteros entre 0 y 100).
El programa debe validar que cada nota esté dentro del rango permitido. Luego, calcular el
promedio y mostrar un mensaje que indique si el estudiante aprueba (promedio ≥ 60) o reprueba.*/
#include <iostream>
using namespace std;

bool validarNota(int nota)
{
    return nota >= 0 && nota <= 100;
}
int calcularPromedio(int nota1, int nota2, int nota3)
{
    return (nota1 + nota2 + nota3) / 3;
}
bool esAprobado(int promedio)
{
    return promedio >= 60.0;
}

int ingresarNotaValida(int numeroNota)
{
    int nota;
    cout << "Ingrese la nota " << numeroNota << " (0-100): ";
    cin >> nota;
    
    while (!validarNota(nota))
    {
        cout << "Nota inválida. Ingrese nuevamente la nota " << numeroNota << " (0-100): ";
        cin >> nota;
    }
    return nota;
}

int main()
{
    int nota1, nota2, nota3;
    
    nota1 = ingresarNotaValida(1);
    nota2 = ingresarNotaValida(2);
    nota3 = ingresarNotaValida(3);
    int promedio = calcularPromedio(nota1, nota2, nota3);
    cout << "El promedio es: " << promedio << endl;
    if (esAprobado(promedio))
    {
        cout << "El estudiante aprueba." << endl;
    }
    else
    {
        cout << "El estudiante reprueba." << endl;
    }
    return 0;
}