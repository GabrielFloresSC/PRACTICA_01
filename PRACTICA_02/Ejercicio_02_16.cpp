// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 06/03/2024
// Numero de ejercicio: 16
/*Problema planteado: Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos
leídos por el teclado. Copia los elementos del vector en otro vector pero en orden inverso, y
muéstralo por la pantalla.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    string vector1 [5];
    string vector2 [5];

    cout << "Ingrese los 5 valores: ";

    for (int i = 0; i < 5; i++) {
        cin >> vector1 [i];
    }

    for (int i = 0; i < 5; i++) {
        vector2[4 - i] = vector1[i]; // el 4 - i es una manera de ir invirtiendo los caracteres
    }

    cout << "El vector inverso es: ";

    for (int i = 0; i < 5; i++) {
        cout << vector2 [i] << "  ";
    }

    return 0;
}
