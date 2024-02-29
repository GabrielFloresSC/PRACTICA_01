// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 5
// Problema planteado: Número amigo 

#include <iostream>

using namespace std;

int main(){

    int amigo1, amigo2, suma1, suma2;
    cout << " Ingrese dos numeros: ";
    cin >> amigo1 >>amigo2;

    suma1 = 0;
    suma2 = 0;
    
    for (int i = 1; i <= (amigo1/2); i++){
        if (amigo1 % i == 0)
            suma1 = suma1 + i;
    }
    for (int i = 1; i <= (amigo2/2); i++){
        if (amigo2 % i == 0)
            suma2 = suma2 + i;
    }
    if (amigo1 == suma2 && amigo2 == suma1) //comparamos si las sumas son igual al otro numero
        cout << "Los numeros son amigos";
    else
        cout << "Los numeros no son amigos";

    return 0;
}
