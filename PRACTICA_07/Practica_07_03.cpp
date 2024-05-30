// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 27/05/2024
// Número de ejercicio: 3
// Problema planteado: Escribir un programa que escriba la lista de caracteres ASCII dentro de un archivo de texto.

#include <iostream>
#include <fstream>

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
    ofstream archivo; //Escribir archivo
    archivo.open("ascii.txt"); //abrimos
    for (int i = 32; i < 255; i++) //Iniciamos en el 32 porque es el primer caracter que es legible
    {
        archivo << "ASCII " << i << ": "<< char(i) << endl; // Introducimos ascii por ascii
    }
    archivo.close();   //cerramos el archivo
}
