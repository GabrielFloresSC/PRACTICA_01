// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 24/04/2024
// Número de ejercicio: 10
/* Problema planteado: Desarrolle una estructura que guarde los datos de los n alumnos de la materia
programación en Lenguaje C, y los muestres por pantalla, la estructura debe tener
(cedula, nombre, apellido, edad, profesión, lugar de nacimiento, dirección y teléfono).
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de la estructura Alumno
struct Alumno {
    int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugarNacimiento;
    string direccion;
    int telefono;
};

// Prototipos de funciones
void ingresarAlumnos(vector<Alumno>& alumnos);
void mostrarAlumnos(vector<Alumno>& alumnos);

int main() {
    int cantidadAlumnos;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidadAlumnos;
    srand(time(NULL));

    vector<Alumno> alumnos(cantidadAlumnos);
    cin.ignore(); // Limpiar el buffer para evitar errores
    ingresarAlumnos(alumnos); // Introducimos los datos

    cout << "\nDatos de los alumnos:" << endl;
    mostrarAlumnos(alumnos); 

    return 0;
}

void ingresarAlumnos(vector<Alumno>& alumnos) {
    for (int i = 0; i < alumnos.size(); i++) {
        cout << "Ingrese los datos del alumno " << i + 1 << ":" << endl;
        cout << "Cedula: ";
        alumnos[i].cedula = rand() % (10000000-1+1) + 1;
        cout << alumnos[i].cedula << endl;
        cout << "Nombre: ";
        cin.ignore(); // Limpiar el buffer para evitar errores
        getline(cin, alumnos[i].nombre);
        cout << "Apellido: ";
        getline(cin, alumnos[i].apellido);
        cout << "Edad: ";
        alumnos[i].edad = rand() % (25-18+1) + 18; // Generar edad aleatoria entre 18 y 25
        cout << alumnos[i].edad << endl;
        cout << "Profesion: ";
        cin.ignore();
        getline(cin, alumnos[i].profesion);
        cout << "Lugar de nacimiento: ";
        getline(cin, alumnos[i].lugarNacimiento);
        cout << "Direccion: ";
        getline(cin, alumnos[i].direccion);
        cout << "Telefono: ";
        alumnos[i].telefono = rand() % (79999999 - 60000000 + 1)+60000000; // Generar numero aleatorio entre 60000000 y 79999999
        cout << alumnos[i].telefono << endl;
    }
}

// desplegamos los datos
void mostrarAlumnos(vector<Alumno>& alumnos) {
    cout << "\nDatos de los alumnos"<<endl;
    for (int i = 0; i < alumnos.size(); i++) {
        cout << "Cedula: " << alumnos[i].cedula << endl;
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Apellido: " << alumnos[i].apellido << endl;
        cout << "Edad: " << alumnos[i].edad << endl;
        cout << "Profesion: " << alumnos[i].profesion << endl;
        cout << "Lugar de nacimiento: " << alumnos[i].lugarNacimiento << endl;
        cout << "Direccion: " << alumnos[i].direccion << endl;
        cout << "Telefono: " << alumnos[i].telefono << endl;
    }
}