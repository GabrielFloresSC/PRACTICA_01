// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 7
/* Problema planteado: Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
más en ser también productiva, ¿cuántos pares de conejos podrá poner a la
venta el granjero al cabo de un año?
*/

#include <iostream>

using namespace std;

//PROTOTIPOS
int paresConejos(int);

int main()
{
    system("cls");
    cout << "El granjero a lo largo de un anio tendra: " << paresConejos(12) << " pares de conejos." << endl; //Se utiliza el 12 ya que es la cantidad de meses en un anio
    return 0;
}

int paresConejos(int meses) {
    if (meses == 1 || meses == 2) {
        return 1; //Los primeros meses solo hay un par
    } else {
        return paresConejos(meses - 1) + paresConejos(meses - 2); // Se suman los pares que existen en el mes anterior con el mes anterior anterior
    }
}
