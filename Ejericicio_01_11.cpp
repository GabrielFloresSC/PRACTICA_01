// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 11
// Problema planteado: Escriba la sucesión de Fibonacci.

#include <iostream>

using namespace std;

int main (){

    int limite, c1, c2, signum;
    cout << "Ingrese el limite para la serie de Fibonacci: ";
    cin >> limite;
    c2 = 0; 
    c1 = 1; 
    for (int i = 1; i <= limite; i++) 
    { 
        signum = c1 + c2;
        c1 = c2; 
        c2 = signum; // se registra el numero que le sigue al anterior
        cout << c2 << " "; // no endl para que se ve la suceion mas seguida
    }
    return 0;
}
