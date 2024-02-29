/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 25
Problema planteado: Calcular la siguiente sucesión 2- 3/2 + 4/3 - 5/4 + ... +- (n+1)/n
*/

#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int numero;
    float resultado;

    cout << "Ingrese la cantidad de sucesiones: " <<  endl;
    cin >> numero;

    resultado = 0.0;

    for (float i = 1.0 ; i <= numero; i++){
        resultado = resultado + pow((-1),(i+1)) * ((i+1) / i); //el pow -1 es para ir intercalando entre los simbolos el resto es como se aplica la formula al programa
    }
    cout << " El resultado es: " << resultado << endl;
    return 0;
}
