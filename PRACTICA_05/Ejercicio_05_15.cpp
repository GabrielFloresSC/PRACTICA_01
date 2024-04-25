// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 15
/* Problema planteado: Establecer un listado de suscriptores de una revista a través de una estructura, cuyos
datos de entrada serán los datos de cada suscriptor (Nombre, Cedula, Mes de
Inscripción, Año de Inscripción)
*/

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
//vector global
vector<string> meses = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

struct Suscriptor {
    string nombre;
    int cedula;
    int mesInscripcion;
    int anoInscripcion;
};

void ingresarDatosSuscriptores(vector<Suscriptor>& suscriptores, int cantidad);
void mostrarDatosSuscriptores(vector<Suscriptor> suscriptores);

int main() {
    vector<Suscriptor> suscriptores;
    int cantidadSuscriptores;

    cout << "Ingrese la cantidad de suscriptores: ";
    cin >> cantidadSuscriptores;
    cin.ignore(); // Limpiar el buffer para evitar errores

    ingresarDatosSuscriptores(suscriptores, cantidadSuscriptores);
    mostrarDatosSuscriptores(suscriptores);

    return 0;
}

void ingresarDatosSuscriptores(vector<Suscriptor>& suscriptores, int cantidad) {
    srand(time(NULL)); // semilla para números aleatorios

    for (int i = 0; i < cantidad; ++i) {
        Suscriptor nuevoSuscriptor;
        cout << "Ingrese el nombre del suscriptor " << i + 1 << ": ";
        getline(cin, nuevoSuscriptor.nombre);
        nuevoSuscriptor.cedula = rand() % (10000000 - 1 + 1) + 1; // Cedula aleatoria entre 10000000 y 1
        nuevoSuscriptor.mesInscripcion = rand() % (11 - 0 + 1) + 0; // Mes de inscripción aleatorio entre 11 y 0, haciendo referencia al indice del vector
        nuevoSuscriptor.anoInscripcion = rand() % (2024 - 2000 + 1) + 2000; // Año de inscripción aleatorio entre 2024 y 2000

        suscriptores.push_back(nuevoSuscriptor); //introducimos los datos al vector
    }
}

void mostrarDatosSuscriptores(vector<Suscriptor> suscriptores) {
    cout << "\nDatos de los suscriptores:" << endl;
    for (int i = 0; i < suscriptores.size(); ++i) {
        cout << "Suscriptor " << i + 1 << endl;
        cout << "Nombre: " << suscriptores[i].nombre << endl;
        cout << "Cedula: " << suscriptores[i].cedula << endl;
        cout << "Mes de Inscripcion: " << meses[suscriptores[i].mesInscripcion] << endl;
        cout << "Año de Inscripcion: " << suscriptores[i].anoInscripcion << endl << endl;
    }
}
