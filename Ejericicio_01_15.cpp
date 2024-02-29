// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 15
// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine cual es el menor

#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, c, menor;
    cout << "ingrese los valores" << endl;
    cin >> a >> b >> c;

    if (a < b) {
        menor = a;
    }
    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }
    
    //con cada if podemos comprobar que un numero es menor al otro e igual si se repite alguno

    cout<< menor << " es el menor"<<endl;
    return 0;
}
