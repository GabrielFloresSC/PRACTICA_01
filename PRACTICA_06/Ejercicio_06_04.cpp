// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 4
// Problema planteado: Realizar un algoritmo recursivo que escriba al revés una cadena.

#include <iostream>
#include <string>

using namespace std;

// Prototipos de las funciones
void introducirCadena(string&);
void escribirAlReves(string, int, string&);
void desplegarCadena(string);

int main() {
    system("cls");
    string cadena;
    introducirCadena(cadena);
    string cadenaReversa;
    escribirAlReves(cadena, cadena.length() - 1, cadenaReversa);
    desplegarCadena(cadenaReversa);

    return 0;
}

void introducirCadena(string& cadena) {
    cout << "Ingrese la cadena que desea: ";
    getline(cin, cadena);
}

void escribirAlReves(string cadena, int posicion, string& cadenaReversa) {
    if (posicion < 0) {
        return; // Termina la recursividad
    }
    cadenaReversa += cadena[posicion]; //Se guarda la cadena en una nueva
    escribirAlReves(cadena, posicion - 1, cadenaReversa); //Se llama a la funcion con la nueva posicion
}

void desplegarCadena(string cadenaReversa) {
    cout << "La cadena al reves es: ";
    for (int i = 0; i < cadenaReversa.size(); i++) {
        cout << cadenaReversa[i]; //Se llama a la nueva cadena para el despliegue
    }
    cout << endl;
}
