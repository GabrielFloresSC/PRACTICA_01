// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 27/05/2024
// Número de ejercicio: 9
/* Problema planteado: Escribir un programa con la opción de encriptar y de desencriptar un fichero de texto.
La encriptación consiste en que dado un fichero de texto de entrada genere otro fichero de
salida de extensión <nombre>.COD donde el texto estará codificado (encriptado).
Esta codificación consiste en reemplazar cada carácter por el tercero siguiente según la tabla
ASCII.
La opción de desencriptado consiste en leer un fichero <nombre>.COD y recuperar la
información original.
*/ 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void encriptarArchivo(string, string);
void desencriptarArchivo(string);

int main() {
    system("cls");
    int opcion;
    string nombreArchivo, texto;

    cout << "Elija una opcion:"<<endl;
    cout << "1 Encriptar texto \t 2 Desencriptar archivo" <<endl; //Escogemos que queremos realizar si codificar o decodificar
    cin >> opcion;

    if (opcion == 1) {
        cout << "Ingrese el texto a encriptar: ";
        cin.ignore();
        getline(cin, texto); //Inotrducimos los datos a encriptar

        cout << "Ingrese el nombre del archivo que desea encriptar: ";
        cin >> nombreArchivo; //Le damos el nombre que queremos 

        nombreArchivo += ".COD"; //Le aniadimos .cod al final
        encriptarArchivo(nombreArchivo, texto);
    } else if (opcion == 2) {
        cout << "Ingrese el nombre del archivo que desea desencriptar (aniadir extension .COD): ";
        cin >> nombreArchivo; //Pedimos el nombre con la extension .cod
        desencriptarArchivo(nombreArchivo);
    } 
    return 0;
}

void encriptarArchivo (string nombreArchivo, string texto) {
    ofstream archivoEncriptado(nombreArchivo);
    
    for (char caracter : texto) {
        archivoEncriptado.put(caracter + 3); //Recorremos caracter por caracter y lo encriptamos
    }
    archivoEncriptado.close();
}

void desencriptarArchivo(string nombreArchivo) {

    ifstream archivoEncriptado(nombreArchivo);
    string nombreArchivoDesencriptado = nombreArchivo.substr(0, nombreArchivo.find_last_of(".")) + ".TXT"; 
    //Sustituimos con la funcion substr y lo hacemos desde el punto gracias a la funcion find last of, lo cambiamos por txt la extension
    ofstream archivoDesencriptado(nombreArchivoDesencriptado);

    char ch;
    while (archivoEncriptado.get(ch)) {
        archivoDesencriptado.put(ch - 3); //Decodificamos caracter por caracter
    }

    archivoEncriptado.close();
    archivoDesencriptado.close();
}