// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 8
// Problema planteado: Permitir obtener un listado en pantalla, de los datos que contiene el archivo creado en el punto
//anterior. Al terminar el listado se debe informar el número de registros contenidos en el archivo.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//Definimos la estructura
struct Estudiante {
    char nombre[50];
    char apellidos[50];
    char programaAcademico[100];
    double notaCurso;
};

void LeerArchivo(string);

int main() {
    string nombreArchivo = "ListaEstudiantes.txt"; //definimos el nombre del archivo

    LeerArchivo(nombreArchivo);

    return 0;
}

void LeerArchivo(string nombreArchivo) {
    ifstream archivo(nombreArchivo);//ifstream para leer los datos

    Estudiante estudiante;
    int contador = 0; //Contador de la cantidad de alumnos
    while (archivo.getline(estudiante.nombre, 50, '\t')) {
        archivo.getline(estudiante.apellidos, 50, '\t');
        archivo.getline(estudiante.programaAcademico, 100, '\t');
        archivo >> estudiante.notaCurso;
        archivo.ignore(); //Copiamos en variables la informacion en el archivo

        cout << "Nombre: " << estudiante.nombre << "\t Apellidos: " << estudiante.apellidos << "\tPrograma Academico: " << estudiante.programaAcademico << "\tNota: " << estudiante.notaCurso << endl;
        contador++; // contamos uno por uno
    }

    cout << "Cantidad de registros en el archivo: " << contador << endl;
    archivo.close(); //Desplegamos y cerramos
}
