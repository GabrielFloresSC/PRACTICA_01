// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 13
/*Problema planteado: Almacenar en un arreglo los n primeros números primos

*/
#include <iostream>
#include <vector>

using namespace std;

int main() {

    int CantidadDePrimos;
    cout << "Ingrese la cantidad de numeros primos que desea: ";
    cin >> CantidadDePrimos;

    vector<int> VectorPrimos;

    int num = 2; //Primer primo
    while (VectorPrimos.size() < CantidadDePrimos) {
        bool Primo = true;
        for (int i = 2; i < num; ++i) {
            if (num % i == 0) {
                Primo = false; // Si no es primo el valor no se introduce
                break;
            }
        }

        if (Primo) {
            VectorPrimos.push_back(num);  //Push back para introducir los valores dentro del vector
        }

        ++num;

    }

    for (int ValorImpresion : VectorPrimos) { //Al manejar este for los valores del vector se van imprimiendo en orden
        cout << ValorImpresion << " - ";
    }

    return 0;
}
