// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 27/05/2024
// Número de ejercicio: 1
// Problema planteado: Escribir un programa que escriba “hola mundo” dentro de un archivo llamado hola.txt

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void EscribirArchivo(); 

int main()
{
    system("cls");
    EscribirArchivo();
    return 0;
}

void EscribirArchivo()
{
    ofstream archivo; //Funcion donde se usara un ofstream para anaidair informacion a un archivo
    archivo.open("hola.txt"); //Abrimos o creamos el archivo
    archivo << "hola mundo"; //Introducimos lo que queremos
    archivo.close();   //Cerramos el archivo
}