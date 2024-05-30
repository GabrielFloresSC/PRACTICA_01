// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 27/05/2024
// Número de ejercicio: 6
// Problema planteado: Crear un programa donde se introduzca un número para luego convertirlo en base 6,8, 10.

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

string convertirBase(int, int);
void EscribirArchivo(string, string, string);

int main() {
    system("cls");
    int numero;
    cout << "Ingrese un numero para convertir en las bases 6,8,10: ";
    cin >> numero;

    string base6 = convertirBase(numero, 6); //Una variable para cada resultado que obtengamos respecto a su base
    string base8 = convertirBase(numero, 8);
    string base10 = to_string(numero); // to string transforma un valor contable a un string

    EscribirArchivo(base6, base8, base10); // Introducimos los 3 datos dentro del archivo en esta funcion

    return 0;
}

string convertirBase(int numero, int base) {
    string resultado; 
    do {
        int residuo = numero % base; //Vamos recorriendo digito por digito
        resultado += '0' + residuo; // lo copiamos a la variable resultado
        numero /= base; //Continuamos al siguiente digito
    } while (numero > 0); 
    reverse(resultado.begin(), resultado.end()); //Damos la vuelta el resultado ya que esta inverso
    return resultado;
}

void EscribirArchivo(string base6, string base8, string base10) {
    ofstream archivo("ArchivoBases.txt"); // creamos el archivo en el que se escribiran los datos
        archivo << "Numero en base 6: " << base6 << endl; //Vamos uno por uno 
        archivo << "Numero en base 8: " << base8 << endl;
        archivo << "Numero en base 10: " << base10 << endl;
        archivo.close(); //cerramos
}
