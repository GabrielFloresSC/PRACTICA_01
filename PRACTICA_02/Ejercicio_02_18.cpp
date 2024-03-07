// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 18
/*Problema planteado: Programa que declare un vector de diez elementos enteros y pida números para rellenarlo
hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el
vector (sólo los elementos introducidos).
*/

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int vector1 [10];
    int Numero;
    int contador = 0;

    for (int i = 0; i < 10; i++) // introducimos los valores dentro de los vectores 
    {
        cout<<"Introduzca un numero entero: ";
        cin >> Numero;

        if (Numero < 0) {
            break;
        }

        vector1[i] = Numero;
        contador++;
    }

    cout << "El vector es: ";
    for (int i = 0; i < contador; i++) {
        if (i < (contador - 1))
        {
            cout << vector1[i] << " - ";
        }
        else{
            cout << vector1[i];
        }
    }

    return 0;
}
