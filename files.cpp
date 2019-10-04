#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int vendedorConMasVentas(double pCalifs[][5]);

int main(int argc, char *argv[]){
	ifstream entradaArch;
	ofstream salidaArch;
	int num1, num2, num3;
	entradaArch.open("entrada.txt");
	salidaArch.open("salida.txt");
	entradaArch >> num1 >> num2 >> num3;
	salidaArch << "La suma de los 3 numeros es: " << (num1 + num2 + num3);
	entradaArch.close();
	salidaArch.close();
	return EXIT_SUCCESS;
}
