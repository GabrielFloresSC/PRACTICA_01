// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 24/04/2024
// Número de ejercicio: 12
/* Problema planteado: Escriba un programa que en una estructura se lleve el control de un inventario de
cintas de una tienda de video. Asegúrese de que la estructura incluya el titulo de la
cinta, la longitud de la cinta, el precio de alquiler, la fecha en que se vendió, y la
clasificación de la cinta.
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
//estructuras
struct CintaVideo {
    string titulo;
    int longitud;
    float precioAlquiler;
    string fechaVenta;
    string clasificacion;
};

//Prototipos
void agregarCintas(vector<CintaVideo>& inventario, vector<string> clasificaciones, int cantidadCintas);
void mostrarInventario(vector<CintaVideo>& inventario);

int main() {
    vector<CintaVideo> inventario;
    vector<string> clasificaciones = {"3", "7", "12", "16", "18+", "todas las edades"}; //declaramos las clasificaciones basandonos en la clasificacion por edades
    srand(time(NULL)); // semilla para números aleatorios

    int cantidadCintas;
    cout << "Ingrese el numero de cintas de video a ingresar: ";
    cin >> cantidadCintas;
    cin.ignore(); // Limpiar el buffer de entrada

    agregarCintas(inventario, clasificaciones, cantidadCintas);
    mostrarInventario(inventario);

    return 0;
}

void agregarCintas(vector<CintaVideo>& inventario, vector<string> clasificaciones, int cantidadCintas) {
    for (int i = 0; i < cantidadCintas; ++i) {
        CintaVideo cinta;
        cout << "Ingrese los datos de la cinta " << i + 1 << ":" << endl;
        cout << "Título: ";
        getline(cin, cinta.titulo);
        cinta.longitud = rand() % (180 - 60 + 1) + 60; // Longitud aleatoria entre 60 y 180 minutos, es decir 1 a 3 horas
        cout << "Precio de alquiler: ";
        cin >> cinta.precioAlquiler;
        cout << "Fecha de venta (introduzca dd/mm, incluyendo la barra): ";
        cin.ignore();
        getline(cin, cinta.fechaVenta);
        int indiceAleatorio = rand() % clasificaciones.size(); // se selecciona el indice de la clasificacion aleatoriamente y este se lo encuentra en el vector
        cinta.clasificacion = clasificaciones[indiceAleatorio];

        inventario.push_back(cinta);
    }
}

void mostrarInventario(vector<CintaVideo>& inventario) {
    cout << "Inventario de cintas de video:" << endl;
    for (int i = 0; i < inventario.size(); ++i) {
        cout << "Título: " << inventario[i].titulo << endl;
        cout << "Longitud: " << inventario[i].longitud << " minutos" << endl;
        cout << "Precio de alquiler: " << inventario[i].precioAlquiler << endl;
        cout << "Fecha de venta: " << inventario[i].fechaVenta << endl;
        cout << "Clasificación: " << inventario[i].clasificacion << endl << endl;
    }
}
