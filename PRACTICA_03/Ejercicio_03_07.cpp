// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 7
/* Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto*/

#include <iostream>

using namespace std;

bool bisiesto(int anio);

int main() {

    int anio;
    cout << "Introduzca un anio ";
    cin >> anio;

    if (bisiesto(anio)) {
        cout << "El anio "<< anio << " es bisiesto" << endl;
    } else {
        cout << "El anio "<< anio << " no es bisiesto" << endl;
    }

    return 0;
}

bool bisiesto(int anio) {
    if (anio % 4 == 0) {  // Todos los anios bisiestos son cada 4 anios asi que son divisibles entre 4 
        if (anio % 100 == 0) {       // si son divisibles entre 4 y no entre 100 son bisiestos (esto se debe a cada centenar)
            if (anio % 400 == 0) {    // si son divisibles entre 4 y 100 pero tambien entre 400 son bisiestos (esto se debe a cada 4 centenares)
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}
