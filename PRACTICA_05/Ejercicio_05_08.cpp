// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 24/04/2024
// Número de ejercicio: 8
/* Problema planteado: En una tienda donde solo hay 10 productos se desea calcular el total de ganancia que
produjo dicho negocio este mes. Para ello se cuenta por producto con: Precio del
Costo, precio de venta, código y cantidad vendida en ese periodo. Realizar programa
que permita calcular las Ganancias de la Tienda.
*/

#include <iostream>
#include <vector>

using namespace std;

struct Producto {
    int codigo;
    double precioCosto;
    double precioVenta;
    int cantidadVendida;
};

// Prototipos de funciones
void ingresarDatosProductos(vector<Producto>& productos);
double calcularGanancia(Producto producto);
double calcularGananciaTotal(vector<Producto> productos);

int main() {
    vector<Producto> productos;

    ingresarDatosProductos(productos);

    cout << "La ganancia total de la tienda este mes es: $" << calcularGananciaTotal(productos) << endl;

    return 0;
}

void ingresarDatosProductos(vector<Producto>& productos) { //Ingresamos los datos
    for (int i = 0; i < 10; ++i) {// 10 ya que la instruccion nos solicita esto
        Producto nuevoProducto;
        cout << "Producto " << i + 1 << endl;
        cout << "Codigo: ";
        cin >> nuevoProducto.codigo;
        cout << "Precio de costo: ";
        cin >> nuevoProducto.precioCosto;
        cout << "Precio de venta: ";
        cin >> nuevoProducto.precioVenta;
        cout << "Cantidad vendida: ";
        cin >> nuevoProducto.cantidadVendida;
        productos.push_back(nuevoProducto);
    }
}

double calcularGanancia(Producto nuevoProducto) {
    return (nuevoProducto.precioVenta - nuevoProducto.precioCosto) * nuevoProducto.cantidadVendida; //Realizamos la operacion en el return para ahorrar codigo y conseguimos la ganancia de cada producto individual
}

double calcularGananciaTotal(vector<Producto> productos) {
    double gananciaTotal = 0.0;
    for (int i = 0; i < 10; ++i) {
        gananciaTotal += calcularGanancia(productos[i]); //Llamamos a la anterior funcion para despues sumarla en esta, se recorre prodcuto por producto
    }
    return gananciaTotal;
}
