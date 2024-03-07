// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 06/03/2024
// Numero de ejercicio: 5
// Problema planteado: Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a
// 240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas.

#include <iostream>
#include <random>
#include <ctime>   

using namespace std;

int main() {
    
    srand(time(0));

    int CantidadPersonas, MasAlto, MasBajo, Sumador;
    float Promedio;
    
    cout << "Ingrese el número de personas: ";
    cin >> CantidadPersonas;

    int Tamanio[CantidadPersonas];


    for (int i = 0; i < CantidadPersonas; i++) {
        Tamanio[i] = 50 + rand() % (240 - 50); //el 50 + nos ayuda a controlar el limite inferior
    }                           


    for (int i = 1; i < CantidadPersonas; i++) {
        
        Sumador += Tamanio[i]; //Controla las estaturas y las suma

        if (Tamanio[i] > MasAlto) { //verificamos el mas alto
            MasAlto = Tamanio[i];
        }

        if (Tamanio[i] < MasBajo) { //Verificamos el mas bajo
            MasBajo = Tamanio[i];
        }
    }

    
    Promedio = (Sumador) / CantidadPersonas;
    //Sacamos el promedio

    cout << "La persona mas alta mide: " << MasAlto << " cm" << endl;
    cout << "La persona mas baja es: " << MasBajo << " cm" << endl;
    cout << "El promedio de tamanio es: " << Promedio << " cm" << endl;

    return 0;
}
