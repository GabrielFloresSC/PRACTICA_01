/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 27
Problema planteado: Leer un número entero y mostrarlo con las cifras al revés.
*/

#include <iostream>

using namespace std;

int main ()
{
    int numero, contador, numeroi;
    
    cout << "Ingrese el numero que desea invertir" << endl;
    cin >> numero;
    
    numeroi = 0;

    while  (numero != 0)
    {
        contador = numero % 10; // escogemos el ultimo digito
        numeroi = numeroi * 10 + contador; // lo colocamos en uno nuevo
        numero = numero / 10; // se quita un valor
    }
    
    cout << "La version invertida es: " << numeroi << endl;
    return 0;
}
