// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 27/05/2024
// Número de ejercicio: 2
// Problema planteado: Escribir un programa que lea el archivo creado en el ejercicio anterior y muestre por pantalla su contenido.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void LeerArchivo();

int main()
{
    system("cls");
    LeerArchivo();
    return 0;
}

void LeerArchivo()
{
    ifstream archivo; //Funcion con ifstream para leer lo que esta dentro de un archivo
    archivo.open("hola.txt"); // abrimos archivo
    string leer; // Un string para guardar el contenido del archivo
    getline(archivo, leer); // copiamos la linea del archivo a la variable
    cout << leer <<endl; // desplegamos lo leido
    archivo.close();    // cerramos archivo
}
