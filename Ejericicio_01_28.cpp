/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 28
Problema planteado: Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos
los meses de 30 días. 
*/

#include <iostream>

using namespace std;

int main () 
{
    int d1, m1, a1, d2, m2, a2, conversion1, conversion2, diferencia;
    cout << "Ingresa la primera fecha (dia/mes/año): " << endl;
    cin >> d1 >> m1 >> a1;
    cout << "Ingresa la segunda fecha (dia/mes/año): " << endl;
    cin >> d2 >> m2 >> a2;

    conversion1 = (a1 * 360) + (m1 * 30) + d1; //operacion para transformar solo en dias
    conversion2 = (a2 * 360) + (m2 * 30) + d2; //operacion para transformar solo en dias

    diferencia = (conversion2 - conversion1);

    cout << "La diferencia de dias son: " << diferencia << endl;

    return 0;
}
