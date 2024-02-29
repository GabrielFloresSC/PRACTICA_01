/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 22
Problema planteado: Crear un programa que indique si un número es perfecto o no, se dice que un número
es perfecto si la suma de sus divisores es igual al número.
Por ejemplo 6 tiene como divisores 1,2 y 3., entonces 1+2+3 =6 el número 6 es
perfecto, si el número es 9 tiene como divisores 1, 3, entonces 1+3=4 no es perfecto.
*/

#include <iostream>
using namespace std;

int main()
{
    
    int numero, perfecto;

    cout << "ingrese un numero" << endl;
    cin >> numero;

    perfecto = 0;

    for (int i = 1; i < numero; i++){ //vemos cada numero posible
        if (numero % i == 0){
            perfecto = perfecto + i; // contador para verificar que numeros si son divisores y se suman entre si
        }
    }
    if (perfecto == numero){   // verificacion
        cout << "Es un numero perfecto" << endl;
    }
    else{
        cout << "No es un numero perfecto" << endl;
    }
    return 0;
}
