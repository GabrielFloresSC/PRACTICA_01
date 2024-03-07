// Materia: Programacion I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creacion: 06/03/2024
// Fecha modificacion: 07/03/2024
// Numero de ejercicio: 12
/*Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro
contiene los nombres de estos minerales, para obtener:
- Buscar por nombre de mineral y desplegar la producción
- Ordenar del mayor al menor (producción) y mostrar:
Mineral Produccion ™
SN 998.000
SB 876.500
AU 786.670
PT 636.143
AG 135.567
CU 109.412
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Funcion sort para ordenar

using namespace std;

int main ()
{
    string Minerales [6] = { "SN", "SB", "AU", "PT", "AG", "CU"};
    double Produccion [6]= {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

    string Buscar_Mineral;
    cout <<"Ingrese el nombre del mineral que decea buscar: ";
    cin >> Buscar_Mineral;

    bool encontrado = false;

    // Identificamos el mineral
    for (int i = 0; i < 6; ++i)
    {
        if (Minerales[i] == Buscar_Mineral)
        {
            cout << "Este es el material: " << Buscar_Mineral << " y su produccion: " << Produccion[i] << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado)
    {
        cout << "Mineral no encontrado" << endl;
    }
     
     //Ordenamos el mineral
    double ProduccionEnOrden[6];
    for (int i = 0; i < 6; i++)
    {
        ProduccionEnOrden[i] = Produccion[i];
    }
    
    sort(begin(ProduccionEnOrden), end(ProduccionEnOrden), greater<double>()); //Greater hace que se ordene de mayor a menor

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (ProduccionEnOrden[i] == Produccion[j]) {
                cout << Minerales[j] << " - " << ProduccionEnOrden[i] << endl;
                break;
            }
        }
    }

    return 0;
}
