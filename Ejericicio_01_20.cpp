/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 20
Problema planteado: Escribir un programa que permita adivinar un número que sea genere internamente al
azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a
aproximaciones, para lo cual se dispone de 5 intentos. Veamos un ejemplo:
Supongamos que el número “pensado” por la computadora sea el 42.
Salida del programa:
Estoy pensando un número entre 0 y 50
Intento 1
? 25
El numero esta entre 25 y 50
Intento 2
? 34
El numero esta entre 34 y 50
Intento 3
? 45
El numero esta entre 34 y 45
Intento 4
? 40
El numero esta entre 40 y 45
Intento 5
? 42
Felicitaciones… Adivinaste el número
*/

#include <iostream>
#include <random> // libreria para usar rand

using namespace std;

int main (){

    int numero = rand() % (50); //para tener un valor aleatorio
    int limiteinferior, limitesuperior;

    limiteinferior = 0;
    limitesuperior = 50;

    for (int i = 1; i <= 5; i++)
    {
        cout<<"Estoy pensando en un numero entre " << limiteinferior << " y " <<limitesuperior <<endl;
        cout << "intento " << i << endl;
        int intento;
        cin >> intento;
        if (intento == numero){
            cout << "felicidades... adivinaste el numero" << endl;
            break; //cortar los intentos al adivinar
            }
            else if (intento > numero)
            limitesuperior = intento;
            else if (intento < numero)
            limiteinferior = intento;
    }
    
    return 0;
}
