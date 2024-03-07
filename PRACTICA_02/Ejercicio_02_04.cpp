// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 06/03/2024
// Numero de ejercicio: 4
// Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine:
// el porcentaje de mayores (>=18 años) y menores de edad (<18 años)
// Las edades al azar deben ser generadas a partir de 1 a 110 años.

#include <iostream>
#include <vector>
#include <random>


using namespace std;

int main () 
{
    srand(time(0));

    int VectorEdades [50];

    float PorcentajeMayores, PorcentajeMenores, MayoresDeEdad, MenoresDeEdad;

    MayoresDeEdad = 0;
    MenoresDeEdad = 0;
    PorcentajeMayores = 0;
    PorcentajeMenores = 0;

    for (int i = 0; i < 50; i=i+1)
    {
        VectorEdades[i] = 1 + rand() % (110 - 1); //El 1 + del inicio es para controlar el limite inferior
    }


    for (int i = 0; i < 50; ++i) 
    {
        if (VectorEdades[i] >= 18) 
        {
            MayoresDeEdad++ ;
        } else 
        {
            MenoresDeEdad++ ;
        }
    }
    //Verificamos las edades

    cout << "Existen " << MayoresDeEdad<< " personas mayores" << endl;
    cout << "Existen " << MenoresDeEdad << " personas menores" << endl;

    PorcentajeMayores = (MayoresDeEdad / 50) * 100;
    PorcentajeMenores = (MenoresDeEdad / 50) * 100;  
    //Sacamos el porcentaje de cada uno

    cout << "Existe una cantidad de " << PorcentajeMayores << " por ciento de personas mayores" << endl;
    cout << "Existe una cantidad de " << PorcentajeMenores << " por ciento de personas menores" << endl; 

    return 0;
}
