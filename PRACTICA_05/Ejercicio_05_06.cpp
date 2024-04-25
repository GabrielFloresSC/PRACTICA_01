// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 24/04/2024
// Número de ejercicio: 6
/* Problema planteado: Desarrolle un arreglo de estructura para un programa que lea una lista de alumnos (no
se conoce la cantidad de alumnos) para cada alumno se solicitará: CI, Nombre y
apellido, Nombre de asignatura, calificación; una vez ingresada la información para
cada alumno, calcular el porcentaje de alumnos aprobados y reprobados. Deberá
indicar: cantidad de alumnos aprobados, porcentaje de aprobados, cantidad de
alumnos reprobados, porcentaje de aprobados.
*/

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Estructura
struct Alumno {
    int ci; // int ya que es un numero
    string nombre;
    string apellido;
    string asignatura; // string por ser palabras
    float calificacion; // float ya que puede ser decimal
};

// Prototipos
void ingresarAlumno(vector<Alumno>& alumnos);
void mostrarResultados(vector<Alumno> alumnos);

int main() {
    srand(time(NULL)); //semilla para que no se repitan los numeros
    vector<Alumno> alumnos; // Vector para almacenar a los alumnos
    int numAlumnos;

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> numAlumnos;

    // vemos cuantas veces se realizara la operacion
    for (int i = 0; i < numAlumnos; i++) {
        ingresarAlumno(alumnos);
    }

    mostrarResultados(alumnos);

    return 0;
}

void ingresarAlumno(vector<Alumno>& alumnos) {
    Alumno nuevoAlumno;
    cout << "Ingrese CI del alumno: ";
    cin >> nuevoAlumno.ci;
    cout << "Ingrese nombre del alumno: ";
    cin >> nuevoAlumno.nombre;
    cout << "Ingrese apellido del alumno: ";
    cin >> nuevoAlumno.apellido;
    cin.ignore();
    cout << "Ingrese nombre de la asignatura: ";
    getline(cin, nuevoAlumno.asignatura);
    nuevoAlumno.calificacion = rand() % (100-0+1)+0; // Generar calificación aleatoria entre 0 y 100
    cout << "Calificacion del alumno: " << nuevoAlumno.calificacion << endl; //desplegamos la nota generada

    alumnos.push_back(nuevoAlumno); // Agregar alumno al vector
}

void mostrarResultados(vector<Alumno> alumnos) {
    int aprobados = 0; // Contador
    int reprobados = 0; // Contador
    int totalAlumnos = alumnos.size();

    //Cotnamos cuantos aprobados y reprobados hay
    for (int i = 0; i < totalAlumnos; ++i) {
        if (alumnos[i].calificacion >= 60) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    float porcentajeAprobados = (float(aprobados) / totalAlumnos) * 100; // Utilizamos el float para que el sistema no nos despliegue una nota entera
    float porcentajeReprobados = (float(reprobados) / totalAlumnos) * 100; // Utilizamos el float para que el sistema no nos despliegue una nota entera

    cout << "Alumnos aprobados: " << aprobados << endl;
    cout << "Porcentaje de alumnos aprobados: " << porcentajeAprobados << "%" << endl;
    cout << "Alumnos reprobados: " << reprobados << endl;
    cout << "Porcentaje de alumnos reprobados: " << porcentajeReprobados << "%" << endl;
}
