// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 24/04/2024
// Número de ejercicio: 1
/* Problema planteado: 
La información de todos los empleados de la UCB se almacena en una variable tipo
struct llamada “empleado”.
La información con que se cuenta es: nombre, ci, departamento y salario.
Realizar un programa en C++ que lea un array de estructura de los datos de N
empleados e imprima los siguiente:
• Empleado con mayor salario
• Empleado con menor salario
• Promedio salarial
• Promedio por departamento
• Departamento con mayor salario en promedio
• Departamento con menor salario en promedio
*/

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>

using namespace std;

// Estructura para representar un empleado
struct empleado {
    char nombre[50];
    unsigned long ci;
    unsigned int departamento;
    double salario;
};

// Lista de empleados
vector<empleado> empleados;

// Funciones para llenar datos y calcular estadísticas
void LlenarDatosEmpleados();
empleado obtenerMayorSalario(vector<empleado> listaEmpleados);
empleado obtenerMenorSalario(vector<empleado> listaEmpleados);
double obtenerPromedioSalarial(vector<empleado> listaEmpleados);
double obtenerPromedioSalarialPorDepartamento(vector<empleado> listaEmpleados, int departamento);
int obtenerDepartamentoMayorSalarioPromedio(vector<empleado> listaEmpleados);
int obtenerDepartamentoMenorSalarioPromedio(vector<empleado> listaEmpleados);

// Lista de ciudades en Bolivia declarada de manera global
vector<string> ciudadesBolivia = {"La Paz", "Santa Cruz", "Cochabamba", "Sucre", "Oruro", "Tarija", "Potosi", "Beni", "Pando"};

int main() {
    srand(time(NULL));
    system("cls");
    cout << "Llenar datos de empleados, cuantos empleados quiere registrar: ";
    int cantidadEmpleados;
    cin >> cantidadEmpleados;
    for (int i = 0; i < cantidadEmpleados; i++) {
        LlenarDatosEmpleados();
    }
    //Desplegamos los resultados
    cout << "Mayor salario: " << obtenerMayorSalario(empleados).nombre << endl;
    cout << "Menor salario: " << obtenerMenorSalario(empleados).nombre << endl;
    cout << "Promedio Salarial: " << obtenerPromedioSalarial(empleados) << endl;
    //Mostramos cada departamento cno su promedio
    for (int i = 1; i <= 9; i++) {
        cout << "Promedio del Departamento " << ciudadesBolivia[i - 1] << " es: " << obtenerPromedioSalarialPorDepartamento(empleados, i) << endl;
    }
    cout << "Departamento con mayor salario en promedio: " << ciudadesBolivia[obtenerDepartamentoMayorSalarioPromedio(empleados) - 1] << endl;
    cout << "Departamento con menor salario en promedio: " << ciudadesBolivia[obtenerDepartamentoMenorSalarioPromedio(empleados) - 1] << endl;
    //-1 para seleccionar la posicion dentro del vector de ciudades

    return 0;
}

void LlenarDatosEmpleados() {
    empleado DatosEmpleado;
    cout << "Ingrese el nombre del empleado: ";
    cin >> DatosEmpleado.nombre;
    DatosEmpleado.ci = rand() % (99999999 - 100000 + 1) + 100000;
    DatosEmpleado.departamento = rand() % (9) + 1;
    DatosEmpleado.salario = 1000.00 + (10000.00 - 1000.00) * (rand() % 1000000L) / 1000000L;//Esta formula es para numeros random flotantes
    cout << "Carnet: " << DatosEmpleado.ci << endl;
    cout << "Departamento: " << ciudadesBolivia[DatosEmpleado.departamento - 1] << endl;
    cout << "Salario: " << DatosEmpleado.salario << endl;
    empleados.push_back(DatosEmpleado);
}

//Las dos siguientes funciones son para saber cual es el menor o mayor salario
empleado obtenerMayorSalario(vector<empleado> listaEmpleados) {
    empleado mayorSalario;

    for (int i = 0; i < listaEmpleados.size(); i++) {
        if (listaEmpleados[i].salario > mayorSalario.salario || mayorSalario.salario == 0.0) {
            mayorSalario = listaEmpleados[i];
        }
    }
    return mayorSalario;
}

empleado obtenerMenorSalario(vector<empleado> listaEmpleados) {
    empleado menorSalario;

    for (int i = 0; i < listaEmpleados.size(); i++) {
        if (listaEmpleados[i].salario < menorSalario.salario || menorSalario.salario == 0.0) {
            menorSalario = listaEmpleados[i];
        }
    }
    return menorSalario;
}

//Obtenemos el promedio
double obtenerPromedioSalarial(vector<empleado> listaEmpleados) {
    double promedioSalarial = 0.0;

    for (int i = 0; i < listaEmpleados.size(); i++) {
        promedioSalarial += listaEmpleados[i].salario;
    }

    return promedioSalarial / listaEmpleados.size();
}

double obtenerPromedioSalarialPorDepartamento(vector<empleado> listaEmpleados, int departamento) {
    double promedioDepartamento = 0.0;
    int contador = 0; //Iniciamos el contador para saber por cuanto hay que dividir

    for (int i = 0; i < listaEmpleados.size(); i++) {
        if (listaEmpleados[i].departamento == departamento) {
            promedioDepartamento += listaEmpleados[i].salario;
            contador++;
        }
    }

    return promedioDepartamento / contador;
}

int obtenerDepartamentoMayorSalarioPromedio(vector<empleado> listaEmpleados) {
    double mayorPromedio = 0.0;
    int mayorPromDepa = 0;

    for (int i = 1; i <= 9; i++) {
        if (obtenerPromedioSalarialPorDepartamento(listaEmpleados, i) > mayorPromedio) { //Convocamos a la otra funcion para obtener los promedios de un solo departamento
            mayorPromDepa = i;
            mayorPromedio = obtenerPromedioSalarialPorDepartamento(listaEmpleados, i);
        }
    }

    return mayorPromDepa;
}

int obtenerDepartamentoMenorSalarioPromedio(vector<empleado> listaEmpleados) {
    double menorPromedio = 1000000.0;
    int menorPromDepa = 0;

    for (int i = 1; i <= 9; i++) {
        double promedio = obtenerPromedioSalarialPorDepartamento(listaEmpleados, i);//Convocamos a la otra funcion para obtener los promedios de un solo departamento
        if (promedio < menorPromedio) {
            menorPromDepa = i;
            menorPromedio = promedio;
        }
    }

    return menorPromDepa;
}