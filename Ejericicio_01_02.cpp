// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 2
// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin.

#include <iostream>

using namespace std;
int main(){
    double C, K;
    cout << "Ingrese el valor en grados centigrados: " << endl;
    cin >> C;

    K = C + 273.15; // La conversion de centigrados a kelvin maneja esta formula

    cout << "El valor en Kelvin es: " << K << endl;
    
    return 0;
}
