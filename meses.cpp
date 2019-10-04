#include <cstdlib>
#include <iostream>
#include <sstream>
using namespace std;
/*
* Programa que registra datos de usuarios y devuelve su ahorro total durante 4 meses
*
* Entradas (por cada empleado):
* - nombre: el nombre del empleado
* - sexo: el sexo del empleado
* - edad: la edad del empleado
* - telefono: el telefono del empleado
* - mes1: el ahorro del empleado el mes 1
* - mes2: el ahorro del empleado el mes 2
* - mes3: el ahorro del empleado el mes 3
* - mes4: el ahorro del empleado el mes 4
*
* Salidas:
* - Texto de todas las propiedades de cada usuario más su ahorro total
*/
int main(int argc, char *argv[]){

 int num = 5; // Number of employees
 string array [num]; // Array to save data

 for (int i = 1; i <= num; ++i) {
  // Variables
  string nombre, sexo, edad, telefono;
  int mes1, mes2, mes3, mes4;
  // Descripción
  cout << "Introduzca los datos del empleado " << i << endl; // endl = new line
  // Datos del empleado
  cout << "Nombre empleado " << i << ": "; cin >> nombre;
  cout << "Sexo empleado " << i << ": "; cin >> sexo;
  cout << "Edad empleado " << i << ": "; cin >> edad;
  cout << "Telefono empleado " << i << ": "; cin >> telefono;
  cout << "Ahorro mes 1 empleado " << i << ": "; cin >> mes1;
  cout << "Ahorro mes 2 empleado " << i << ": "; cin >> mes2;
  cout << "Ahorro mes 3 empleado " << i << ": "; cin >> mes3;
  cout << "Ahorro mes 4 empleado " << i << ": "; cin >> mes4;
  // Suma ahorro total
  int total = mes1 + mes2 + mes3 + mes4;
  // Parse int to string
  std::string out_string;
  std::stringstream ss;
  ss << total;
  out_string = ss.str();
  // Add to array
  array[i-1] = " - " + nombre + " de sexo " + sexo + " tiene " + edad + " a�os de edad, su telefono es " + telefono + " y ha ahorrado " + out_string + " durante estos 4 meses.";
 }

 for (int i = 1; i <= num; ++i) {
  string print = array[i-1];
  cout << print << endl;
 }

 system("PAUSE");
 return EXIT_SUCCESS;
}
