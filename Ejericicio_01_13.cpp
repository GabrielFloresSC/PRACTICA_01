// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 13
// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas. Los datos de tipo de cambio debe sacar de la página https://www.bcb.gob.bo/?q=cotizaciones_tc

#include <iostream>

using namespace std;

int main() {
    double Bs,BsaDolar, BsaEuro, BsaLibra; 
    const double Dolar = 6.86 ;
    const double Euro = 7.44309 ;
    const double LEsterlinas = 8.70128 ;// const ya que el valor no cambiara en ningun momento del programa
    
    cout << "ingrese la cantidad de bolivianos que desea convertir: " << endl;
    cin >> Bs ;

    BsaDolar = Bs  / Dolar ;
    BsaEuro  = Bs  / Euro ;
    BsaLibra = Bs  / LEsterlinas ;

    cout << "La cantidad de Bs a dolares es: "<< BsaDolar  << endl;
    cout << "La cantidad de Bs a euros es: "<< BsaEuro << endl;
    cout << "La cantidad de Bs a Libras Esterlinas es: "<< BsaLibra << endl;

    return 0;

}
