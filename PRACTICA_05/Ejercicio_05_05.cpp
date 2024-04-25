// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 5
/* Problema planteado: El viceministerio de deportes hace una olimpiada a nivel nacional de los siguientes
deportes:
• Tiro con arco
• Atletismo
• Boxeo
• Ciclismo
• Natación
• Esgrima
También se registra los nombres de los atletas y que departamento representa y
que deporte práctica.
Realizar un programa en C++ que simule y registre cuantas medallas ha ganado un
atleta y que me muestre el medallero final por departamento
*/

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

// Estructuras
struct Atleta {
    string nombre;
    string departamento;
    string deporte;
    int medallasOro;
    int medallasPlata;
    int medallasBronce;
};

struct MedalleroDepartamento {
    string departamento;
    int totalOro;
    int totalPlata;
    int totalBronce;
};

//prototipos
vector<Atleta> introducirDatosAtletas();
void mostrarMedalleroPorDepartamento(vector<Atleta>& atletas);

int main() {

    srand(time(NULL)); //Semilla para que no se repitan los numeros generados
    vector<Atleta> atletas = introducirDatosAtletas();

    mostrarMedalleroPorDepartamento(atletas);

    return 0;
}

vector<Atleta> introducirDatosAtletas() {
    vector<Atleta> atletas;
    int numAtletas;
    cout << "Ingrese el numero de atletas: ";
    cin >> numAtletas;

    for (int i = 0; i < numAtletas; i++) {
        string nombre;
        cout << "Ingrese el nombre del atleta " << i + 1 << ": ";
        cin >> nombre;
        
        // Selección aleatoria de ciudad y deporte
        string ciudades[] = {"La Paz", "Santa Cruz", "Cochabamba", "Sucre", "Oruro", "Tarija", "Potosi", "Beni", "Pando"};
        string deportes[] = {"Tiro con arco", "Atletismo", "Boxeo", "Ciclismo", "Natacion", "Esgrima"};
        string ciudad = ciudades[rand() % (8-0+1)+0]; // Genera un número aleatorio entre 0 y 8 equivalente a la posicion dentro del vector
        string deporte = deportes[rand() % (5-0+1)+0]; // Genera un número aleatorio entre 0 y 5 equivalente a la posicion dentro del vector

        int medallasOro = rand() % (3-0+1)+0; // Entre 0 y 3 medallas de oro
        int medallasPlata = rand() % (3-0+1)+0; // Entre 0 y 3 medallas de plata
        int medallasBronce = rand() % (3-0+1)+0; // Entre 0 y 3 medallas de bronce

        Atleta nuevoAtleta = {nombre, ciudad, deporte, medallasOro, medallasPlata, medallasBronce};
        atletas.push_back(nuevoAtleta);
    }

    return atletas;
}

void mostrarMedalleroPorDepartamento(vector<Atleta>& atletas) {
    cout << "Informacion de los atletas:" << endl;
    for (int i = 0; i < atletas.size(); i++) {
        cout << "Nombre: " << atletas[i].nombre << endl;
        cout << "Departamento: " << atletas[i].departamento << endl;
        cout << "Deporte: " << atletas[i].deporte << endl;
        cout << "Medallas-Oro: " << atletas[i].medallasOro << ", Plata: " << atletas[i].medallasPlata << ", Bronce: " << atletas[i].medallasBronce << endl;
        cout << endl;
    }

    vector<MedalleroDepartamento> medallero; //creamos un nuevo vector para registrar cuantas medallas hay por departamento

    for (int i = 0; i < atletas.size(); i++) {
        bool sw = false; //Ver si ya existe algun registro previo de datos del departamento
        for (int j = 0; j < medallero.size(); j++) {
            if (medallero[j].departamento == atletas[i].departamento) { //en caso de que si se suman todas las medallas
                medallero[j].totalOro += atletas[i].medallasOro;
                medallero[j].totalPlata += atletas[i].medallasPlata;
                medallero[j].totalBronce += atletas[i].medallasBronce;
                sw = true; //y termina el bucle
                break;
            }
        }
        if (!sw) { //En caso de que sea la primera vez que se menciona al departamento se crea un registro del vector
            MedalleroDepartamento nuevoDepto = {atletas[i].departamento, atletas[i].medallasOro, atletas[i].medallasPlata, atletas[i].medallasBronce};
            medallero.push_back(nuevoDepto);
        }
    }

    cout << "Medallero Final por Departamento:" << endl;
    for (int i = 0; i < medallero.size(); i++) {
    cout << "Departamento: " << medallero[i].departamento << endl;
    cout << "Oro: " << medallero[i].totalOro << endl;
    cout << "Plata: " << medallero[i].totalPlata << endl;
    cout << "Bronce: " << medallero[i].totalBronce << endl;
    cout << endl;
    }
}   