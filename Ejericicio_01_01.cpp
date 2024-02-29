// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 28/02/2024
// Número de ejercicio: 2
// Problema planteado: Promedio de notas, escriba un programa que lea N notas y saque le promedio general.

#include <iostream>

using namespace std;

int main(){

    int N;
    double nota, promedio, sumatoria;

    cout << "Ingresa la cantidad de notas: " << endl;
    cin >> N;

    for (int i = 1 ; i <= N ; i = i + 1){
        cout << "Ingrese la nota: ";
        cin >> nota;
        sumatoria = sumatoria + nota;
    }
    promedio = sumatoria / N;

    cout << "El promedio es: "<< promedio << endl;

    return 0;
}