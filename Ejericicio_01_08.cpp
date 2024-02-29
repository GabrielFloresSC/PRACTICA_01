// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 8
// Problema planteado: Mostrar los primeros 100 número primos.

#include <iostream>
using namespace std;

int main() {

    int primo = 0;
    int num = 2;

    while (primo < 100) {

        bool esprimo = true; // nos permite confirmar que el numero es primo

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) { //calculo para saber si es primo
                esprimo = false; // en el caso de que no se anotara el 
                break;
            }
        }

        if (esprimo) {
            cout << num << " " << endl;
            primo = primo + 1; //contador de en que numero estamos
        }
        num = num +1;
    }

    return 0;
}
