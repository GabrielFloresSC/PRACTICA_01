// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 13/03/2024
// Fecha modificación: 14/03/2024
// Número de ejercicio: 5
/* Problema planteado: Crea un programa que invierta el orden de una cadena de texto sin usar funciones
propias del lenguaje que lo hagan de forma automática.
- Si le pasamos "Hola mundo" nos retornaría "odnum aloH"*/

#include <iostream>

using namespace std;

string InvertirFrase(string);

int main() {
  string Frase;
  cout << "Ingrese la frase o palabra que desea invertir:" << endl;
  getline(cin, Frase);//con getline permitimos que la frase pueda tener espacios incluidos
  cout << InvertirFrase(Frase) << endl; // Desplegamos el string invertido
  return 0;
}

string InvertirFrase(string Frase) {
  string invertido = "";// Un string vacio en el que almacenaremos la frase invertida
  for (int i = Frase.length() - 1; i >= 0; i--) {
    invertido += Frase.at(i);    
  }
  return invertido; // retornamos el nuevo string
}
