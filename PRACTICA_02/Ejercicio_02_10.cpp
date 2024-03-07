// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 06/03/2024
// Numero de ejercicio: 10
/*Problema planteado: Dado un arreglo que contiene la población de los nueve departamentos del país y otro que
contiene los nombres de estos departamentos, indique el nombre del departamento que tiene
la mayor población y el nombre del departamento que tiene la menor población.
*/

#include <iostream>
#include <string>

using namespace std;

int main() 
{

    int poblacion[9];
    string Ciudades[] = {"La Paz","Oruro","Potosi","Cochabamba","Sucre","Tarija","Santa Cruz","Beni","Pando"};

    int MayorPoblacion, MenorPoblacion, CiudadConMasPoblacion, CiudadConMenosPoblacion;

    MayorPoblacion = 0;
    MenorPoblacion = poblacion [0];
    CiudadConMasPoblacion = 0;
    CiudadConMenosPoblacion = 0;

    for (int i = 0; i < 9; ++i) 
    {
        cout << "Ingrese la poblacion del departamento de:" << Ciudades[i] << endl;
        cin >> poblacion[i];

        if(poblacion[i] > MayorPoblacion) //Ciudad con mayor poblacion
        {
            CiudadConMasPoblacion = i;
            MayorPoblacion = poblacion[i];
        } 
        if(poblacion[i] < MenorPoblacion) //Ciudad con menor poblacion
        {
            CiudadConMenosPoblacion = i;
            MenorPoblacion = poblacion[i];
        }
    }
    cout << "La ciudad con mayor poblacion: " << Ciudades[CiudadConMasPoblacion] << endl;
    cout << "La ciudad con menor poblacion: " << Ciudades[CiudadConMenosPoblacion] << endl;

    return 0;
}
    