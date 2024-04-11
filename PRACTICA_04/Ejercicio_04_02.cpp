// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 10/04/2024
// Fecha modificación: 11/04/2024
// Número de ejercicio: 2
/* Problema planteado: Ingresar el tamaño de un vector de más de 5 elementos y llenar con número aleatorios entre 1 y 1000, desplegar el vector original y luego ordenarlo con los siguientes métodos.
Ordenar por selección.
Ordenar por inserción.
Ordenar por el método burbuja.
Ordenar por Shell.
Ordenar por Quicksort.
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void ingresarDatos(int&);
void numerosRandom(int, int, int, vector<int>&);
void desplegarVector(int, vector<int>&);
void ordenarPorSeleccion(int, vector<int>);
void ordenarPorInsercion(int, vector<int>);
void ordenarPorBurbuja(int, vector<int>);
void ordenarPorShell(int, vector<int>);
vector<int> ordenarPorQuickSort(vector<int>);
void quickSort(vector<int>&, int, int);

int main() {
    int inicio, fin, cantidad;
    inicio = 1;
    fin = 1000;

    ingresarDatos(cantidad);

    vector<int> numerosDados(cantidad);

    srand(time(NULL));

    numerosRandom(inicio, fin, cantidad, numerosDados);

    desplegarVector(cantidad, numerosDados);

    ordenarPorSeleccion(cantidad, numerosDados);

    ordenarPorInsercion(cantidad, numerosDados);

    ordenarPorBurbuja(cantidad, numerosDados);

    ordenarPorShell(cantidad, numerosDados);

    vector<int> numerosOrdenados;

    numerosOrdenados = ordenarPorQuickSort(numerosDados); // realizamos la copia del vector para que no se modifique en este ordenamiento
    cout << "Metodo de Quicksort" << endl; //Aqui incluyo los mensajes para que no se repita mas de una vez
    cout << "El vector ordenado es: ";
    desplegarVector(cantidad, numerosOrdenados); //Llamamos a la funcion de despliegue

    return 0;
}

void ingresarDatos(int& cantidad) {
    cout << "Ingrese el tamanio del vector: ";
    cin >> cantidad;
}

void numerosRandom(int inicio, int fin, int cantidad, vector<int>& numerosDados) {
    for (int i = 0; i < cantidad; i++) {
        numerosDados[i] = rand() % (fin - inicio + 1) + inicio;
    }
    cout << "El vector original es: ";
}

void desplegarVector(int cantidad, vector<int>& numerosDados) {
    for (int i = 0; i < cantidad; i++) {
        cout << numerosDados[i] << "\t";
    }
    cout << endl;
}

void ordenarPorSeleccion(int cantidad, vector<int> numerosDados) { //Realizamos el orden por seleccion
    cout << "Metodo de seleccion" << endl;

    vector<int> numerosOrdenados = numerosDados; // Creamos una copia para que el vector original no se modifique para nada

    int menor, num;
    for (int i = 0; i < cantidad - 1; i++) {
        menor = i; //El menor numero siempre sera el indice actual
        for (int j = i + 1; j < cantidad; j++) {
            if (numerosOrdenados[j] < numerosOrdenados[menor]) {
                menor = j; // En el caso de que sea menor se cambia la variable del menor
            }
        }
        num = numerosOrdenados[menor];
        numerosOrdenados[menor] = numerosOrdenados[i];
        numerosOrdenados[i] = num; //Intercambiamos las posiciones para que este en orden
    }
    cout << "El vector ordenado es: ";
    desplegarVector(cantidad, numerosOrdenados); //Llamamos a la funcion de despliegue
}

void ordenarPorInsercion(int cantidad, vector<int> numerosDados) {
    cout << "Metodo de insercion" << endl;

    vector<int> numerosOrdenados = numerosDados; // Creamos una copia para que el vector original no se modifique para nada

    int c, comparar;
    for (int i = 1; i < cantidad; i++) {
        comparar = numerosOrdenados[i]; //Guardamos el valor actual 
        c = i - 1;

        while (c >= 0 && numerosOrdenados[c] > comparar) {
            numerosOrdenados[c + 1] = numerosOrdenados[c]; //En el caso de que el valor sea mayor al que estamos comparando se recorren los numeros
            c = c - 1;
        }

        numerosOrdenados[c + 1] = comparar; // Aqui modifcamos las posiciones del vector
    }

    cout << "El vector ordenado es: ";
    desplegarVector(cantidad, numerosOrdenados); //Llamamos a la funcion de despliegue
}

void ordenarPorBurbuja(int cantidad, vector<int> numerosDados) {
    cout << "Metodo de burbuja" << endl;

    vector<int> numerosOrdenados = numerosDados; // Creamos una copia para que el vector original no se modifique para nada

    for (int i = 0; i < cantidad - 1; i++) {
        for (int j = 0; j < cantidad - i - 1; j++) { // Se mueve por las partes que no esten ordenadas
            if (numerosOrdenados[j] > numerosOrdenados[j + 1]) {
                swap(numerosOrdenados[j], numerosOrdenados[j + 1]); //Intercambiamos los elementos en caso de que no este ordenado
            }
        }
    }

    cout << "El vector ordenado es: ";
    desplegarVector(cantidad, numerosOrdenados); //Llamamos a la funcion de despliegue
}

void ordenarPorShell(int cantidad, vector<int> numerosDados) {
    cout << "Metodo de shell" << endl;

    vector<int> numerosOrdenados = numerosDados;  // Creamos una copia para que el vector original no se modifique para nada

    for (int i = cantidad / 2; i > 0; i /= 2) { // Definimos los grupos
        for (int j = i; j < cantidad; j++) { // Recorremos estos grupos por el vector
            int k;
            for (k = j; k >= i && numerosOrdenados[k - i] > numerosOrdenados[k]; k -= i) {
                swap(numerosOrdenados[k], numerosOrdenados[k - i]); //Intercambiamos las posiciones
            }
        }
    }

    cout << "El vector ordenado es: ";
    desplegarVector(cantidad, numerosOrdenados); //Llamamos a la funcion de despliegue
}

vector<int> ordenarPorQuickSort(vector<int> numerosDados) { //Necesitamos que retorne algo para que no se modifique el vector original
    vector<int> numerosOrdenados = numerosDados;

    quickSort(numerosOrdenados, 0, numerosOrdenados.size() - 1);

    return numerosOrdenados;
}

void quickSort(vector<int>& numerosOrdenados, int inicio, int final) {
    if (inicio < final) { 
        int pivote = numerosOrdenados[final]; // Seleccionamos el pivote como la ultima posicion
        int indice = inicio - 1;

        for (int i = inicio; i <= final - 1; i++) {
            if (numerosOrdenados[i] < pivote) {
                indice++; // Se incrementa la cantidad en el caso de que sea menor que el pivote
                swap(numerosOrdenados[indice], numerosOrdenados[i]); //intercambiamos elementos considerando las posiciones
            }
        }
        swap(numerosOrdenados[indice + 1], numerosOrdenados[final]); //Pivote en posicion correcta

        int segundoPivote = indice + 1; //Indice del pivote

        quickSort(numerosOrdenados, inicio, segundoPivote - 1); //Se los llama para ir verificando de izquierda y derecha respectivamente
        quickSort(numerosOrdenados, segundoPivote + 1, final);
    }
}
