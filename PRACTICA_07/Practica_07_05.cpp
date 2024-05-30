// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 5
// Problema planteado: Copiar un fichero de texto en otro.

#include <iostream>
#include <fstream>

using namespace std;

void crearArchivoOrigen(string);
void copiarArchivo(string, string);

int main() {
    string archivoOriginal = "Original.txt"; //Creamos dos archivos uno del texto original
    string archivoCopia = "Copia.txt"; //La copia del original
    crearArchivoOrigen(archivoOriginal);
    copiarArchivo(archivoOriginal, archivoCopia);
    return 0;
}

void crearArchivoOrigen(string archivoOriginal) {
    ofstream archivo(archivoOriginal); //escribir archivo
    string texto;
    cout << "Introduce el texto para el archivo de origen:"; //Introducimos contenido al archivo
    getline(cin,texto); 
    archivo << texto << endl; //Lo guardamos en el archivo
    archivo.close(); //cerramos
}

void copiarArchivo(string archivoOriginal, string archivoCopia) {
    ifstream original(archivoOriginal); //Leer archivo
    ofstream copia(archivoCopia); //Escribir el segundo archivo
    char caracter;
    while (original.get(caracter)) { //Recorremos dato por dato y se lo almacena temporalmente en la variable caracter
        copia.put(caracter); //Copiamos caracter por caracter dentro de la copia
    }

    original.close(); //cerramos ambos archivos
    copia.close();

}

