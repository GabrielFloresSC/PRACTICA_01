/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 18
Problema planteado: Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos
correspondientes a la conjetura de Ullman (en honor al matemático Ullman) que
consiste en lo siguiente:
- Empiece con cualquier entero positivo.
- Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
- Obtenga enteros sucesivamente repitiendo el proceso.
Al final se obtendrá el número 1, independientemente del entero inicial. Por ejemplo,
cuando el entero inicial es 26, la secuencia será:
26 13 40 20 10 5 16 8 4 2 1
*/

#include <iostream>

using namespace std;

int main() {
    
    int numero;

    cout << "Ingrese un entero que sea mayor a uno: " << endl;
    cin >> numero;

    while (numero != 1) { // para confirmar que no es 1
        cout << numero << " ";
        if (numero % 2 == 0) { // comprobamos si es par
            numero = numero / 2;
        } else {
            numero = numero * 3 + 1;
        }
    }

    cout << numero << endl;

    return 0;
}
