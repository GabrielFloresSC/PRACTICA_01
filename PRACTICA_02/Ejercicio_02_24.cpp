// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 24
/*Problema planteado: Leer una cadena en mayúsculas y cámbielas en minúscula.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string Mayusculas;
    cout << "Ingrese una oracion que este en mayusculas: ";
    cin >> Mayusculas;
    for (char & c : Mayusculas) {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
    }
    cout << "La frase transformada a minusculas es: " << Mayusculas << endl;
    return 0;
}
