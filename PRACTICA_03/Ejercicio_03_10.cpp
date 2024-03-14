// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 10
/* Problema planteado: Escribir el programa para solicitar al usuario N calificaciones comprendidas en el
rango de 1 a 100, calcular y presentar la sumatoria y promedio de estas N calificaciones.
La entrada de valores es para las calificaciones, debe hacerlo mediante una función
(realizar con vectores).*/ 

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void Notas(vector<int>&);
void SumatoriaYPromedio(vector<int>, int&, double&);

int main() {
    int cantidad;
    int sumatoria; 
    double promedio;
    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> cantidad;

    vector<int> notasvector(cantidad);

    Notas(notasvector);
    SumatoriaYPromedio(notasvector, sumatoria, promedio);

    cout << fixed << setprecision(2);
    cout << "La sumatoria es: " << sumatoria << endl;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}

void Notas(vector<int>& notasvector) {
    for (int i = 0; i < notasvector.size(); ++i) {
            
            cout << "Ingrese la nota " << i + 1 << " (deben estar entre 1 y 100): ";
            cin >> notasvector[i];
            while (notasvector[i] < 1 || notasvector [i] > 100)
            {
                cout << "Nota invalida, pruebe otra vez: ";
                cin >> notasvector[i];
            }
            
    }
}

void SumatoriaYPromedio(vector<int> calificaciones, int& sumatoria, double& promedio) {
    sumatoria = 0.0;

    for (int calificacion : calificaciones) {
        sumatoria += calificacion;
    }

    promedio = sumatoria / double(calificaciones.size());
}
