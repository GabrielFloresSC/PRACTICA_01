// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 11
/* Problema planteado: Elabore un programa para registro académico de la UCB, que solicite el nombre de
una materia, el paralelo, el docente y sus correspondientes notas de periodo. Al final, se
muestra la nota final y si aprobó o reprobó el curso (realizar con vectores).*/ 

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void IntroducirNotas(vector<int>&, int);
double calcularPromedio(vector<int>);
bool Aprobado(double);

int main() {
    string materia, paralelo, nombre;
    int CantidadNotas;

    cout << "Ingrese la materia: ";
    getline(cin, materia);

    cout << "Ingrese el paralelo: ";
    getline(cin, paralelo);

    cout << "Ingrese el nombre: ";
    getline(cin, nombre);

    cout << "Ingresela cantidad de notas: ";
    cin >> CantidadNotas;

    vector<int> notas(CantidadNotas);
    IntroducirNotas(notas, CantidadNotas);

    double promedio = calcularPromedio(notas);

    cout << "\nMateria: " << materia << endl;
    cout << "Paralelo: " << paralelo << endl;
    cout << "Docente: " << nombre << endl;

    cout << fixed << setprecision(2);
    cout << "Nota final: " << calcularPromedio(notas) << endl;
    if (Aprobado(promedio))
        cout << "Aprobado" << endl;
    else
        cout << "Reprobado" << endl;
    return 0;
}

void IntroducirNotas(vector<int>& notas, int CantidadNotas) {
    for (int i = 0; i < CantidadNotas; ++i) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
    }
}

double calcularPromedio(vector<int> notas) {
    double sumatoria = 0.0;
    double promedio = 0.0;
    for (int nota : notas) {
        sumatoria += nota;
    }
    promedio= sumatoria / notas.size();
    return promedio;
}

bool Aprobado(double promedio) {
    if (promedio >=51)
        return true;
    else
        return false;
    
}
