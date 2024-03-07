// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 9
/*Problema planteado:Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otro
arreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor nota y el
nombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo un
desempeño mayor con relación al promedio del curso.
*/

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int CantidadAlumnos, PosicionMayor, PosicionMenor, contador, NotaMayor, NotaMenor;
    float Promedio;
    cout<< "Ingrese la cantidad de alumnos: ";
    cin >> CantidadAlumnos;

    int Notas[CantidadAlumnos];
    string Nombres[CantidadAlumnos];
    string Carreras[CantidadAlumnos];
    float SumatoriaNotas = 0;
    string MejorCarrera;
    float DiferenciaMaxima = 0;

    PosicionMayor = 0;
    PosicionMenor = 0;
    NotaMayor = 0;

    for (int i = 0; i < CantidadAlumnos; i++) // introducimos los valores dentro de los vectores 
    {   
        cout<<"Introduzca las notas del alumno numero " << i + 1 <<": ";
        cin >> Notas[i];
        cout<<"Introduzca el nombre del alumno numero " << i + 1 <<": ";
        cin >> Nombres[i];
        cout<<"Introduzca la sigla de la carrera del alumno numero " << i + 1 <<": ";
        cin >> Carreras[i];

        if (Notas[i] > NotaMayor)
        {
            PosicionMayor = i;
            NotaMayor = Notas[i];//sacamos el mayor
        }

        NotaMenor = Notas[0]; //Determinamos el valor de la variable notamenor

        if (Notas[i] < NotaMenor)
        {
            PosicionMenor = i;
            NotaMenor = Notas[i]; //sacamos el menor
        }
    }
    
    for (int i = 0; i < CantidadAlumnos; i++)
    {
        SumatoriaNotas += Notas[i];
    }
    
    Promedio = SumatoriaNotas / CantidadAlumnos; //Sacamos promedio

    // Definimos cual es la mejor carrera
    for (int i = 0; i < CantidadAlumnos; i++)
    {
        float diferencia = Notas[i] - Promedio;
        if (diferencia > DiferenciaMaxima){
            DiferenciaMaxima = diferencia;
            MejorCarrera = Carreras[i];
        }
    }
    
    // Mostrar resultados
    cout << "El alumno con la nota mas alta es: " << Nombres[PosicionMayor] << endl;
    cout << "El alumno con la nota mas baja es: " << Nombres[PosicionMenor] << endl;
    cout << "La mejor carrera con el promedio mas alto es: " << MejorCarrera << endl;

    return 0;
}
