// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 28/02/2024
// Número de ejercicio: 4
// Problema planteado: Número primo.

#include <iostream>

using namespace std;

 int main(){

    int numero, c;
    c = 0;

    cout << "Ingrese un numero entero: " << endl;
    cin >> numero;
    
    for (int i = 1; i <= numero; i++){
        if (numero % i == 0)
            c++;
    }
        if (c == 2)
            cout << "El numero es primo"<< endl;
        else
            cout << "El numero no es primo"<< endl;
    return 0;
 }