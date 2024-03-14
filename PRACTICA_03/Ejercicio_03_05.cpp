// Materia: Programación I, Paralelo 1
// Autor: Gabriel Fernando Flores Santa Cruz
// Fecha creación: 13/03/2024
// Fecha modificación: 13/03/2024
// Número de ejercicio: 5
/* Problema planteado: Crea un programa que invierta el orden de una cadena de texto sin usar funciones
propias del lenguaje que lo hagan de forma automática.
- Si le pasamos "Hola mundo" nos retornaría "odnum aloH"*/

#include <iostream>
#include <algorithm>

using namespace std;

bool anagramas(string, string);
string CambioAMinusculas(string);

int main() {

    string palabra1;
    string palabra2;

    cout << "Ingrese la primera palabra que desea verificar:" << endl;
    cin >> palabra1;
    cout << "Ingrese la segunda palabra que desea verificar:" << endl;
    cin >> palabra2;

    if (anagramas (palabra1, palabra2))
        cout << "Es un anagrama" << endl;
    else
        cout << "No es un anagrama" << endl;
    return 0;
}

bool anagramas(string palabra1, string palabra2) {
  string Palabra1minusculas, Palabra2minusculas;
  Palabra1minusculas = CambioAMinusculas(palabra1);
  Palabra2minusculas = CambioAMinusculas(palabra2);

  if (Palabra1minusculas == Palabra2minusculas) {
    return false; // Si son iguales no pueden ser anagramas
  }

  // Se ordena con la funcion sort las palabras (tomara el valor ascii por eso lo convertimos en minusculas)
  sort(Palabra1minusculas.begin(), Palabra1minusculas.end());
  sort(Palabra2minusculas.begin(), Palabra2minusculas.end());

  if (Palabra1minusculas == Palabra2minusculas) { 
    return true; // Si son iguales son anagramas
  }
  return false;
}

string CambioAMinusculas(string palabra) { // Transformamos las palabras en minusculas
  string minusculas;
  for (int i = 0; i < palabra.length(); i++) {
    if (palabra.at(i) < 97) { // Verificamos que sean mayusculas
      minusculas += (palabra.at(i) + 32); // Con el .at(i) vemos la posicion actual del vector y verificamos que no exceda el tamanio del string
    } else {
      minusculas += palabra.at(i);
    }
  }
  return minusculas;
}
