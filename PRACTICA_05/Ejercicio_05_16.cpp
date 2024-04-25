// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 16
/* Problema planteado: En una clase, asuma que hay un número de 20 estudiantes. Cada estudiante esta
registrado en los mismos cursos en un semestre. Al final del semestre, el instructor
asigna letras de calificaciones de la A a la E para todos los seis cursos de cada
estudiante. Cada uno de los seis cursos es de 3 unidades (horas crédito). El promedio
de notas de los estudiantes se calcula en una escala de 10 puntos. Para realizar esto, a
continuación se presenta las notas asociadas con cada una de las calificaciones en
letras.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Estudiante {
    string nombre;
    vector<int> calificaciones; // Utilizaremos un vector ya que nos piden 6 notas
};

Estudiante ingresarEstudiante();
double calcularPromedio(Estudiante& estudiante);
char obtenerCalificacionFinal(Estudiante& estudiante);
void desplegarEstudiante(Estudiante estudiante);

int main() {
    vector<Estudiante> estudiantes(20);

    for (int i = 0; i < 20; ++i) { //manejamos un 20 ya que asi nos lo solicita el ejercicio
        estudiantes[i] = ingresarEstudiante();
    }

    cout << "Resultados:" << endl;
    for (int i = 0; i < 20; ++i) {
        desplegarEstudiante(estudiantes[i]);
    }

    return 0;
}

Estudiante ingresarEstudiante() {
    Estudiante nuevoEstudiante;
    cout << "Ingrese el nombre del estudiante: ";
    cin >> nuevoEstudiante.nombre;
    for (int i = 0; i < 6; ++i) {
        cout << "Ingrese la calificacion del curso numero " << i+1 <<":";
        int calificacion;
        cin >> calificacion;
        nuevoEstudiante.calificaciones.push_back(calificacion); //Introducimos los datos dentro del vector de calificaciones
    }
    return nuevoEstudiante; //retornamos para que dentro de la funcion main se introduzca al vector de la estructura
}

double calcularPromedio(Estudiante& estudiante) {
    double suma = 0;
    for (int i = 0; i < 6; ++i) {
        suma += estudiante.calificaciones[i];
    }
    return suma / 6.0; //dividimos entre la cantidad de notas .0 para que salga flotante
}

char obtenerCalificacionFinal(Estudiante& estudiante) { //En esta funcion nos encargamos de asignarle una nota al estudiante dependiendo cual fue su nota
    double promedio = calcularPromedio(estudiante);
    if (promedio >= 9.5) {
        return 'A';
    } else if (promedio >= 8.5) {
        return 'B';
    } else if (promedio >= 7.5) {
        return 'C';
    } else if (promedio >= 6.5) {
        return 'D';
    } else {
        return 'E';
    }
}

//Desplegamos los datos de los estudiantes
void desplegarEstudiante(Estudiante estudiante) {
    cout << "Estudiante: " << estudiante.nombre << endl;
    cout << "Promedio: " << calcularPromedio(estudiante) << endl;
    cout << "Calificación final: " << obtenerCalificacionFinal(estudiante) << endl;
    cout << endl;
}
