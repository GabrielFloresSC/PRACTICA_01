// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 06/03/2024
// Numero de ejercicio: 6
// Problema planteado: Dados dos arreglos constantes de igual tamanio, generar un tercer arreglo con los elementos
// intercalados.

#include <iostream>
#include <vector>

using namespace std;
int main() {
    
    int Tamanio;
    cout << "Introduzca el tamanio que tendran ambos vectores: ";
    cin >> Tamanio;

    int Vector1[Tamanio];
    int Vector2[Tamanio];
    int Vector3[2 * Tamanio];
    //creamos los vectores

    
    for (int i = 0; i < Tamanio; ++i) {
        cout << "Introduzca el valor " << i + 1  << " del primer vector: ";
        cin >> Vector1[i];
    }

    for (int i = 0; i < Tamanio; ++i) {
        cout << "Introduzca el valor " << i + 1  << " del segundo vector: ";
        cin >> Vector2[i];
    }
    // Introducimos los valores de los dos vectores

    for (int i = 0; i < Tamanio; ++i) {
        Vector3[2 * i] = Vector1[i];
        Vector3[2 * i + 1] = Vector2[i];
    }
    //Intercalamos los numeros dentro del tercer vector

    cout << "El vector intercalado seria: " << endl;
    for (int i = 0; i < 2 * Tamanio; ++i) {
        if (i < (Tamanio * 2 - 1))
        {
            cout << Vector3[i] << " - ";
        }
        else{
            cout << Vector3[i];
        }
    }

    return 0;
}
