// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 9
// Problema planteado: Indique la cantidad de dígitos que tiene un número entero

#include <iostream>


using namespace std;

int main () 
{
    int numero, digito;
    digito = 0;
    cout << "ingrese un numero: " << endl; 
    cin >> numero;

    if (numero == 0) 
    {
        digito = 1;
    } else {
        while (numero != 0) {
            numero = numero / 10; // por cada divison es un digito del numero hasta que llegue a 0
            digito = digito + 1;
        }
    }

    cout << "La cantidad de digitos del numero son: " << digito << endl;

    return 0;
}
