// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 2
/* Problema planteado: Escribe una función que reciba dos palabras (String) y retorne verdadero o falso (Bool)
según sean o no anagramas.
- Un Anagrama consiste en formar una palabra reordenando TODAS las letras de otra
palabra inicial.
- NO hace falta comprobar que ambas palabras existan.
- Dos palabras exactamente iguales no son anagrama*/ 

#include <iostream>

using namespace std;

string InvertirFrase(string);

int main() {
  string Frase;
  cout << "Ingrese la frase o palabra que desea invertir:" << endl;
  getline(cin, Frase);
  cout << InvertirFrase(Frase) << endl;
  return 0;
}
string InvertirFrase(string Frase) {
  string invertido = "";
  for (int i = Frase.length() - 1; i >= 0; i--) {
    invertido += Frase.at(i);    
  }
  return invertido;
}
