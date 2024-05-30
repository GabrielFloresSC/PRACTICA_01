// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 12
/* Problema planteado: Codifique un programa que cree un fichero para contener los datos relativos a los artículos de
un almacén.
Para cada artículo habrá de guardar la siguiente información:
• Código del artículo (Numérico)
• Nombre del artículo (Cadena de caracteres)
• Existencias actuales (Numérico)
• Precio (Numérico decimal).
Se deberán pedir datos de cada artículo por teclado hasta que como código se teclee el código
0.
El fichero se habrá de crear ordenado por el código del artículo*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Articulo {
    int codigo;
    char nombre[50];
    int existencias;
    double precio;
};

bool ordenarPorCodigo(Articulo &articulo1, Articulo &articulo2);
void introducirDatos(vector<Articulo> &articulos);


int main() {
    vector<Articulo> articulos; //Registraremos todos los datos dentro de un vector
    string nombreArchivo;
    cout << "Introduce el nombre del archivo .dat: ";
    getline(cin, nombreArchivo);

    introducirDatos(articulos);
    sort(articulos.begin(), articulos.end(), ordenarPorCodigo); //Llamamos a la funcion comparar por codigo 

    ofstream archivo(nombreArchivo, ios::binary);

    for (Articulo &articulo : articulos) {
        archivo.write((char*)&articulo, sizeof(Articulo));
    }
    
    archivo.close();
    
    return 0;
}

bool ordenarPorCodigo(Articulo &articulo1, Articulo &articulo2) {
    return articulo1.codigo < articulo2.codigo; //Los ordenamos de menor a mayor
}

void introducirDatos(vector<Articulo> &articulos) {
    Articulo nuevoArticulo;
    do {
        cout << "Introduce el codigo del articulo (0 para terminar): ";
        cin >> nuevoArticulo.codigo; //Cuando el cliente introduzca 0 se cancelará el proceso
        
        cout << "Introduce el nombre del articulo: ";
        cin.ignore();
        cin.getline(nuevoArticulo.nombre, sizeof(nuevoArticulo.nombre));
        
        cout << "Introduce las existencias actuales: ";
        cin >> nuevoArticulo.existencias;
        cout << "Introduce el precio: ";
        cin >> nuevoArticulo.precio;
        articulos.push_back(nuevoArticulo); //Lo ponemos dentro del vector
    } while (nuevoArticulo.codigo != 0);
}