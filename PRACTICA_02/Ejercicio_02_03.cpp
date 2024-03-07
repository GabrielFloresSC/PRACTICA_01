// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 06/03/2024
// Numero de ejercicio: 3
// Problema planteado: Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el
// rango de A - B y determine cuántos de estos elementos son números primos

#include <iostream>
#include <vector>
# include <random> //Numeros random
# include <ctime> //Para que no genere los mismos numeros random

using namespace std;

int main() {

    int LimiteInferior, LimiteSuperior, Primos;
    Primos = 0;

    srand(time(0));

    cout<<"Ingrese el limite inferior: " << endl;
    cin >> LimiteInferior;
    cout << "Ingrese el limite superior: " << endl;
    cin >> LimiteSuperior;

    int Vector[50];
    for (int i = 0; i < 50; i++) {
        Vector[i] = LimiteInferior + rand() % (LimiteSuperior - LimiteInferior);

        if (Vector[i] >= 2 && (Vector[i] % 2 != 0 || Vector[i] == 2)) //Verificamos que sea primo
        {
            int Switch = 1;

            for (int j = 3; j * j <= Vector[i]; j += 2) // Aqui hacemos que solo se verifiquen los numeros impares 
            {
                if (Vector[i] % j == 0) 
                {
                    Switch = 0;
                    break;
                }
            }
            if (Switch) 
            {
                Primos ++;
            }
        }
        cout << Vector [i] << "  ";
    }

    cout << "Existen " << Primos << " numeros primos en el rango propuesto"<< endl;

    return 0;
}
