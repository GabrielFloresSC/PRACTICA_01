// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/04/2024
// Fecha modificación: 24/04/2024
// Número de ejercicio: 4
/* Problema planteado: Se tiene una lista de empleados de la Alcaldía de La Paz y esta se almacena en una
variable tipo struct llamada “empleado”. La información con la que se cuenta es:
nombre, genero, salario
Realizar un programa en C++ que lea un array de estructuras los datos de los N
trabajadores de la empresa e imprima los datos de los empleados con menor y mayor
salario.
*/

#include <iostream>
#include <vector>

using namespace std;

struct Empleado {
    string nombre;
    string genero;
    float salario;
};

void introducirDatos(vector<Empleado>& empleados);
Empleado buscarEmpleadoMayorSalario(vector<Empleado> empleados);
Empleado buscarEmpleadoMenorSalario(vector<Empleado> empleados);
void imprimirEmpleado(Empleado empleados);

int main() {
    vector<Empleado> empleados;
    introducirDatos(empleados);

    Empleado empleadoMayorSalario = buscarEmpleadoMayorSalario(empleados);
    Empleado empleadoMenorSalario = buscarEmpleadoMenorSalario(empleados);

    cout << "\nEmpleado con mayor salario:" << endl;
    imprimirEmpleado(empleadoMayorSalario);

    cout << "\nEmpleado con menor salario:" << endl;
    imprimirEmpleado(empleadoMenorSalario);

    return 0;
}

void introducirDatos(vector<Empleado>& empleados) {
    int cantidadEmpleados;
    cout << "Ingrese el numero de empleados: ";
    cin >> cantidadEmpleados;
    cin.ignore(); // salto de linea para evitar errores

    for (int i = 0; i < cantidadEmpleados; i++) {
        Empleado nuevoEmpleado;
        cout << "Empleado " << i + 1 << ":" << endl;
        cout << "Nombre: ";  
        getline(cin, nuevoEmpleado.nombre); //getline funciona mejor cuando manejamos string, esto para evitar delimitar el tamaño del char
        cout << "Genero: ";
        getline(cin, nuevoEmpleado.genero);
        cout << "Salario: ";
        cin >> nuevoEmpleado.salario;
        cin.ignore();
        empleados.push_back(nuevoEmpleado);
    }
}

Empleado buscarEmpleadoMayorSalario(vector<Empleado> empleados) {
    Empleado empleadoMayorSalario = empleados[0];
    for (int i = 1; i < empleados.size(); i++) {
        if (empleados[i].salario > empleadoMayorSalario.salario) { //sacamos cual es el con mayor salario
            empleadoMayorSalario = empleados[i];
        }
    }
    return empleadoMayorSalario;
}

Empleado buscarEmpleadoMenorSalario(vector<Empleado> empleados) {
    Empleado empleadoMenorSalario = empleados[0];
    for (int i = 1; i < empleados.size(); i++) {
        if (empleados[i].salario < empleadoMenorSalario.salario) { //sacamos cual es el con menor salario
            empleadoMenorSalario = empleados[i];
        }
    }
    return empleadoMenorSalario;
}

void imprimirEmpleado(Empleado empleados) {
    cout << "Nombre: " << empleados.nombre << endl;
    cout << "Genero: " << empleados.genero << endl;
    cout << "Salario: " << empleados.salario << endl;
}
