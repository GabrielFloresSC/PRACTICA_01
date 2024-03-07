// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 06/03/2024
// Numero de ejercicio: 2
// Problema planteado: Escribir un programa que a partir de un arreglo constante de 10 elementos enteros,
// determine el porcentaje de números pares positivos e impares negativos

#include <iostream>

using namespace std;

int main() 
{

    float Par, Impar, PorcentajePar, PorcentajeImpar, Resto;
    // Definir el tamaño del arreglo
    int Vector[10];

    Par = 0;
    Impar = 0;
    Resto = 0;
    
    cout << "Ingresar 10 valores: ";
    for (int i = 0; i < 10; ++i) //introducimos los valores
    {
        cin >> Vector[i];
    }

    for (int i = 0; i < 10; ++i) 
    {
        if (Vector[i] > 0 && Vector[i] % 2 == 0) 
        {
            Par++;
        } 
        else if (Vector[i] < 0 && Vector[i] % 2 != 0) 
        {
            Impar++;
        }
    }
    //Dentro del for determinamos si son pares positivos o impares negativos


    PorcentajePar = (Par / 10) * 100;
    PorcentajeImpar = (Impar / 10) * 100;
    Resto = 100 - (PorcentajeImpar + PorcentajePar); //sacamos los porcentajes de cada uno y lo que sobra

    cout << "Existe una cantidad de " << PorcentajePar << " por ciento de numeros pares positivos" << endl;
    cout << "Existe una cantidad de " << PorcentajeImpar << " por ciento de numeros impares negativos" << endl;
    cout << "Existe una cantidad de " << Resto << " por ciento de numeros que no corresponden a ningun grupo" << endl;

    return 0;
}
