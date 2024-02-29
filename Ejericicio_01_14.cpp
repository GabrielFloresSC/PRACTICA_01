// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 14
// Problema planteado: Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada.

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double b, h, volumen;
    cout << "introduzca el valor de la base y la altura" << endl;
    cin >> b >> h;
    
    volumen = (pow(b,2) * h) / 3; // pow para cumplir la formula viene de la libreria cmath
    cout << "EL volumen de la piramide es: " << volumen << endl;
    
    return 0;
}
