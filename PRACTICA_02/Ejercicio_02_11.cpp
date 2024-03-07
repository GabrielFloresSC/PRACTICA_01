// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 11
/*Problema planteado:Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de
este arreglo determine la desviación típica.
*/

#include <iostream> 
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int Edad, ContadorEdades, Contador;
    float Media, total=0, Desviacion;
    vector <int> VectorEdades; // Introducimos un vector vacio

    ContadorEdades = 0;
    Contador = 0;

    do{ // Usamos do para meter si o si un dato como minimo
        cout << "Ingrese la edad, si quiere finalizar introduzca -1: "; 
        cin >> Edad; 
        if (Edad != -1) {  
            VectorEdades.push_back(Edad); // con esta funcion colocamos los valores dentro de un vector vacio
            ContadorEdades++;}
    } while (Edad!=-1);

    for (int i =0; i < ContadorEdades; i++){  
        Contador += VectorEdades[i]; //introducimos el valor i del vector a nuestro contador 
    }
    //Calculamos la media
    Media = Contador/ContadorEdades;
    
    for (int i =0; i <ContadorEdades; i++){ 
        total += pow(VectorEdades[i]-Media, 2); //Realizamos una suma que consta de el valor cuadrado de la diferencia de las edades dentro del vector y la media de edades y se le suma al valor total
    }

    Desviacion = sqrt(total/ContadorEdades); //La desviacion se consigue del total y la cantidad de edades que introducimos dividas y al resultado se le saca la raiz cuadrada
    cout << "La desviacion de edades es: "<< Desviacion << endl;
    
    return 0;
}
