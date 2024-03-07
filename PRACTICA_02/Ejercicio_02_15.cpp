// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 15
/*Problema planteado: Realizar un programa que defina un vector de 10 enteros, a continuación lo inicialice con
valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector
junto con su cuadrado y su cubo
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() 
{

    srand((unsigned)time(0)); //Unsigned ya que solo se manejara numeros mayores a 0

    vector<int> Vector(10); //Vector vacio

    for (int i = 0; i < 10; ++i) {
        Vector[i] = rand() % 10 + 1; //Se introducen los valores 
    }

    for (int i = 0; i < 10; ++i) { //For para imprimir el numero, su cuadrado y su cubo
        cout << "El numero original es: " << Vector[i] << ", su cuadrado es: " << pow(Vector[i],2) << " y su cubo es: " << pow(Vector[i],3) << endl;
    }

    return 0;
}
