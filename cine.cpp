#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  string nombre, apellido;
  int boletos, pago, monto, cambio;
  cout << "Escribe tu nombre: "; cin >> nombre;
  cout << "Escribe tu apellido: "; cin >> apellido;
  cout << "¿Cuantos boletos deseas comprar? "; cin >> boletos;
  pago = boletos * 35;
  cout << "El total a pagar es: " << pago << endl;
  cout << "Escribe el monto con el que vas a pagar: "; cin >> monto;
  cambio = monto - pago;
  cout << "Su cambio es de: " << cambio << endl;
  cout << "Gracias por su compra, este es su comprobante:" << endl;
  cout << "**************************" << endl;
  cout << "* Nombre: " << nombre << endl;
  cout << "* Apellido: " << apellido << endl;
  cout << "* Cantidad de boletos " << boletos  << endl;
  cout << "* Costo por boleto: $35" << endl;
  cout << "**************************" << endl;
  return EXIT_SUCCESS;
}
