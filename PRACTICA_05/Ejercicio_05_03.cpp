// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 25/04/2024
// Número de ejercicio: 3
/* Problema planteado: Realice un programa en C++ con funciones y estructuras para el estacionamiento del
Megacenter.
Este estacionamiento cuenta con 4 pisos, cada piso tiene distintas capacidades de
autos
Piso 1 – 50 autos
Piso 2 – 40 autos
Piso 3 – 30 autos
Piso 4 – 45 autos
El estacionamiento debe recibir varios tipos de autos (vagoneta, camionetas,
automóviles, minivans y motocicletas), marca del auto, modelo del auto y color del
auto.
Escribir un programa en C++ utilizando funciones y estructuras para:
Simular la entrada de vehículos, el programa debe pedir la cantidad de
vehículos ingresados y el programa debe simular los tipos de vehículo, la
marca, el modelo, el color y en que piso se han estacionado.
La simulación puede repetirse varias veces hasta que el usuario ingrese el valor
de 0 (cero) en la cantidad de vehículos. La cantidad de vehículos debe se
incremental.
Luego de cada ingreso de vehículos se desea saber cuantos hay estacionado en
cada piso.
Cuantos son vagoneta, camionetas, automóviles, minivans y motocicletas.
Hacer un reporte por colores de autos, modelo y marca.
La simulación debe determinar cuando el parqueo se ha llenado.
La simulación debe determinar cuántos espacios libres queda.
*/

#include <iostream>
#include <vector>
#include <string.h>
#include <stdlib.h>

using namespace std;

// Estructuras
struct automovil
{
    int tipo;
    int marca;
    int modelo;
    int color;
};

// Constantes
const vector<string> ListaMarcas = {"Toyota","Nissan", "Ford", "Audi", "Jeep", "BMW"};
const vector<string> ListaTipos = {"Vagoneta","Camioneta","Automovil","Minivan","Motocicleta"};
const vector<string> ListaColores = {"Rojo", "Verde", "Azul", "Amarillo", "Negro"};

// Prototipos
int IngresarNroAutomoviles();
void LimpiarDatosPorPiso(vector<automovil>&, int);
void DeplegarDatosPorPiso(vector<automovil>, int, int);
void SimularIngresoAutomoviles(int, int&, int&, int&, int&, vector<automovil>&, vector<automovil>&, vector<automovil>&, vector<automovil>&);
void ReportePorMarca(int, int, int, int, vector<automovil>, vector<automovil>, vector<automovil>, vector<automovil>);
void ReportePorTipo(int, int, int, int, vector<automovil>, vector<automovil>, vector<automovil>, vector<automovil>);
void ReportePorColor(int, int, int, int, vector<automovil>, vector<automovil>, vector<automovil>, vector<automovil>);

int main()
{
    // Vectores en los que se almacenara la informacion de cada vehiculo que vaya a ese piso
    vector<automovil> Piso1(50);
    vector<automovil> Piso2(40);
    vector<automovil> Piso3(30);
    vector<automovil> Piso4(45);

    // Contadores para saber cuantos vehiculos hay por piso
    int contadorPiso1 = 0;
    int contadorPiso2 = 0;
    int contadorPiso3 = 0;
    int contadorPiso4 = 0;

    int nroAutomovilesIngresados = 0;

    // Limpiar los datos de cada piso
    LimpiarDatosPorPiso(Piso1, 50);
    LimpiarDatosPorPiso(Piso2, 40);
    LimpiarDatosPorPiso(Piso3, 30);
    LimpiarDatosPorPiso(Piso4, 45);

    do
    {
        nroAutomovilesIngresados = IngresarNroAutomoviles();
        SimularIngresoAutomoviles(nroAutomovilesIngresados, contadorPiso1, contadorPiso2, contadorPiso3, contadorPiso4, Piso1, Piso2, Piso3, Piso4);

    } while (nroAutomovilesIngresados > 0); // en el caso de que dentro de la funcion se introduzca un cero se cancela todo

    // Mostrar el número de automóviles ingresados en cada piso
    cout << "Han ingresado " << contadorPiso1 << " automoviles en el piso 1." <<  endl;
    cout << "Han ingresado " << contadorPiso2 << " automoviles en el piso 2." <<  endl;
    cout << "Han ingresado " << contadorPiso3 << " automoviles en el piso 3." <<  endl;
    cout << "Han ingresado " << contadorPiso4 << " automoviles en el piso 4." <<  endl;

    // Generar reportes
    ReportePorTipo(contadorPiso1, contadorPiso2, contadorPiso3, contadorPiso4, Piso1, Piso2, Piso3, Piso4);
    ReportePorMarca(contadorPiso1, contadorPiso2, contadorPiso3, contadorPiso4, Piso1, Piso2, Piso3, Piso4);
    ReportePorColor(contadorPiso1, contadorPiso2, contadorPiso3, contadorPiso4, Piso1, Piso2, Piso3, Piso4);

    return 0;  
}

int IngresarNroAutomoviles()
{
    int nroAutomoviles;
    system("cls"); // Limpiar la consola
    srand (time(NULL)); // Semilla para la generación de números aleatorios sin que se repitan
    cout << "Ingrese la cantidad de automoviles: (digite 0 para terminar el proceso) ";
    cin >> nroAutomoviles;
    return nroAutomoviles;
}

void LimpiarDatosPorPiso(vector<automovil> &Piso, int capacidad)
{
    for (int i = 0; i < capacidad; i++)
    {
        Piso[i].color = -1;
        Piso[i].marca = -1;
        Piso[i].tipo = -1;
        Piso[i].modelo = -1;
    }
}

void DeplegarDatosPorPiso(vector<automovil> Piso, int capacidad, int piso)
{
    cout << "Nro de automoviles PISO " << piso << ": " << capacidad << " auto(s)." << endl;
    for (int i = 0; i < capacidad; i++)
    {
        cout << "DATOS DEL PISO " << piso << endl;
        cout << "\tMarca: " << ListaMarcas[Piso[i].marca] << endl;
        cout << "\tTipo: " << ListaTipos[Piso[i].tipo] << endl;
        cout << "\tColor: " << ListaColores[Piso[i].color] << endl;
        cout << "\tModelo: " << Piso[i].modelo << endl;
    }
}

void SimularIngresoAutomoviles(int nroAutomoviles, int &contadorPiso1, int &contadorPiso2, int &contadorPiso3, int &contadorPiso4, 
                               vector<automovil> &Piso1, vector<automovil> &Piso2, vector<automovil> &Piso3, vector<automovil> &Piso4)
{
    int piso = 0;
    int marca = 0;
    int tipo = 0;
    int color = 0;
    int modelo = 0;
    bool sw;
    for (int i = 0; i < nroAutomoviles; i++)
    {
        cout << "Ingreso automovil " << i + 1 << endl;
        // Simular el piso y ademas vemos si el piso esta lleno o no, en el caso de que si este lleno se solicita otro piso
        do
        {
            sw = false;
            piso = rand()%(4-1+1)+1;
            switch (piso)
            {
                case 1:
                    if (contadorPiso1 >= Piso1.size())
                        sw = true;
                    break;
                case 2:
                    if (contadorPiso2 >= Piso2.size())
                        sw = true;
                    break;
                case 3:
                    if (contadorPiso3 >= Piso3.size())
                        sw = true;
                    break;
                case 4:
                    if (contadorPiso4 >= Piso4.size())
                        sw = true;
                    break;
            }
        } while (sw);
        // Simular Marca
        marca = rand()%(5-0+1)+0;
        // Simular Tipo
        tipo = rand()%(4-0+1)+0;
        // Simular Color
        color = rand()%(4-0+1)+0;
        //  Simular modelo
        modelo = rand()%(2025-1990+1)+1990;
        //Vemos a que piso tiene que ir cada vehiculo y almacenamos esa informacion dentro del piso
        switch (piso)
        {
            case 1:
                Piso1[contadorPiso1].marca = marca;
                Piso1[contadorPiso1].tipo = tipo;
                Piso1[contadorPiso1].color = color;
                Piso1[contadorPiso1].modelo = modelo;
                contadorPiso1++;
                break;
            case 2:
                Piso2[contadorPiso2].marca = marca;
                Piso2[contadorPiso2].tipo = tipo;
                Piso2[contadorPiso2].color = color;
                Piso2[contadorPiso2].modelo = modelo;
                contadorPiso2++;
                break;
            case 3:
                Piso3[contadorPiso3].marca = marca;
                Piso3[contadorPiso3].tipo = tipo;
                Piso3[contadorPiso3].color = color;
                Piso3[contadorPiso3].modelo = modelo;
                contadorPiso3++;
                break;
            case 4:
                Piso4[contadorPiso4].marca = marca;
                Piso4[contadorPiso4].tipo = tipo;
                Piso4[contadorPiso4].color = color;
                Piso4[contadorPiso4].modelo = modelo;
                contadorPiso4++;
                break;
        }
    }   
}

// Reporte de la marca del automovil
void ReportePorMarca(int contadorPiso1, int contadorPiso2, int contadorPiso3, int contadorPiso4, 
                    vector<automovil> Piso1, vector<automovil> Piso2, vector<automovil> Piso3, vector<automovil> Piso4)
{
    //recorremos piso por piso y vamos contando cuantos vehiculos existen de cada marca
    vector<int> Reporte(ListaMarcas.size(),0);
    for (int i = 0; i < contadorPiso1; i++)
    {
        Reporte[Piso1[i].marca]++;
    }
    for (int i = 0; i < contadorPiso2; i++)
    {
        Reporte[Piso2[i].marca]++;
    }
    for (int i = 0; i < contadorPiso3; i++)
    {
        Reporte[Piso3[i].marca]++;
    }
    for (int i = 0; i < contadorPiso4; i++)
    {
        Reporte[Piso4[i].marca]++;
    }
    cout << "\nREPORTE POR MARCA DE AUTO" << endl;
    for (int i = 0; i < Reporte.size(); i++)
    {
        cout << "Marca " << ListaMarcas[i] << ": " << Reporte[i] << " automoviles." << endl;
    }
}

// Se repite el mismo proceso pero ahora con el tipo de los vehiculos
void ReportePorTipo(int contadorPiso1, int contadorPiso2, int contadorPiso3, int contadorPiso4, 
                    vector<automovil> Piso1, vector<automovil> Piso2, vector<automovil> Piso3, vector<automovil> Piso4)
{
    vector<int> Reporte(ListaTipos.size(),0);
    for (int i = 0; i < contadorPiso1; i++)
    {
        Reporte[Piso1[i].tipo]++;
    }
    for (int i = 0; i < contadorPiso2; i++)
    {
        Reporte[Piso2[i].tipo]++;
    }
    for (int i = 0; i < contadorPiso3; i++)
    {
        Reporte[Piso3[i].tipo]++;
    }
    for (int i = 0; i < contadorPiso4; i++)
    {
        Reporte[Piso4[i].tipo]++;
    }
    cout << "\nREPORTE POR TIPO DE AUTO" << endl;
    for (int i = 0; i < Reporte.size(); i++)
    {
        cout << "Tipo " << ListaTipos[i] << ": " << Reporte[i] << " automoviles." << endl;
    }
}

// Se repite el mismo proceso pero ahora con el color de los vehiculos
void ReportePorColor(int contadorPiso1, int contadorPiso2, int contadorPiso3, int contadorPiso4, 
                    vector<automovil> Piso1, vector<automovil> Piso2, vector<automovil> Piso3, vector<automovil> Piso4)
{
    vector<int> Reporte(ListaColores.size(),0);
    for (int i = 0; i < contadorPiso1; i++)
    {
        Reporte[Piso1[i].color]++;
    }
    for (int i = 0; i < contadorPiso2; i++)
    {
        Reporte[Piso2[i].color]++;
    }
    for (int i = 0; i < contadorPiso3; i++)
    {
        Reporte[Piso3[i].color]++;
    }
    for (int i = 0; i < contadorPiso4; i++)
    {
        Reporte[Piso4[i].color]++;
    }
    cout << "\nREPORTE POR COLOR DE AUTO" << endl;
    for (int i = 0; i < Reporte.size(); i++)
    {
        cout << "Color " << ListaColores[i] << ": " << Reporte[i] << " automoviles." << endl;
    }
}