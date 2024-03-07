// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 17
/*Problema planteado: Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno
(comprendidas entre 0 y 100). A continuación, debe mostrar todas las notas, la nota media, la
nota más alta que ha sacado y la menor.
*/

#include <iostream>

using namespace std;

int main() 
{
    float Notas[5];
    float SumaNotas = 0.0;
    float Promedio = 0.0;
    float NotaMayor = 0.0;
    float NotaMenor = 101.0;

    for (int i = 0; i < 5; i++) // introducimos los valores dentro de los vectores 
    {
        cout<<"Introduzca la nota numero: " << i + 1;
        cin >> Notas[i];

        SumaNotas += Notas[i]; //Comenzamos a sumar todos los valores 

        if (Notas[i] > NotaMayor)
        {
            NotaMayor = Notas[i];
        }
        if (Notas[i] < NotaMenor)
        {
            NotaMenor = Notas[i];
        }

    }

    Promedio = SumaNotas / 5.0; //sacamos el promedio

    cout << "La nota media es: " << Promedio << endl;
    cout << "La nota mas alta es: " << NotaMayor << endl;
    cout << "La nota mas baja es: " << NotaMenor << endl;

    return 0;
}
