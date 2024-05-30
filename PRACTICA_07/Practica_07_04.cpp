// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 27/05/2024
// Número de ejercicio: 4
// Problema planteado: Escribir un programa que lea y muestre en pantalla el archive generado en el ejercicio anterior

#include <iostream>
#include <fstream>

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
    ifstream archivo; //Leer archivo
    archivo.open("ascii.txt"); //abrimos
    for (int i = 32; i < 255; i++)
    {
        cout << "ASCII" << i << ": " << char(i) << endl; //Leemos ascii por ascii
    }
    archivo.close();   //cerramos
}