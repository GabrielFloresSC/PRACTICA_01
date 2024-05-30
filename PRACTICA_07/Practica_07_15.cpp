// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 15
// Problema planteado: Escriba un programa que tenga como entrada un fichero que contenga un texto y dé como
// resultado una estadística del número de palabras.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int contarPalabras(string linea);
bool Separadores(char caracter);
void ingresarTexto(string nombreArchivo);

int main() {
    string nombreArchivo = "TextoParaContar.txt"; // Definimos el nombre del archivo

    ingresarTexto(nombreArchivo);

    ifstream archivo(nombreArchivo);
    string linea;
    int totalPalabras = 0;

    while (getline(archivo, linea)) {
        totalPalabras += contarPalabras(linea);// recorremos linea por linea para realizar el conteo
    }

    archivo.close();

    cout << "Total de palabras: " << totalPalabras << endl;

    return 0;
}
void ingresarTexto(string nombreArchivo) {
    ofstream archivoEntrada(nombreArchivo);

    string linea;
    cout << "Introduzca el texto (deje vacio el espacio para terminar):" << endl;

    while (getline(cin, linea) && !linea.empty()) {
        archivoEntrada << linea << endl; //Introducimos cuantas lineas de texto querramos hasta dejar una en blanco
    }

    archivoEntrada.close();
}

int contarPalabras(string linea) {
    int contador = 0;
    bool switchPalabra = false;

    for (char caracter : linea) { //Recorremos caracter por caracter
        if (Separadores(caracter)) {
            if (switchPalabra) {
                switchPalabra = false;
                contador++; //Si se cumple la condicion significa que llegamos al limite de una palabra o un separador
            }
        } else {
            switchPalabra = true;
        }
    }

    if (switchPalabra) {
        contador++; //Para el final de la linea
    }

    return contador; //Devolvemos el contador
}

bool Separadores(char caracter) {
    string listaSeparadores = " \t\n,.:;!?()[]{}\"'"; //Nombrarmos todos los separadores que se pueden incluir

    for (char separador : listaSeparadores) {
        if (caracter == separador) { //Comparamos para ver si esta alguno de estos
            return true;
        }
    }

    return false;
}
