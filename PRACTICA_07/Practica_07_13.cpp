// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 13
// Problema planteado: Escriba un programa que dados dos ficheros generados por el programa anterior y ordenados
// genere un tercer fichero que sea el resultado de mezclar de formar ordenada los dos primeros

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//Usamos la estrctura
struct Articulo {
    int codigo;
    char nombre[50];
    int existencias;
    double precio;
};

bool compararPorCodigo(Articulo &articulo1, Articulo &articulo2);
void leerArchivo(string& nombreArchivo, vector<Articulo>& articulos);
void escribirArchivo(string& nombreArchivo, vector<Articulo>& articulos);
void mezclarArchivos(string& archivo1, string& archivo2, string& archivoResultado);

int main() {
    string archivo1, archivo2, archivoResultado;
    cout << "Introduce el nombre del primer archivo ordenado (extension .dat): ";
    getline(cin, archivo1);
    cout << "Introduce el nombre del segundo archivo ordenado (extension .dat): "; //Introducimos los nombres de los registros anteriores
    getline(cin, archivo2);
    cout << "Introduce el nombre del archivo en el que deseas almacenar los datos mezclados (extension .dat): "; //nombre para el nuevo archivo
    getline(cin, archivoResultado);

    mezclarArchivos(archivo1, archivo2, archivoResultado);

    return 0;
}

bool compararPorCodigo(Articulo &articulo1, Articulo &articulo2) {
    return articulo1.codigo < articulo2.codigo; //Ordenamos de menor a mayor
}

void mezclarArchivos(string& archivo1, string& archivo2, string& archivoResultado) {
    vector<Articulo> articulos1, articulos2;
    leerArchivo(archivo1, articulos1);
    leerArchivo(archivo2, articulos2); //En una funcion leemos los datos de los archivos

    vector<Articulo> articulosResultado;
    int i = 0, j = 0;
    while (i < articulos1.size() && j < articulos2.size()) {
        if (articulos1[i].codigo < articulos2[j].codigo) {
            articulosResultado.push_back(articulos1[i]);
            i++;
        } else {
            articulosResultado.push_back(articulos2[j]);
            j++;
        }
    } //Copiamos y ordenamos todos los datos para el nuevo archivo
    while (i < articulos1.size()) {
        articulosResultado.push_back(articulos1[i]);
        i++; //Los datos que faltan los introducimos
    }
    while (j < articulos2.size()) {
        articulosResultado.push_back(articulos2[j]);
        j++;
    }

    escribirArchivo(archivoResultado, articulosResultado); //Escribimos los datos en el nuevo archivo
}

void leerArchivo(string& nombreArchivo, vector<Articulo>& articulos) {
    ifstream archivo(nombreArchivo, ios::binary);
    Articulo articulo;
    while (archivo.read((char*)&articulo, sizeof(Articulo))) {
        articulos.push_back(articulo);
    }
    archivo.close();
}

void escribirArchivo(string& nombreArchivo, vector<Articulo>& articulos) {
    ofstream archivo(nombreArchivo, ios::binary);
    for (Articulo &articulo : articulos) {
        archivo.write((char*)&articulo, sizeof(Articulo));
    }
    archivo.close(); //Escribimos los datos y cerramos
}