// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 06/03/2024
// Numero de ejercicio: 1
// Problema planteado: Almacenar un vector de tamaño N, con números al azar entre A y B, e imprima la suma de
//los componentes de índice par y la resta de los componentes de índice impar.


#include <iostream>
#include <vector>
# include <random> //Numeros random
# include <ctime> //Para que no genere los mismos numeros random

using namespace std;

int main()
{
    srand(time(0)); //para que los valores no se repitan
    int numero, valor, suma, resta;
    cout<<"Ingrese el tamanio: ";
    cin>>numero;

    int Vector[numero];
    //declaramos el vector
    
    int LimiteInferior,LimiteSuperior;
    cout<<"Ingrese el limite inferior: " << endl;
    cin >> LimiteInferior;
    cout << "Ingrese el limite superior: " << endl;
    cin >> LimiteSuperior;

    suma = 0;
    resta = 0;

    for(int i=0; i < numero; i++)
    {                           
        Vector[i] = LimiteInferior + rand()%(LimiteSuperior-LimiteInferior); //Introducimos valores dentro del vector

        if(Vector[i] % 2 == 0) //Detectamos si es par o impar
            suma+=Vector[i];
        else
            resta-=Vector[i];
        cout << "El valor "<< i + 1 << " es: " << Vector[i] << endl; //muestra los numeros 
    }

    cout << "La suma de los pares es: "<< suma <<endl;
    cout << "La resta de los mpares es: "<< resta <<endl;

    return 0;
}
