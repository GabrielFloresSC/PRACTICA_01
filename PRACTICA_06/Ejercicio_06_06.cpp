// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 6
// Problema planteado: Realizar un algoritmo recursivo para la siguiente función: Q(n)=1^2 +2^2 + 3^2+....+n^2

#include <iostream>

using namespace std;

//PROTOTIPOS
int sumaCuadrados(int);

int main() {
    system("cls");
    int numero;
    cout << "Ingrese el numero hasta el que desea llegar: ";
    cin >> numero;

    cout << "El resultado de la suma de cuadrados es: " << sumaCuadrados(numero) << endl;
    return 0;
}

int sumaCuadrados(int numero) 
{
    if (numero == 1) {
        return 1; //Cuando llegue al final solo se retorna un 1 ya que no tiene cuadrado
    } else {
        return numero * numero + sumaCuadrados(numero - 1); // Se sigue la formula y vamos haciendolo de manera recursiva
    }
}