// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 24/04/2024
// Número de ejercicio: 11
/* Problema planteado: Escriba un programa que en una estructura guarde los datos de 05 amigos (as) suyos
(as) y los muestre por pantalla, utilizando para ello un arreglo de estructura, la misma
estructura contendrá (Nombre, Apellido, Edad, Sexo, Dirección, y Teléfono).
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Amigo {
    string nombre;
    string apellido;
    int edad;
    int sexo; // 0 para masculino, 1 para femenino
    string direccion;
    long int telefono;
};

void ingresarDatosAmigos(vector<Amigo>& amigos);
void mostrarAmigos(vector<Amigo> amigos);

int main() {
    srand(time(NULL)); // semilla para números aleatorios
    vector<Amigo> amigos;

    ingresarDatosAmigos(amigos);
    mostrarAmigos(amigos);

    return 0;
}

void ingresarDatosAmigos(vector<Amigo>& amigos) {
    for (int i = 0; i < 5; ++i) {//manejamos 5 ya que el ejercicio nos lo solicita asi
        Amigo nuevoAamigo;
        cout << "Ingrese los datos del amigo " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> nuevoAamigo.nombre;
        cout << "Apellido: ";
        cin >> nuevoAamigo.apellido;
        nuevoAamigo.edad = rand() % (50 - 10 + 1) + 10; // Generar edad aleatoria entre 10 y 50
        cout << "Sexo (seleccione 1 si es mujer, seleccione 2 si es hombre): ";
        cin >> nuevoAamigo.sexo; // Generar sexo aleatorio por esto necesitabamos que el valor sea un int
        cout << "Direccion: ";
        cin.ignore();
        getline(cin, nuevoAamigo.direccion);
        nuevoAamigo.telefono = rand() % (79999999 - 60000000 + 1) + 60000000; // Generar número de teléfono aleatorio entre 60000000 y 79999999

        amigos.push_back(nuevoAamigo);
    }
}

void mostrarAmigos(vector<Amigo> amigos) {
    cout << "Datos de los amigos:" << endl;
    for (int i = 0; i < amigos.size(); ++i) {
        cout << "Amigo " << i + 1 << ":" << endl;
        cout << "Nombre: " << amigos[i].nombre << endl;
        cout << "Apellido: " << amigos[i].apellido << endl;
        cout << "Edad: " << amigos[i].edad << endl;
        cout << "Sexo: ";
        if (amigos[i].sexo == 0) { //Asignamos el sexo a partir del numero generado
            cout << "Hombre" << endl;
        } else {
            cout << "Mujer" << endl;
        }
        cout << "Direccion: " << amigos[i].direccion << endl;
        cout << "Telefono: " << amigos[i].telefono << endl << endl;
    }
}
