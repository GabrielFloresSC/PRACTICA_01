// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 16
// Problema planteado: Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está dentro del intervalo obtenga su cuadrado (n*n), si es menor que el límite inferior, obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2)

#include <iostream>

using namespace std;
 
int main(){
    int a, b;
    double n, dentro, menor, mayor;
    cout << "introduzca el numero" << endl;
    cin >> n;
    cout << "introduzca el intervalo:" << endl;
    cin >> a >> b;
    if (n >= a && n <= b){ //&& nos sirve para que el if tenga que cumplir don sentencias 
        dentro = n*n;
        cout << "el valor esta dentro del intervalo " << dentro << endl;
    }
    else if (n < a || n < b){ // || nos sirve para que el if tenga que cumplir una u otra opcion
        menor = 1/n;
        cout << "el valor esta por fuera del intervalo menor " << menor << endl;
    }
    else{
        mayor = n/2;
        cout << "el valor esta por fuera del intervalo mayor " << mayor << endl;
    }
        
    
    return 0;
}
