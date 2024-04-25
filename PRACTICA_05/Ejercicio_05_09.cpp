// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 24/04/2024
// Número de ejercicio: 9
/* Problema planteado: Una infantería tiene n cantidad de reclutas. Se desea desarrollar un programa
mediante arreglos para determinar cuántos infantes están inscritos en cada curso y con
cuantas mujeres y cuantos hombres cuenta la nación en estas especialidades dentro de
esta fuerza
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Estructura
struct Recluta {
    int genero; // no char ni string ya que se seleccionara el sexo entre 0 y 1
    int curso;
};

// Prototipos
void ingresarDatosReclutas(vector<Recluta>& reclutas, int& hombres, int& mujeres, int& maxCurso);
void mostrarResultados(vector<Recluta> reclutas, int hombres, int mujeres);

int main() {
    int cantidadReclutas, maxCurso = 0;
    int hombres=0, mujeres=0; //Contadores para saber cuantos hombres y mujeres hay
    cout << "Ingrese la cantidad de reclutas: ";
    cin >> cantidadReclutas;

    vector<Recluta> reclutas(cantidadReclutas);

    ingresarDatosReclutas(reclutas, hombres, mujeres, maxCurso); // Llenar el vector con datos aleatorios
    mostrarResultados(reclutas, hombres, mujeres); // Mostrar los resultados

    return 0;
}

// referencia ya que se modificaran los datos introducidos
void ingresarDatosReclutas(vector<Recluta>& reclutas, int& hombres, int& mujeres, int& maxCurso) {

    srand(time(NULL)); // Semilla para generar numeros aleatorios y que no se repitan

    for (int i = 0; i < reclutas.size(); ++i) {
        cout << "Recluta " << i + 1 << ":" << endl;
        reclutas[i].genero = rand() % 2; // Se determina el genero de manera aleatoria
        if (reclutas[i].genero == 0) {
            cout << "Hombre" << endl; // si es 0  es hombre
            hombres++;
        } else {
            cout << "Mujer" << endl; // si es 1 es mujer
            mujeres++;
        }
        cout << "Curso: ";
        cin >> reclutas[i].curso; // Se ve en que curso esta el recluta
        if (reclutas[i].curso > maxCurso) {
            maxCurso = reclutas[i].curso; // Se interpreta que el numero maximo que se ingrese sera el equivalente a la maxima cantidad de cursos
        }
    }

    // Modificamos el tamanio en referencia a los datos previos
    reclutas.resize(maxCurso);
}

void mostrarResultados(vector<Recluta> reclutas, int hombres, int mujeres) {
    for (int i = 0; i < reclutas.size(); ++i) {
        int cantidad = 0; //Iniciamos un contador que registre los reclutas por cada curso
        for (int j = 0; j < reclutas.size(); ++j) {
            if (reclutas[j].curso == i + 1) {
                cantidad++;
            }
        }
        cout << "En el curso " << i + 1 << " hay: " << cantidad << " reclutas" << endl;
    }

    cout << "\nHay: " << hombres << " reclutas hombres" <<endl;
    cout << "Hay: " << mujeres << " reclutas mujeres" <<endl;
}
