#include <cstdlib>
#include <iostream>
using namespace std;
/*
* Programa que hace la venta de boletos de cine, calcula la cantidad a pagar, da cambio e imprime el ticket
*
* Entradas:
* - nombre: el nombre del cliente
* - apellido: el apellido del cliente
* - boletos: la cantidad de boletos a comprar
* - monto: la cantidad con la que se hará el pago
*
* Salidas:
* - Impresión del total a pagar
* - Impresión del cambio a devolver
* - Impresión del ticket de compra
*/
int main(int argc, char *argv[]){
  string nombre, apellido;
  int boletos, pago, monto, cambio;
  cout << "Escribe tu nombre: ";
  cin >> nombre;
  cout << "Escribe tu apellido: ";
  cin >> apellido;
  cout << "¿Cuantos boletos deseas comprar?";
  cin >> boletos;
  pago = boletos * 35;
  cout << "El total a pagar es: " << pago << endl;
  cout << "Escribe el monto con el que vas a pagar: ";
  cin >> monto;
  cambio = monto - pago;
  cout << "Su cambio es de: " << cambio << endl;
  cout << "Gracias por su compra, este es su comprobante:" << endl;
  cout << "**************************" << endl;
  cout << "* Nombre: " << nombre << endl;
  cout << "* Apellido: " << apellido << endl;
  cout << "* Cantidad de boletos " << boletos  << endl;
  cout << "* Costo por boleto: $35" << endl;
  cout << "**************************" << endl;
  system("PAUSE");
  return EXIT_SUCCESS;
}
