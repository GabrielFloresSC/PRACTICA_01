// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 06/03/2024
// Numero de ejercicio: 8
/*Problema planteado: - Se tiene el arreglo
Ventas:
0 1 2 10 11
vene vfeb vmar . . vnov vdic
Donde se almacenan las ventas mensuales de una empresa y un arreglo constante que
contiene los nombres de los meses:
Meses:
0 1 2 10 11
“Ene” “Feb” “Mar” . . “Nov” “Dic”
Escriba un programa que obtenga:
• ¿En qué mes(es) se dieron las ventas máximas de la empresa?
• ¿A cuánto ascendieron las ventas máximas?
• ¿Cuál fue el total de las ventas?
Las ventas deben ser ingresadas por teclado.
*/

# include <iostream>
# include <string>
# include <vector>

using namespace std;

int main ()
{
    string Meses[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    double Ventas[12];

    int MesMayorVenta;
    double MayorVenta, VentaMaxima;
    MayorVenta = 0.0;
    VentaMaxima = 0.0;

    for(int i = 0; i < 12; i++)
    {
        cout<<"Cantidad de ventas del mes de "<< Meses[i] <<" es: ";

        cin>>Ventas[i];

        if(Ventas[i]>MayorVenta) //Mes con mayor venta
        {
            MesMayorVenta=i;
            MayorVenta=Ventas[i];
        }
        VentaMaxima += Ventas[i]; // Sumamos para el total de ventas realizadas
    }
    cout<<"El mes de "<< Meses[MesMayorVenta] <<" fue el de mayor venta."<<endl;
    cout<<"Este mes hubo "<< MayorVenta << " ventas." << endl;
    cout <<"La venta total fue de: "<< VentaMaxima << endl;
    return 0;
}
