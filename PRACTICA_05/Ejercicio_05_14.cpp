// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 24/04/2024
// Número de ejercicio: 14
/* Problema planteado: Desarrolle un programa que en una estructura guarde los datos de los N alumnos de la
Asignatura Programación en Lenguaje C++; y los imprima, la estructura debe tener
(Cedula, nombre, apellido, edad, profesión, lugar de nacimiento, dirección, teléfono).
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Alumno {
    long int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugarNacimiento;
    string direccion;
    long int telefono;
};

void capturarDatosAlumnos(vector<Alumno>& alumnos, int cantidad);
void mostrarDatosAlumnos(vector<Alumno> alumnos);

int main() {
    vector<Alumno> alumnos;
    int cantidadAlumnos;

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidadAlumnos;
    cin.ignore(); // Limpiar el buffer de entrada

    capturarDatosAlumnos(alumnos, cantidadAlumnos);
    mostrarDatosAlumnos(alumnos);

    return 0;
}

void capturarDatosAlumnos(vector<Alumno>& alumnos, int cantidad) {
    srand(time(NULL)); // Inicializar la semilla para números aleatorios

    for (int i = 0; i < cantidad; ++i) {
        Alumno nuevoAlumno;
        nuevoAlumno.cedula = rand() % (10000000 - 1 + 1) + 1; // Cedula aleatoria entre 10000000 y 1
        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        getline(cin, nuevoAlumno.nombre);
        cout << "Ingrese el apellido del alumno " << i + 1 << ": ";
        getline(cin, nuevoAlumno.apellido);
        nuevoAlumno.edad = rand() % (25 - 18 + 1) + 18; // Edad aleatoria entre 25 y 18
        cout << "Ingrese la profesion del alumno " << i + 1 << ": ";
        getline(cin, nuevoAlumno.profesion);
        cout << "Ingrese el lugar de nacimiento del alumno " << i + 1 << ": ";
        getline(cin, nuevoAlumno.lugarNacimiento);
        cout << "Ingrese la direccion del alumno " << i + 1 << ": ";
        getline(cin, nuevoAlumno.direccion);
        nuevoAlumno.telefono = rand() % (79999999 - 60000000 + 1) + 60000000; // Telefono aleatorio entre 79999999 y 60000000

        alumnos.push_back(nuevoAlumno); //introducimos dentro del vector
    }
}
//Desplegamos los datos
void mostrarDatosAlumnos(vector<Alumno> alumnos) {
    cout << "\nDatos de los alumnos:" << endl;
    for (int i = 0; i < alumnos.size(); ++i) {
        cout << "Alumno " << i + 1 << endl;
        cout << "Cedula: " << alumnos[i].cedula << endl;
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Apellido: " << alumnos[i].apellido << endl;
        cout << "Edad: " << alumnos[i].edad << endl;
        cout << "Profesion: " << alumnos[i].profesion << endl;
        cout << "Lugar de nacimiento: " << alumnos[i].lugarNacimiento << endl;
        cout << "Direccion: " << alumnos[i].direccion << endl;
        cout << "Telefono: " << alumnos[i].telefono << endl << endl;
    }
}