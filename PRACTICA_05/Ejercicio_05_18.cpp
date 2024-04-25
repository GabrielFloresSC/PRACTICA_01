// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 18
/* Problema planteado: Se desea calcular las notas finales de N alumnos de un curso, así como también el
promedio, mínimo y máximo de éstas. Se ingresará el nombre del estudiante y las
notas parciales de cada uno de éstos. Las notas parciales corresponden a la I1, I2, T1,
T2 y Examen. La nota final se calcula empleando la fórmula:
NF = 0.7*NP + 0.3*Ex
En donde NP es la nota de presentación calculada como:
NP = (I1+I2+T1+T2)/4
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Alumno {
    string nombre;
    double I1;
    double I2;
    double T1;
    double T2;
    double Examen;
    double NF;
    double NP;
};

void ingresarDatosAlumnos(vector<Alumno>& alumnos);
void calcularNotasFinales(vector<Alumno>& alumnos);
void mostrarResultados(vector<Alumno> alumnos);

int main() {
    int cantidadAlumnos;
    cout << "Ingrese el numero de alumnos: ";
    cin >> cantidadAlumnos;
    cin.ignore(); // Limpiar el buffer para no tener errores

    vector<Alumno> alumnos(cantidadAlumnos);
    ingresarDatosAlumnos(alumnos);
    calcularNotasFinales(alumnos);
    mostrarResultados(alumnos);

    return 0;
}

void ingresarDatosAlumnos(vector<Alumno>& alumnos) { //introducimos los datos de cada alumno
    for (int i = 0; i < alumnos.size(); ++i) {
        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        getline(cin, alumnos[i].nombre);
        cout << "Ingrese la nota de I1 del alumno: ";
        cin >> alumnos[i].I1;
        cout << "Ingrese la nota de I2 del alumno: ";
        cin >> alumnos[i].I2;
        cout << "Ingrese la nota de T1 del alumno: ";
        cin >> alumnos[i].T1;
        cout << "Ingrese la nota de T2 del alumno: ";
        cin >> alumnos[i].T2;
        cout << "Ingrese la nota del Examen del alumno: ";
        cin >> alumnos[i].Examen;
        cin.ignore(); 
    }
}

void calcularNotasFinales(vector<Alumno>& alumnos) {
    for (int i = 0; i < alumnos.size(); ++i) {
        alumnos[i].NP = (alumnos[i].I1 + alumnos[i].I2 + alumnos[i].T1 + alumnos[i].T2) / 4.0; // A partir de la formula que nos dio la instruccion
        alumnos[i].NF = 0.7 * alumnos[i].NP + 0.3 * alumnos[i].Examen;
    }
}

void mostrarResultados(vector<Alumno> alumnos) {
    double sumaNF = 0;
    double minNF = alumnos[0].NF; //seleccionamos la primera posicion del vector
    double maxNF = alumnos[0].NF; //seleccionamos la primera posicion del vector

    cout << "\nResultados:" << endl;
    for (int i = 0; i < alumnos.size(); ++i) {
        cout << "Alumno: " << alumnos[i].nombre << endl;
        cout << "Nota Final: " << alumnos[i].NF << endl;
        sumaNF += alumnos[i].NF; //Iniciamos un sumador
        if (alumnos[i].NF < minNF) { //comparamos para menor nota
            minNF = alumnos[i].NF;
        }
        if (alumnos[i].NF > maxNF) { // Comparamos para la mayor nota
            maxNF = alumnos[i].NF;
        }
    }

    double promedioNF = sumaNF / alumnos.size();//Sacamos el promedio de todas las notas 
    cout << "\nPromedio de Notas Finales: " << promedioNF << endl;
    cout << "Nota Final Minima: " << minNF << endl;
    cout << "Nota Final Maxima: " << maxNF << endl;
}
