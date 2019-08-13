#include <cstdlib>
#include <iostream>

using namespace std;

/* 
 * Programa que calcula la cantidad de latas en un camión de distribución de refresco
 *
 * Entradas:
 *   - numCajas: el n�mero de cajas del cami�n
 *   - latas: el n�mero de latas por caja
 *
 * Salidas:
 *   - Impresi�n en pantalla de la cantidad de latas 
*/
int main(int argc, char *argv[]){
   int numCajas; // Variable para guardar la cantidad de cajas
   int latas;
   int totalLatas;
   cout << "Escribe la cantidad de latas por caja: ";
   cin >> numCajas; // Leer valor ingresado atravez del teclado
   cout << "Escribe la cantidad de cajas del camion: ";
   cin >> latas;
   totalLatas = numCajas * latas;
   cout << "Si tienes: " << numCajas << " cajas, y cada caja ";
   cout << "tiene " << latas <<" latas, " << "el camion tiene ";
   cout << totalLatas << " latas en total." << endl;
   system("PAUSE");
   return EXIT_SUCCESS;
}
