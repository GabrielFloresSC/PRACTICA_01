// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 3
/* Problema planteado: Escribe un programa que se encargue de comprobar si un número es o no primo. Hecho
esto, imprime los números primos entre 1 y 100.*/ 

#include <iostream>

using namespace std;

bool Primos (int);

int main() {

    for (int i = 1; i <= 100; ++i) {
        if (Primos(i)) { // llamamos a la funcion primos y si retorna true, se cumple la condicion
            cout << i << " ";
        }
    }
    return 0;
}

bool Primos(int numero) {

    bool Switch; // almacenamos en este variable si es verdadero o falso

    if (numero <= 1) { //todo digito menor a 1 no es un primo
        Switch = false;
    }
    for (int i = 2; i <= numero; ++i) { 
        if (numero % i == 0) { // verificamos si el numero tiene una division exacta
            if (numero == i)  // verificamos que el divisor es igual que el dividendo 
                Switch = true; // en ese caso es primo
            else{
                Switch = false;
                return Switch; // en ese caso no es primo
            }
        }
    }
    return Switch;
}
