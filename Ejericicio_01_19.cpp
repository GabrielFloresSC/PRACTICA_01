/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 19
Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros dígitos.
*/

#include <iostream>

using namespace std;

int main() {
    
    int numero, digito1, digito2, resultado;
    
    cout << "Ingrese un numero entero que tenga dos digitos o mas: ";
    cin >> numero;

    digito1 = numero;

    while (digito1 >= 10) {
        digito1 = digito1/10; // aqui se consigue el primer digito
    }
    
    digito2 = numero % 10; // aqui se consigue el segundo digito

    resultado = digito1 + digito2;

    cout << "La suma de los dos primeros digitos es: " << resultado << endl;

    return 0;
}
