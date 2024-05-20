// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 15/05/2024
// Fecha modificación: 20/05/2024
// Número de ejercicio: 9
// Problema planteado: Realizar un algoritmo recursivo para Generar la secuencia: 1, 1, 2, 4, 8, 16, 23,
// 28, 38, 49,..., para n términos

# include <iostream>

using namespace std;

int sumaDigitos (int);
int secuencia (int);

int main (){
    system("cls");
    int cantidad;
    cout << "Ingrese la cantidad de numeros que desea obtener: ";
    cin >> cantidad;
    for(int i = 1; i <= cantidad; i++){
        cout << secuencia(i) << "\t"; //Imprimimos los valores y t es para crear una tabulacion entre estos
    }
    return 0;
}

int secuencia (int numero){
    if(numero == 1 || numero == 2){
        return 1;
    } else {
        return sumaDigitos(secuencia(numero - 1)) + secuencia (numero - 1); //Se suman los valores anteriores en la secuencia y se verifica si en el caso de ser mayor a 10 se cumple lo de la otra funcion
    }
}

int sumaDigitos (int numero){
    if(numero < 10){
        return numero;
    } else {
        return numero % 10 + sumaDigitos(numero/10); //Se suman todos los digitos que tenga un numero siempre y cuando sea mayor a 10
    }
}
