// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 7
// Problema planteado: A partir de dos vectores constantes que contienen nombres de 7 personas cada uno.
// Escribir un programa que escriba la palabra “Iguales” si ambos vectores son iguales y
// “Diferentes” si no lo son. Serán iguales cuando en la misma posición de ambos vectores se
// tenga el mismo valor para todos los elementos.

#include <iostream>

using namespace std;

int main(){
    string Nombres1[]={"Brianna","Carlos","Yoselin","Abdo","Cristhian","Sergio","Sebas"};
    string Nombres2[]={"Brianna","Carlos","Yoselin","Abdo","Cristhian","Sergio","Sebas"};

    int contador=0;

    for (int i=0;i<7;i++){

        if (Nombres1[i]==Nombres2[i]){
            contador++;
        }            

    }
    if (contador==7)
        cout<<"Las listas son iguales"<<endl;
    else
        cout<<"Las listas no son iguales"<<endl;
    return 0;
}
