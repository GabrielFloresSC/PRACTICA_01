// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 17
/* Problema planteado: Establezca una estructura para almacenar datos relativos a los N libros o revistas
científicas de una biblioteca. Por cada libro o revista científica, mostrar la siguiente
información:
a) Numero de referencia.
b) Titulo
c) Nombre del autor
d) Editorial
e) Clase de publicación (libro o revista)
f) Numero de edición (solo libros)
g) Año de publicación (solo libros)
h) Nombre de la revista (solo revistas)
*/

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Publicacion {
    int numeroReferencia;
    string titulo;
    string nombreAutor;
    string editorial;
    int clasePublicacion; 
    int numeroEdicion;
    int anoPublicacion; 
    string nombreRevista;
};

void capturarDatosPublicaciones(vector<Publicacion>& publicaciones, int cantidad);
void mostrarDatosPublicaciones(vector<Publicacion> publicaciones);

int main() {
    vector<Publicacion> publicaciones;
    int cantidadPublicaciones;

    cout << "Ingrese la cantidad de libros o revistas: ";
    cin >> cantidadPublicaciones;
    cin.ignore(); // Limpiar el buffer para evitar errores

    capturarDatosPublicaciones(publicaciones, cantidadPublicaciones);
    mostrarDatosPublicaciones(publicaciones);

    return 0;
}

void capturarDatosPublicaciones(vector<Publicacion>& publicaciones, int cantidad) {
    srand(time(NULL)); //semilla para números aleatorios

    for (int i = 0; i < cantidad; ++i) {
        Publicacion publicacion;
        cout << "Ingrese el numero de referencia de la publicacion " << i + 1 << ": ";
        cin >> publicacion.numeroReferencia;
        cin.ignore(); // Limpiar el buffer
        cout << "Ingrese el titulo de la publicacion: ";
        getline(cin, publicacion.titulo);
        cout << "Ingrese el nombre del autor: ";
        getline(cin, publicacion.nombreAutor);
        cout << "Ingrese la editorial: ";
        getline(cin, publicacion.editorial);
        cout << "Ingrese el tipo de publicacion (0 para libro y 1 para revista): ";
        cin >>publicacion.clasePublicacion; // (0 para libro y 1 para revista)

        if (publicacion.clasePublicacion == 0) { // en caso de ser 0 se entiende que es un libro
            publicacion.numeroEdicion = rand() % (10 - 1 + 1) + 1; // Generar numero de edicion entre 1 y 10
            publicacion.anoPublicacion = rand() % (2024 - 1440 + 1) + 1440; // Generar año de publicacion entre 1440 y 2024
        } else {
            cout << "Ingrese el nombre de la revista: ";
            cin.ignore();
            getline(cin, publicacion.nombreRevista);
        }

        publicaciones.push_back(publicacion);
    }
}

void mostrarDatosPublicaciones(vector<Publicacion> publicaciones) {
    cout << "\nDatos de las publicaciones:" << endl;
    for (int i = 0; i < publicaciones.size(); ++i) {
        cout << "Publicacion " << i + 1 << endl;
        cout << "Numero de referencia: " << publicaciones[i].numeroReferencia << endl;
        cout << "Titulo: " << publicaciones[i].titulo << endl;
        cout << "Nombre del autor: " << publicaciones[i].nombreAutor << endl;
        cout << "Editorial: " << publicaciones[i].editorial << endl;
        cout << "Clase de publicacion: ";
        if (publicaciones[i].clasePublicacion == 0) { //En el caso de que haya introducido el usuario se desplegara una cosa o la otra
            cout << "Libro" << endl;
            cout << "Numero de edicion: " << publicaciones[i].numeroEdicion << endl;
            cout << "Ano de publicacion: " << publicaciones[i].anoPublicacion << endl;
        } else {
            cout << "Revista" << endl;
            cout << "Nombre de la revista: " << publicaciones[i].nombreRevista << endl;
        }
        cout << endl;
    }
}
