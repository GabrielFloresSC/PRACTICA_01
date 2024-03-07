// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 21
/*Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada
uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int Vector1[5];
    int Vector2[5];
    int Vector3[5];

    cout << "Introduzca los valores de vector 1: ";
    for (int i = 0; i < 5; i++) {
        cin >> Vector1[i];
    }

    cout << "Introduzca los valores de vector 2: ";
    for (int i = 0; i < 5; i++) {
        cin >> Vector2[i];
    }

    for (int i = 0; i < 5; i++) {
        Vector3[i] = Vector1[i] + Vector2[i]; // realizamos la suma y lo colocamos en orden dentro del vector 3
    }

    cout << "La suma de los dos primeros vectores es: ";
    for (int i = 0; i < 5; i++) {
        cout << Vector3[i] << "  ";
    }

    return 0;
}
