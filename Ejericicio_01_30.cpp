/*Materia: Programación I, Paralelo 1
Autor: Gabriel Fernando Flores Santa Cruz
Fecha creación: 28/02/2024
Fecha modificación: 29/02/2024
Número de ejercicio: 30
Problema planteado: Un supermercado decide efectuar una promoción de descuentos por el valor de las
compras que efectúan sus clientes, esta promoción se basa en las siguientes
condiciones:
Si el total de ventas es < 100 Bs. no se aplica ningún descuento
Si el total de ventas es de 100 Bs o más se aplica un 5% de descuento
Si el total de ventas es 500 Bs o más se aplica un 8% de descuento
Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el
total de ventas efectuadas y el total de ventas con el descuento respectivo.
*/

#include <iostream>

using namespace std;

int main() {
    int cantidadclientes;
    double totalventas, totalventassale;

    totalventas = 0;
    totalventassale = 0;

    cout << "Ingrese el numero de clientes, por favor: ";
    cin >>cantidadclientes;

    for (int i = 1; i <= cantidadclientes; ++i) // i <= cantida de clientes ya que el factor i comienza en 1
    {
        double productos;
        cout << "Ingrese la cantidad que todos los productos suman: " << i ;
        cin >> productos;

        if (productos < 100) {
            totalventas = totalventas + productos;
            totalventassale = totalventas; 
        }
        if (productos >= 100 && productos < 500) {
            totalventas = totalventas + productos;
            totalventassale = totalventas - productos * 0.05; //aplicamos el descuento
        } 
        else 
        {
            totalventas = totalventas + productos;
            totalventassale = totalventas - productos * 0.08; //aplicamos descuento
        }
    }

    cout << "Fueron " << cantidadclientes << " clientes:" << endl;
    cout << "Ventas sin descuento: " << totalventas << " Bs" << endl;
    cout << "Ventas con descuento: " << totalventassale << " Bs" << endl;

    return 0;
}
