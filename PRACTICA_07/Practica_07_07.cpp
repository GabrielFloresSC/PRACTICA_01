// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 7
/* Problema planteado: Crear un archivo de texto en donde en cada registro se guardan los siguientes datos de un
estudiante, cada campo se debe separar con el símbolo “;”:
• Nombre
• Apellidos
• Programa académico que estudia
• Nota del curso.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Definimos estructura
struct Estudiante {
    char nombre[50];
    char apellidos[50];
    char programaAcademico[50];
    double notaCurso;
};

void LlenarArchivo(string);

int main() {
    string nombreArchivo = "ListaEstudiantes.txt"; //Definimos el nombre del archivo

    LlenarArchivo(nombreArchivo);
    return 0;
}

void LlenarArchivo(string nombreArchivo) {
    ofstream archivo(nombreArchivo,ios::app); //app para introducir datos al final del texto

    Estudiante estudiante;
    cout << "Introduce el nombre del estudiante: ";
    cin.getline(estudiante.nombre, 50);
    cout << "Introduce los apellidos del estudiante: ";
    cin.getline(estudiante.apellidos, 50);
    cout << "Introduce el programa academico que estudia: ";
    cin.getline(estudiante.programaAcademico, 50);
    cout << "Introduce la nota del curso: ";
    cin >> estudiante.notaCurso; //Introducimos los datos del estudiante

    archivo << estudiante.nombre << "\t" << estudiante.apellidos << "\t" << estudiante.programaAcademico << "\t" << estudiante.notaCurso << endl; //Introducimos los datos en el archivo con una tabulacion de separacion
    archivo.close();
}
