// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 1
/* Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado un
entero n > 1, calcule e imprima los elementos correspondientes a la conjetura
de Ullman (en honor al matemático Ullman) que consiste en lo siguiente:
• Empiece con cualquier entero positivo.
• Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
• Obtenga enteros sucesivamente repitiendo el proceso.
Al final se obtendrá el número 1, independientemente del entero inicial. Por
ejemplo, cuando el entero inicial es 26, la secuencia será:
26 13 40 20 10 5 16 8 4 2 1 */

#include <iostream>

using namespace std;

// PROTOTIPO
int conjeturaUllman(int n);

int main() {
    system("cls");
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    conjeturaUllman(numero);
    return 0;
}

int conjeturaUllman(int numero) {
    cout << numero << " ";
    if (numero == 1) {
        return numero; //Termina la recursividad
    }
    if (numero % 2 == 0) { //Verificamos si es par o impar
        return conjeturaUllman(numero / 2); //Realizamos recursividad con los datos de la conjetura de ullman si es par
    } else {
        return conjeturaUllman(numero * 3 + 1); //Realizamos recursividad con los datos de la conjetura de ullman si es impar
    }
}