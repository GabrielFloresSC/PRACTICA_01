// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 1
// Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de dos
// números enteros aplicando el algoritmo de Euclides.

#include <iostream>

using namespace std;

//PROTOTIPOS
int euclides(int, int);

int main() 
{
    system("cls");
    int numero1, numero2;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    cout << "El máximo común divisor es: " << euclides(numero1, numero2) << endl;

    return 0;
}

int euclides(int numero1, int numero2) 
{
    if (numero2 == 0) {
        return numero1; //En caso de que esto ocurra solo se retornara el primer numero para terminar la recursividad
    }
    return euclides(numero2, numero1 % numero2); // calculamos cual es el residuo que nos quedaba para la recursividad y el segundo numero se convertira en el primero
}
