// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 24/04/2024
// Número de ejercicio: 2
/* Problema planteado: De acuerdo con la siguiente estructura, realice en C++ un programa que lea N atletas y
nos devuelva el país que mayor número de medallas ha ganado.
*/

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

// estructuras
struct datos {
  char nombre[40];
  char pais[25];
};

struct atleta {
  char deporte[30];
  struct datos pers;
  int nmedallas;
};

// Vector
vector<atleta> atletas;

// PROTOTIPOS
void llenarDatosAtleta();
string obtenerPaisAtletaConMasMedallas(vector<atleta> listaAtletas);

int main() {
  srand(time(NULL)); // semilla para números aleatorios que no se repitan
  cout << "Ingrese el numero de atletas: ";
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    llenarDatosAtleta();
  }

  // Obtener el país con más medallas
  string paisConMasMedallas = obtenerPaisAtletaConMasMedallas(atletas);

  cout << "Pais con mas medallas: " << paisConMasMedallas << endl;

  return 0;
}

void llenarDatosAtleta() {
  atleta atleta;
  cout << "Ingrese el nombre del atleta: ";
  cin >> atleta.pers.nombre;
  cout << "Ingrese el pais del atleta: ";
  cin >> atleta.pers.pais;
  cout << "Ingrese el deporte del atleta: ";
  cin >> atleta.deporte;
  atleta.nmedallas = rand() % (10 - 0 + 1) + 0; // generamos la cantidad de medallas que obtiene el atleta
  cout << "Numero de medallas: " << atleta.nmedallas << endl;
  atletas.push_back(atleta);
}

string obtenerPaisAtletaConMasMedallas(vector<atleta> listaAtletas) {
  string paisMasMedallas = ""; //string vacio
  int medallasMas = 0;

  // Para cada país
  for (int i = 0; i < listaAtletas.size(); i++) {
    string paisActual = listaAtletas[i].pers.pais;
    int medallasPais = 0;

    // Sumar las medallas de los atletas de ese país
    for (int j = 0; j < listaAtletas.size(); j++) {
      if (listaAtletas[j].pers.pais == paisActual) {
        medallasPais += listaAtletas[j].nmedallas; //sumamos todas las medallas que obtuvieron en el pais
      }
    }

    //comparamos para ver cual es el pais con mayor numero de medallas
    if (medallasPais > medallasMas) {
      medallasMas = medallasPais;
      paisMasMedallas = paisActual;
    }
  }

  return paisMasMedallas;
}