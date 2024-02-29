// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 7
// Problema planteado: Realice un programa que ingrese los meses de 1 al 12 y el programa despliegue el mes en literal. Si se ingresa un valor distinto a 1 al 12 el programa debe dar un mensaje de mes inválido.

#include <iostream>

using namespace std;

int main (){

    int mes;

    cout << "Ingresa el numero de un mes y te mostrare que mes es: ";
    cin >> mes;

    switch (mes){ // se maneja un caso para cada mes del año y en caso de que no sea asi se presenta el mensaje mes invalido con la funcion default
        case 1: cout << "Enero." ; break;
        case 2: cout << "Febrero." ; break;
        case 3: cout << "Marzo." ; break;
        case 4: cout << "Abril." ; break;
        case 5: cout << "Mayo." ; break;
        case 6: cout << "Junio." ; break;
        case 7: cout << "Julio." ; break;
        case 8: cout << "Agosto." ; break;
        case 9: cout << "Septiembre." ; break;
        case 10: cout << "Octubre." ; break;
        case 11: cout << "Noviembre." ; break;
        case 12: cout << "Diciembre." ; break;
        default : cout << "Mes invalido. ";
    }

    return 0;

}
