/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 21
Problema planteado: En una tienda comercial, las amas de casa compran diversos artículos de primera
necesidad. Una ama de casa selecciona los artículos de su preferencia pasando por los
distintos mostradores, cada artículo elegido es colocado en un carrito de mano, para
asegurar el pago exacto de los artículos comprados la señora anota el precio y la
cantidad del artículo, estableciendo cuanto pagara por este articulo; así sumara los
demás artículos. Ayude a esta ama de casa a obtener el total de sus comprar, luego de
llenar el carrito de manos con todos los artículos de primera necesidad.
*/
#include <iostream>

using namespace std;

int main ()
{
    int articulos;
    double total;

    cout << "Ingrese la cantidad de articulos distintos que esta comprando: " << endl;
    cin >> articulos;

    for(int i = 1; i <= articulos; ++ i){

        int cantidad;
        double costo; // se ponen dentro del bucle para que se reinicie su valor

        cout <<"Ingrese el precio del articulo: "<< i << " : " << endl;
        cin >> costo;

        cout << "Ingrese la cantidad del articulo: " << i << " : " << endl;
        cin >> cantidad;

        total = total + costo * cantidad;
    } 

    cout << "El total de su compra es: "<< total << " Bs" << endl;

    return 0;

}
