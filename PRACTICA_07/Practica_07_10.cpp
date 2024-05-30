// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 27/05/2024
// Fecha modificación: 30/05/2024
// Número de ejercicio: 10
/* Problema planteado: Escriba un programa que cree un fichero binario llamado "PERSONAS.BIN" en el que se guarde
la información de un número indeterminado de personas.
La información que se guardará por cada persona será:
• Nombre: De 1 a 30 caracteres. WILLY TENORIO
• Edad numérico (>= 1 y <=100) 40
• Sexo CHAR (M/F). M
• FechaNacimiento CHAR(10) (formato dd/mm/yyyy) 01/01/1980
La información correspondiente a cada persona se leerá del teclado.
El proceso finalizará cuando se teclee un campo "Nombre" que esté solamente con el carácter
de espacio.*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
//definimos estructura
struct Persona {
    char nombre[31];
    int edad;
    char sexo[1];
    char fechaNacimiento[10];
};

Persona datosPersonas();
void guardarPersona(Persona, ofstream&);
void ingresarPersonas(ofstream&);

int main() {
    ofstream archivo("PERSONAS.BIN", ios::binary); //Declaramos como archivo binario
    ingresarPersonas(archivo);
    archivo.close();

    return 0;
}

void ingresarPersonas(ofstream& archivo) {
    Persona persona;
    do {
        persona = datosPersonas();
        if (persona.edad != 0) { //Si la edad es mayor a 0 se guardan los datos
            guardarPersona(persona, archivo);
        }
    } while (persona.edad != 0);
}

Persona datosPersonas() { //Ingresamos los datos de las personas
    Persona persona;
    cout << "Ingrese el nombre (no introduzca ningun caracter para cancelar): ";
    cin.getline(persona.nombre, 31);
    if (strlen(persona.nombre) == 0) { //strlen te permite ver que tanto espacio ocupa lo escrito en este caso puede ser 0 para confirmar que no queremos introducir mas
        persona.edad = 0; //En caso de querer cancelar la edad se registrara en 0
    } else {
        cout << "Ingrese la edad: ";
        cin >> persona.edad;
        cin.ignore(); 

        cout << "Ingrese el sexo (M/F): ";
        cin >> persona.sexo;
        cin.ignore();

        cout << "Ingrese la fecha de nacimiento (dd/mm/yyyy): ";
        cin.getline(persona.fechaNacimiento, 11);
    }

    return persona;
}

void guardarPersona(Persona persona, ofstream& archivo) {
    archivo.write((char*)&persona, sizeof(persona)); //Guardamos los datos en el archivo
}
