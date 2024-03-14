// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 1
/* Problema planteado:Escribe un programa que muestre por consola los números de 1 a 100 (ambos incluidos
y con un salto de línea entre cada impresión), sustituyendo los siguientes:
- Múltiplos de 3 por la palabra "fizz".
- Múltiplos de 5 por la palabra "buzz".
- Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".*/ 

#include <iostream>

using namespace std;

void CuentaNumeros ();

int main(){

    CuentaNumeros();
    
    return 0;
}

void CuentaNumeros (){
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "fizzbuzz" << endl;
        } else if (i % 3 == 0)
        {
            cout << "fizz" << endl;
        } else if (i % 5 == 0)
        {
            cout << "buzz" << endl;
        } else {
            cout << i << endl;
        } 
    }
}
