// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 8
/* Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su
edad.*/

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int CalcularEdad (vector<int> , vector<int>);

int main() {

    vector<int> fechaActual(3);
    cout << "Ingrese la fecha actual (dia mes anio): ";
     for (int i = 0; i < 3; i++)
    {
        cin >> fechaActual[i];
    }

    vector<int> fechaNacimiento(3);
    cout << "Ingrese su fecha de nacimiento (dia mes anio): ";
    for (int i = 0; i < 3; i++)
    {
        cin >> fechaNacimiento[i];
    }
    
    // Calcular la edad de la persona
    int edad = CalcularEdad(fechaActual, fechaNacimiento);

    cout << "Tiene " << edad << " anios de edad"<< endl;

    return 0;
}

int CalcularEdad(vector<int> fechaActual, vector<int> fechaNacimiento) { // Aqui se calculara la edad de la persona

    int edad = fechaActual[2] - fechaNacimiento[2]; //Cuantos anios tiene solo considerando los anios

    if (fechaActual[1] < fechaNacimiento[1] || (fechaActual[1] == fechaNacimiento[1] && fechaActual[0] < fechaNacimiento[0])) {
        edad--;
    }
    // En el caso de que el mes de nacimiento sea mayor al actual se le resta uno, en el caso de que sea el mismo mes se considera si el dia actual es menor que el del nacimiento

    return edad;
}
