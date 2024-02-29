/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 26
Problema planteado: Leer dos números y verificar si uno es múltiplo del otro o no lo es
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n1, n2;

    cout << "Ingrese los dos numeros: ";
    cin >> n1 >> n2;
    
    if (n1 % n2== 0) // si el resto es 0 es porque si es su multiplo
        cout << n1 << " si es multiplo de " << n2 << " pero "<< n2 << " no es multiplo de " << n1 << endl;            
    if (n2 % n1 == 0) // si el resto es 0 es porque si es su multiplo      
        cout << n2 << " si es multiplo de " << n1 << " pero "<< n1 << " no es multiplo de " << n2 << endl;          
    else 
        cout << n1 << " y " << n2 << " no son multiplos entre si" << endl;

    return 0;
}
