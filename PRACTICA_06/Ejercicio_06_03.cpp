// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 3
// Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la
// suma de sus elementos.

#include <iostream>
#include <vector>

using namespace std;

//PROTOTIPOS
void introducirNumeros(vector<int>&);
int sumaRecursiva(const vector<int>&, int);

int main() {
    system("cls");
    int cantidadNumeros;
    cout << "Ingrese el numero de elementos del vector: ";
    cin >> cantidadNumeros;

    vector<int> numeros(cantidadNumeros);
    introducirNumeros(numeros);
    int suma = sumaRecursiva(numeros, cantidadNumeros);
    cout << "La suma de los elementos del vector es: " << suma << endl;

    return 0;
}

void introducirNumeros(vector<int>& numeros) // Funcion para introducir los datos
{
    for (int i = 0; i < numeros.size(); ++i) {
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> numeros[i];
    }
}
int sumaRecursiva(const vector<int>& numeros, int posicion)
{
    if (posicion == 0) { //Aqui terminaria la recursividad
        return 0;
    }
    return numeros[posicion - 1] + sumaRecursiva(numeros, posicion - 1); //Se va disminuyendo la posicion del numero que se desea analizar
}
