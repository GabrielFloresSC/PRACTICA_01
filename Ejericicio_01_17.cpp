// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 28/02/2024
// Fecha modificación: 29/02/2024
// Número de ejercicio: 17
// Problema planteado: En una fábrica de computadoras se planea ofrecer a los clientes un descuento que
//dependerá del número de computadoras que compre. Si las computadoras son menos
//de cinco se les dará un 10% de descuento sobre el total de la compra; si el número de
//computadoras es mayor o igual a cinco, pero menos de diez se le otorga un 20% de
//descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada
//computadora es un valor que el usuario ingrese desde el teclado.

 #include <iostream>

using namespace std;

int main() {

    int cantidad;
    double precio, total, sale, totalsale;

    cout << "Ingrese la cantidad de computadoras: ";
    cin >> cantidad;
    cout << "Ingrese el precio: ";
    cin >> precio;


    total = precio * cantidad;

    if (cantidad < 5) 
        sale = total * 0.1; 
    
    if (cantidad < 10 && cantidad >=5) 
        sale = total * 0.2; 
     
    if (cantidad >= 10)
        sale = total * 0.4; 

    // hay que verificar los < y > ya que algunos necesitan de un igual para que no colisionen entre si

    totalsale = total - sale;

    cout << "El total original de la compra es: " << total << endl;
    cout << "El descuento es: " << sale << endl;
    cout << "El total con descuento es: " << totalsale << endl;

    return 0;
}
