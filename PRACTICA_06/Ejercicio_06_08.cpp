// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 8
// Problema planteado: Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es simétrica

#include <iostream>
#include <string>

using namespace std;

//PROTOTIPOS
bool Simetrica(string cadena, int inicio, int fin);
void introducirCadena(string& cadena);

int main() {
    system("cls");
    string cadena;
    introducirCadena(cadena);

    if (Simetrica(cadena, 0, cadena.length() - 1)) { //Se despliegue un mensaje u otro si se cumple o no. Los valores de las posiciones reflejan el incio y el fin de la cadena
        cout << "La cadena es simetrica." << endl;
    } else {
        cout << "La cadena no es simetrica." << endl;
    }

    return 0;
}

void introducirCadena(string& cadena) {
    cout << "Ingrese la cadena que desea: ";
    getline(cin, cadena);
}

bool Simetrica(string cadena, int inicio, int final){ //Funcion bool ya que nos pide verificar
    if (inicio >= final) {
        return true; // En caso de cumplir con cada posicion se dice que es verdadero
    }
    if (cadena[inicio] != cadena[final]) {
        return false; // Si los caracteres en las posiciones no son iguales se termmina el programa
    }
    return Simetrica(cadena, inicio + 1, final - 1); //Se llama de manera recursiva
}
