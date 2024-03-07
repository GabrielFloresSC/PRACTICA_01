// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 23
/*Problema planteado: Leer 2 vectores de dimensión N y combine ambos en otro vector
*/
#include <iostream>
#include <vector> // funcion push back y demas de vectores

using namespace std;

int main()
{
    int Cantidad;
    cout << "Introduzca la dimension del vector: ";
    cin >> Cantidad;

    int Vector1[Cantidad];
    int Vector2[Cantidad];
    vector <int> Vector3; // Poder manejar  el push back dentro de el y np tiene limite de tamanio el vector 

    cout << "Introduzca los valores de vector 1: ";
    for (int i = 0; i < Cantidad; i++) 
    {
        cin >> Vector1[i];
    }

    cout << "Introduzca los valores de vector 2: ";
    for (int i = 0; i < Cantidad; i++) 
    {
        cin >> Vector2[i];
    }

    for (int i = 0; i < Cantidad * 2; i++) 
    {
        Vector3.push_back(Vector1[i]); //pone el digito en la siguiente posicion
        Vector3.push_back(Vector2[i]); //pone el digito en la siguiente posicion
    }
    cout << "La combinacion dentro del vector 3 es: ";
    for (int i = 0; i < Cantidad * 2; i++) 
    {
        cout << Vector3[i] << "  ";
    }
    
    return 0;
    
}
