// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 3
// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 ).

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double x1, x2, y1, y2, distancia;
    cout << "Ingrese la primera cordenada (x, y): "<< endl;
    cin >> x1 >> y1;

    cout << "Ingrese la segunda cordenada (x, y): "<< endl;
    cin >> x2 >> y2;

    distancia = sqrt (pow((x2 - x1), 2) + pow((y2 - y1), 2)); // funcion pow y sqrt de la libreria cmath para poder usar la formula sugerida

    cout << "La distancia entre los puntos es: " << distancia << endl;
    return 0;
}
