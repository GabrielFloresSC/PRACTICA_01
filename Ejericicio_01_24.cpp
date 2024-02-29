/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 24
Problema planteado: En una llantería se ha establecido una promoción de las llantas marca “Ponchadas”,
dicha promoción consiste en lo siguiente:
Si se compran menos de cinco llantas el precio es de 300 Bs. cada una, de 250 Bs. si se
compran de cinco a 10 y de 200 Bs. si se compran más de 10.
Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las
llantas que compra y la que tiene que pagar por el total de la compra.
*/

#include <iostream>

using namespace std;

int main() {

    int cantidad;
    double total;

    cout << "Ingrese la cantidad de llantas que desea comprar: ";
    cin >> cantidad;

    if (cantidad < 5) {
        total = cantidad * 300;
        cout << "El precio de cada llanta es: 300 Bs." << endl;
    }
    if (cantidad >= 5 && cantidad <= 10) {
        total = cantidad * 250;
        cout << "El precio de cada llanta es: 250 Bs." << endl;
    } 
    else {
        total = cantidad * 200;
        cout << "El precio de cada llanta es: 200 Bs." << endl; // los couts dentro de los ifs son para que el usuario sepa a que precio le saldra cada una
    }

    cout << "El total es: " << total << " Bs." << endl;

    return 0;
}
