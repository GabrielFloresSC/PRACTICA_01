// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 12
// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas, minutos y segundos
#include <iostream>

using namespace std;

int main (){

    int valors, segundos, minutos, horas;
    cout << "introduzca el valor en segundos: " << endl;
    cin >> valors;

    segundos = valors;
    minutos = 0; // en caso de que no haya minutos
    horas = 0; // en caso de que no hayan horas
    if (valors >= 3600){
        horas = segundos / 3600; 
        segundos = segundos % 3600;//se anota el sobrante de segundos en una nueva variable
    }
    if (segundos >= 60){
        minutos = segundos / 60; 
        segundos = segundos % 60;
    }

    cout << "Horas: " << horas << ", Minutos: " << minutos << ", Segundos: " << segundos << endl;

    return 0;
}
