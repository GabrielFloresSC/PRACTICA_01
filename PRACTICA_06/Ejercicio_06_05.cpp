// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 5
// Problema planteado: Realizar un algoritmo recursivo para comparar si dos vectores son iguales.

#include <iostream>
#include <vector>

using namespace std;

//PROTOTIPOS
void introducirNumeros(vector<int>&);
bool compararVectores(vector<int>, vector<int>, int);

int main() {
    system("cls");
    int tamanio;
    cout << "Ingrese el tamanio de los vectores: ";
    cin >> tamanio;

    vector<int> vector1(tamanio);
    vector<int> vector2(tamanio);

    cout << "Ingrese los elementos del primer vector" << endl;
    introducirNumeros(vector1);
    cout << "Ingrese los elementos del segundo vector" << endl;
    introducirNumeros(vector2);

    if (compararVectores(vector1, vector2, tamanio - 1)) { //Se compara en caso de que los dos vectores son iguales se despliegue el primer mensaje sino el segundo
        cout << "Los vectores son iguales." << endl;
    } else {
        cout << "Los vectores no son iguales." << endl;
    }

    return 0;
}

void introducirNumeros(vector<int>& vector) // Funcion para introducir los datos
{
    for (int i = 0; i < vector.size(); ++i) {
        cout << "Ingrese el numero " << i+1 << ": ";
        cin >> vector[i];
    }
}

bool compararVectores(vector<int> vec1, vector<int> vec2, int posicion) //Funcion bool ya que se pide si son iguales o no
{
    if (posicion < 0) {
        return true; //En caso de llegar al final si son iguales
    }
    if (vec1[posicion] != vec2[posicion]) {
        return false; // comparamos si son iguales en caso de que no se devuelve un false
    }
    return compararVectores(vec1, vec2, posicion - 1); //vamos reduciendo la posicion de los vectores
}