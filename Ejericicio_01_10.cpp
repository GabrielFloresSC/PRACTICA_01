// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 10
// Problema planteado: Escriba un programa que ingrese varios valores numéricos, hasta el que el usuario ingrese el valor de cero calculo la suma y el promedio de estos.

#include <iostream>

using namespace std;

int main() 
{ 
    double numero, suma, promedio; 
    int i;

    i = 0;
    cout << "Ingrese el primer numero para sumar y promediar o presione cero para finalizar: " << endl;
    cin >> numero;

    while (numero != 0)  { //aqui se valida la respuesta que sea distinta a 0
        suma = suma + numero;
        i= i+1; 
        cout << "Ingrese el siguiente numero para sumar y promediar o presione cero para finalizar: "<< endl;
        cin >> numero;
    }
    promedio = suma / i; 
    cout << "La suma de los numeros es: " << suma << endl;
    cout << "El promedio de los " << i << " numeros es: " << promedio << endl;
    return 0;
}
