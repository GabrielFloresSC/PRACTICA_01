/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 23
Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación,
empleando sumas sucesivas
*/

#include <iostream>

using namespace std;

int main() 
{
    int numero, cantidadsumas, resultado;

    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    cout << "Ingrese el multiplicador: " << endl;
    cin >> cantidadsumas;

    resultado = 0;
    
    for (int i = 0; i < cantidadsumas; ++ i) 
    {
        resultado = resultado + numero; // todo el for nos sirve para que las sumas ocurran
    }

    cout << "el resultado de la multiplicacion es: " << resultado << endl;

    return 0;
}
