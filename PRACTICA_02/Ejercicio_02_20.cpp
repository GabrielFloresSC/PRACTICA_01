// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 20
/*Problema planteado: Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y
diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector. Para
simplificarlo vamos a suponer que febrero tiene 28 días.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    string meses [12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
    int numeroDias [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int Mes;
    cout << "Ingrese el digito del mes que desea ver (1-12)";
    cin >> Mes;
    
    if (Mes >= 1 && Mes <= 12)
    {
        cout << "El mes es:" << meses[Mes - 1] << " tiene "  << numeroDias [Mes - 1] << endl;
    }
    else 
    {
        cout << "Mes invalido";
    }
        
    return 0;
}
