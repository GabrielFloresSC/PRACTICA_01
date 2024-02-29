/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 29
Problema planteado: Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos
*/
#include <iostream>

using namespace std;

int main(){
    int n, v, c;
    cout << "ingrese un numero:" <<endl;
    cin >> n;

    v = 1; 
    c = 1;

    // estos valores son equivalente a los primeros dos numeros

    while (c <= n){
        cout << v <<  ", ";
        if (c >= 2){
                v = v * 2; //cumplimos con la secuencia
        }
        c = c +1; //controlador 
    } 
    return 0;
}
