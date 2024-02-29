// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 6
// Problema planteado: En el estacionamiento del CineCenter se cobra 17 Bs la primera hora, si pasa de una hora se cobra 15 Bs adicional por hora. Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe pagar.

#include <iostream>

using namespace std;

int main(){
    int horas, total;
    cout << "Ingresa las horas de estadia: ";
    cin >> horas;
    if (horas == 1){
        total = 17;
        cout << "El monto a pagar es: " << total << "bs."<< endl;
    } else {
        total = 17 + (horas-1) * 15; // el -1 es para restar la primera hora
        cout << "El monto a pagar es: " << total << "bs."<< endl;
    }

    return 0;

}
