// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 14
/*Problema planteado: Un arreglo contiene números al azar entre N y M, crear un segundo arreglo que contenga
los números capicúa contenidos en el primero
*/
#include <iostream>
#include <vector>
#include <cstdlib> //Dentro de esta libreria esta el random tambien
#include <ctime>

using namespace std;

int main() {
    int LimiteInferior, LimiteSuperior, CantidadNumeros;
    cout << "Ingrese el valor del limite inferior" << endl;
    cin >> LimiteInferior;
    cout << "Ingrese el valor del limite superior" << endl;
    cin >> LimiteSuperior;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> CantidadNumeros;

    srand(time(0)); // Inicializamos la semilla del generador de números aleatorios

    vector<int> capicuas; //Vector vacio

    for (int i = 0; i < CantidadNumeros; ++i) {
        int numero = rand() % (LimiteSuperior - LimiteInferior + 1) + LimiteInferior;
        int NumeroRevez = 0; //Controlador para cuando demos la vuelta
        int NumeroNormal = numero; // Copiamos el valor original

        while (numero > 0) {
            int digit = numero % 10;
            NumeroRevez = NumeroRevez * 10 + digit;
            numero /= 10;
        }

        if (NumeroRevez == NumeroNormal) {
            capicuas.push_back(NumeroNormal); // verificamos si son iguales y lo introducimos al vector
        }
    }

    cout << "Los numeros capicuos que se generaron son: ";
    if (capicuas.empty ()){
        cout << "No hay capicuas";
    }
    else{
        for (int ValorImpresion : capicuas) {
            cout << ValorImpresion << " - ";
        }
    }

    return 0;
}
