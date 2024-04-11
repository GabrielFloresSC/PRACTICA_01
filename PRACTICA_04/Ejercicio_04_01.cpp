// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 10/04/2024
// Fecha modificación: 10/04/2024
// Número de ejercicio: 1
// Problema planteado: Ingresar dos números enteros y hallar al mcd mediante el Algoritmo de Euclides.

#include <iostream>

using namespace std;

// PROTOTIPOS
int Euclides(int, int);

int main() {
    int numero1, numero2;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "El maximo comun divisor es: " << Euclides(numero1, numero2) << endl; // Llamamos a la otra funcion

    return 0;
}
int Euclides(int numero1, int numero2) {

    while (numero2 != 0) {
        int mayor = numero2; //mayor guardara el valor del anterior b para continuar con la formula
        numero2 = numero1 % numero2;  // se divide por el segundo valor y se consigue el residuo, esto ocurre hasta que se llegue a 0
        numero1 = mayor;
    }
    return numero1;
}
