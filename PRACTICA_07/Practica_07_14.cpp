// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 14
/* Problema planteado: Escriba un programa que tome como entrada el fichero del ejercicio 4 y una condición sobre el
campo Precio. La condición podrá ser:
Precio mayor o igual a 100 o cualquier otro dato ingresado por teclado.
Este programa debe generar como salida un fichero llamado "salida.dat" que contenga todos
aquellos artículos para los que se cumple la condición de entrada.
Mostrar el archivo de salida “salida.dat”
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Articulo {
    int codigo;
    char nombre[50];
    int existencias;
    double precio;
};

void leerArchivo(string& nombreArchivo, vector<Articulo>& articulos);
void escribirArchivo(string& nombreArchivo, vector<Articulo>& articulos);
vector<Articulo> filtrarArticulos(vector<Articulo>& articulos, double precioCondicion);

int main() {
    string nombreArchivoEntrada, nombreArchivoSalida = "salida.dat";
    cout << "Introduce el nombre del archivo a leer (extension .dat): "; //escogemos que archivo vamos a leer
    getline(cin, nombreArchivoEntrada);

    vector<Articulo> articulos;
    leerArchivo(nombreArchivoEntrada, articulos); //leemos el archivo

    double precioCondicion;
    cout << "Introduce el precio para la condición: ";
    cin >> precioCondicion; // Introducimos el precio de la condicion a cumplir

    vector<Articulo> articulosCumplenCondicion = filtrarArticulos(articulos, precioCondicion);

    escribirArchivo(nombreArchivoSalida, articulosCumplenCondicion);

    return 0;
}

void leerArchivo(string& nombreArchivo, vector<Articulo>& articulos) {
    ifstream archivo(nombreArchivo, ios::binary); //Definimos que el archivo es del tipo binario
    Articulo articulo;
    while (archivo.read((char*)&articulo, sizeof(Articulo))) {
        articulos.push_back(articulo); //Leemos todos los datos que esten dentro del archivo
    }
    archivo.close(); //cerramos el archivo
}

void escribirArchivo(string& nombreArchivo, vector<Articulo>& articulos) {
    ofstream archivo(nombreArchivo, ios::binary); //Definimos que es binario
    for (Articulo &articulo : articulos) {
        archivo.write((char*)&articulo, sizeof(Articulo)); //Escribimos dentro del nuevo archivo los datos
    }

    archivo.close();
}

vector<Articulo> filtrarArticulos(vector<Articulo>& articulos, double precioCondicion) {
    vector<Articulo> articulosFiltrados;
    for (Articulo &articulo : articulos) {
        if (articulo.precio >= precioCondicion) {
            articulosFiltrados.push_back(articulo);
        }
    }
    return articulosFiltrados; //Vemos si se cumple la condicion impuesta y la colocamos dentro de un vector que se introducira al nuevo archivo
}