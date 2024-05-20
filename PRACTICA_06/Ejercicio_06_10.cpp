// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 10
// Problema planteado: Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
// la lectura de dos números enteros, a partir de la relación:
// (n m) = n!/(n-m)! * m!

#include <iostream>

using namespace std;

//PROTOTIPOS
int factorial(int n);
int coeficienteBinomial(int n, int m);

int main() {
    int n, m;
    do {
        cout << "Ingrese dos números enteros (n y m): ";
        cin >> n >> m;
        if (m < 0 || m > n) {
            cout << "El valor de m debe estar entre 0 y " << n << endl;
        }
    } while (m < 0 || m > n);

        cout << "El coeficiente binomial es: " << coeficienteBinomial(n, m) << endl;
    return 0;
}

int factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1); //Calculamos el factorial en una funcion recursiva
    }
}

int coeficienteBinomial(int n, int m) {
        return factorial(n) / (factorial(n - m) * factorial(m)); //Anidamos las dos funciones para que se calcule el factorial y se cumpla la formula
}
