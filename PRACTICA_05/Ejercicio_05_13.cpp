// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 24/04/2024
// Número de ejercicio: 13
/* Problema planteado: Desarrolle un programa que lleve el control de los nombres, edades, calificaciones y
coeficiente intelectual de 10 estudiantes. Capture los datos desde el teclado utilizando
un ciclo for, imprime los datos en la pantalla cuando se termine de capturar los
mismos. Emplear Arreglo de Estructuras.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float calificacion;
    float coeficienteIntelectual;
};

void introducirDatosEstudiantes(vector<Estudiante>& estudiantes);
void mostrarDatosEstudiantes(vector<Estudiante> estudiantes);

int main() {
    vector<Estudiante> estudiantes;

    introducirDatosEstudiantes(estudiantes);
    mostrarDatosEstudiantes(estudiantes);

    return 0;
}

void introducirDatosEstudiantes(vector<Estudiante>& estudiantes) {
    for (int i = 0; i < 10; ++i) { //Manejamos 10 ya que asi nos lo solicita el problema
        Estudiante nuevoEstudiante;
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        getline(cin, nuevoEstudiante.nombre);
        cout << "Ingrese la edad del estudiante " << i + 1 << ": ";
        cin >> nuevoEstudiante.edad;
        cout << "Ingrese la calificación del estudiante " << i + 1 << ": ";
        cin >> nuevoEstudiante.calificacion;
        cout << "Ingrese el coeficiente intelectual del estudiante " << i + 1 << ": ";
        cin >> nuevoEstudiante.coeficienteIntelectual;
        cin.ignore(); //Limpiamos el buffer para que no ocurran errores
        estudiantes.push_back(nuevoEstudiante);
    }
}

void mostrarDatosEstudiantes(vector<Estudiante> estudiantes) {
    cout << "\nDatos de los estudiantes:" << endl; //Manejamos 10 ya que asi nos lo solicita el problema
    for (int i = 0; i < 10; ++i) {
        cout << "Estudiante " << i + 1 << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Calificación: " << estudiantes[i].calificacion << endl;
        cout << "Coeficiente Intelectual: " << estudiantes[i].coeficienteIntelectual << endl << endl;
    }
}
