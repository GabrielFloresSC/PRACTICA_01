// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 13/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 4
/* Problema planteado: Crea una única función (importante que sólo sea una) que sea capaz de calcular y
retornar el área de un polígono.
- La función recibirá por parámetro sólo UN polígono a la vez.
- Los polígonos soportados serán Triángulo, Cuadrado y Rectángulo.
- Imprime el cálculo del área de un polígono de cada tipo.*/

#include <iostream>

using namespace std;

void CalculoArea(int);

int main (){
    int poligono;
        do
        {
            cout << "Ingrese el tipo de poligono (1: Triangulo, 2: Cuadrado, 3: Rectangulo. Presione 0 si desea acabar con el proceso): ";
            cin >> poligono;
            CalculoArea (poligono);

        } while (poligono != 0); //Manejamos do while ya que necesitamos que por lo menos suceda una vez la ejecucion
        
    return 0;
}

void CalculoArea(int Poligono){
    double area,lado1 , lado2;
    area = 0.0;
    switch (Poligono)//Switch para seleccionar cual poligono fue seleccionado
    {
    case 1:

        cout << "Ingrese la base del triangulo: " ;
        cin >> lado1;
        cout << "Ingrese la altura del triangulo: " ;
        cin >> lado2;

        area = (lado1 * lado2)/2;

        cout << "El area de un triangulo es: " << area << endl;

        break;
    case 2:
        cout << "Ingrese uno de los lados del cuadrado: " ;
        cin >> lado1;

        area = lado1 * lado1;

        cout << "El area del cuadrado es: " << area << endl;

        break;
    case 3:
        cout << "Ingrese la base del rectangulo: " ;
        cin >> lado1;
        cout << "Ingrese la altura del rectangulo: " ;
        cin >> lado2;

        area = lado1 * lado2;

        cout << "El area de un rectangulo es: " << area << endl;

        break;
    
    default:
        if (Poligono == 0)
            cout << "Termino el proceso, Gracias" << endl;
        else
            cout << "No es ninguno de los poligonos descritos" << endl;
        
        break;
    }
//Todos los despliegues y calculos ocurren dentro del void

}
