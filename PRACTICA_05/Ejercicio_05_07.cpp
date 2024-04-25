// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 24/04/2024
// Número de ejercicio: 7
/* Problema planteado: Escriba un programa que en una estructura se lleve el control de un inventario de
cintas de una tienda de video. Asegúrese de que la estructura incluya el título de la
cinta, la longitud de la cinta (tiempo), el precio de alquiler, existencia disponible para
venta y la clasificación de la cinta (acción, terror, infantil, drama, ficción, aventura,
documental). Una vez ingresada la información de cada cinta mostrar resumen de
cuántas cintas por clasificación se tiene.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// estructuras
struct Cinta {
    string titulo;
    float longitud;
    float precioAlquiler;
    int existencia;
    string clasificacion;
};

// PROTOTIPOS
void ingresarCinta(vector<Cinta>& inventario);
void mostrarResumen(vector<Cinta> inventario);
//Declaramos el vector de manera global
vector<string> clasificaciones = {"accion", "terror", "infantil", "drama", "ficcion", "aventura", "documental"};

int main() {
    vector<Cinta> inventario; // Vector para almacenar las cintas
    int cantidadCintas;

    cout << "Ingrese la cantidad de cintas: ";
    cin >> cantidadCintas;

    for (int i = 0; i < cantidadCintas; i++) {
        ingresarCinta(inventario);
    }

    mostrarResumen(inventario);

    return 0;
}

void ingresarCinta(vector<Cinta>& inventario) {
    Cinta nuevaCinta;
    cout << "Ingrese el titulo de la cinta: ";
    cin.ignore(); 
    getline(cin, nuevaCinta.titulo);
    cout << "Ingrese la longitud de la cinta (en minutos): ";
    cin >> nuevaCinta.longitud;
    cout << "Ingrese el precio de alquiler: ";
    cin >> nuevaCinta.precioAlquiler;
    cout << "Ingrese cuantas cintas tiene la tienda: ";
    cin >> nuevaCinta.existencia;

    cout << "Seleccione la clasificacion de la cinta(seleccion el indice):" << endl; //Desplegamos cada clasificacion para que el usuario sepa que debe escribir
    for (int i = 0; i < clasificaciones.size(); i++) {
        cout << i + 1 << ". " << clasificaciones[i] << endl;
    }
    int opcion;
    cin >> opcion; //El usuario ingrese el numero de la clasificacion
    nuevaCinta.clasificacion = clasificaciones[opcion - 1]; // le restamos uno para que corresponda a la posicion

    inventario.push_back(nuevaCinta);
}

void mostrarResumen(vector<Cinta> inventario) {
    vector<int> resumen(clasificaciones.size(), 0); // vector para almacenar la cantidad de cada cinta por su calificacion

    for (int i = 0; i < inventario.size(); ++i) {
        for (int j = 0; j < clasificaciones.size(); ++j) {
            if (inventario[i].clasificacion == clasificaciones[j]) {
                resumen[j] += inventario[i].existencia; // Sumamos todas las peliculas que tienen la misma clasificacion
                break;
            }
        }
    }

    cout << "\nResumen de cintas por clasificacion:" << endl;
    for (int i = 0; i < clasificaciones.size(); ++i) {
        cout << clasificaciones[i] << ": " << resumen[i] << " cintas\n"; //Mostramos que clasificacion es y cuantas cintas hay
    }
}
