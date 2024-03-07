// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 19
/*Problema planteado: Hacer un programa que inicialice un vector de números con valores aleatorios, y posterior
ordene los elementos de menor a mayor
*/

#include <iostream>
#include <vector>
# include <random> //Numeros random
# include <ctime> //Para que no genere los mismos numeros random
#include <algorithm> // nos permite usar sort

using namespace std;

int main()
{
    srand(time(0)); //para que los valores no se repitan
    int numero;
    cout<<"Ingrese el tamanio: ";
    cin>>numero;

    int Vector[numero];
    //declaramos el vector
    
    int LimiteInferior,LimiteSuperior;
    cout<<"Ingrese el limite inferior: " << endl;
    cin >> LimiteInferior;
    cout << "Ingrese el limite superior: " << endl;
    cin >> LimiteSuperior;


    for(int i=0; i < numero; i++)
    {                           
        Vector[i] = LimiteInferior + rand()%(LimiteSuperior-LimiteInferior); //Introducimos valores dentro del vector
    }

    sort(Vector, Vector + numero); // sort es una funcion que ordena los valores de menor a mayor

    cout << "Vector de menor a mayor: ";
    for (int i = 0; i < numero; i++) {
        cout << Vector[i] << "  ";
    }

    return 0;
}
