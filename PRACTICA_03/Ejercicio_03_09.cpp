// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 13/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 9
/* Problema planteado: Leer los datos de doce personas como son: nombre, edad, estatura, peso,
posteriormente indicar cuál es el nombre de la persona de menor edad, el promedio de
las estaturas y el de los pesos. (realizar con vectores).*/ 

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

string MenorEdad(vector<string>, vector<int>);
double PromedioEstaturas(vector<double>);
double PromedioPesos(vector<double>);

int main() {
    vector<string> nombres(12);
    vector<int> edades(12);
    vector<double> estaturas(12); 
    vector<double> pesos(12);
    string nombre;
    int edad;
    double estatura, peso;

    for (int i = 0; i < 12; ++i) {
        cout << "Ingrese el nombre de la persona " << i + 1 << ": ";
        cin >> nombre;
        nombres.at(i) = nombre;

        cout << "Ingrese la edad de la persona " << i + 1 << ": ";
        cin >> edad;
        edades.at(i) = edad;

        cout << "Ingrese la estatura de la persona " << i + 1 << ": ";
        cin >> estatura;
        estaturas.at(i) = estatura;

        cout << "Ingrese el peso de la persona " << i + 1 << ": ";
        cin >> peso;
        pesos.at(i) = peso;
    }

    cout << fixed << setprecision(2);
    cout << "La persona con la menor edad es: " << MenorEdad(nombres, edades) << endl; //Convocamos a la funcion correspondiente para cada caso
    cout << "El promedio de estaturas: " << PromedioEstaturas(estaturas) << endl;
    cout << "El promedio de pesos: " << PromedioPesos(pesos) << endl;

    return 0;
}

string MenorEdad(vector<string> nombres, vector<int> edades) { //Se maneja string ya que nos debe devolver solo el nombre de la persona
    int menor = edades.at(0);
    string NombreMenor = nombres.at(0);

    for (int i = 1; i < 12; ++i) {
        if (edades.at(i) < menor) {
            menor = edades.at(i);
            NombreMenor = nombres.at(i);
        }
    }
    return NombreMenor;
}

double PromedioEstaturas(vector<double> estaturas) { 
    double sumatoria = 0.0;
    double resultado = 0.0;
    for (double estatura : estaturas) { //Recorremos cada uno de los incisos dentro del vector para conseguir la sumatoria de todos estos
        sumatoria += estatura;
    }
    resultado = sumatoria/12;
    return resultado;
}

double PromedioPesos(vector<double> pesos) {
    double sumatoria = 0.0;
    double resultado = 0.0;
    for (double peso : pesos) { //Recorremos cada uno de los incisos dentro del vector para conseguir la sumatoria de todos estos
        sumatoria += peso;
    }
    resultado = sumatoria/12;
    return resultado;
}
