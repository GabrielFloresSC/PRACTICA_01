// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 25
/*Problema planteado: Genere un vector de N elementos y llénelos aleatoriamente entre valores de 1 a 100 e
indique el mayor elemento, el menor elemento y el promedio. 
*/

#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(0));

    int Elementos;
    cout << "Introduzca la cantidad de elementos que desee: " << endl;

    cin >> Elementos;
    float Vector[Elementos];

    float Sumatoria = 0.0;
    float Promedio = 0.0;
    float ElementoMayor = 0.0;
    float ElementoMenor = 101.0;

    for (int i = 0; i < Elementos; i++) 
    {
        Vector[i] = 1 + rand() % (100 - 1);

        Sumatoria += Vector[i]; //Comenzamos a sumar todos los valores 

        if (Vector[i] > ElementoMayor)
        {
            ElementoMayor = Vector[i];
        }
        if (Vector[i] < ElementoMenor)
        {
            ElementoMenor = Vector[i];
        }
        cout << Vector[i] << endl;
    }
     
    Promedio = Sumatoria / Elementos; //sacamos el promedio

    cout << "La nota media es: " << Promedio << endl;
    cout << "La nota mas alta es: " << ElementoMayor << endl;
    cout << "La nota mas baja es: " << ElementoMenor << endl;

    return 0;
}
