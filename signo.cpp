#include <cstdlib>
#include <iostream>
#include <sstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int dia, mes;
	cout << "Escriba su dia de nacimiento: "; cin >> dia;
	cout << "Escriba el numero de su mes de nacimiento (Enero = 1, Febrero = 2, etc.): "; cin >> mes;
	
	switch(mes){
		case 1: cout << "Enero\n";
			if (dia < 21) { cout << "Capricornio\n"; } else { cout << "Acuario\n"; }
			break;
		case 2: cout << "Febrero\n";
			if (dia < 20) { cout << "Acuario\n"; } else { cout << "Piscis\n"; }
			break;
		case 3: cout << "Marzo\n";
			if (dia < 21) { cout << "Piscis\n"; } else { cout << "Aries\n"; }
			break;
		case 4: cout << "Abril\n";
			if (dia < 21) { cout << "Aries\n"; } else { cout << "Tauro\n"; }
			break;
		case 5: cout << "Mayo\n";
			if (dia < 22) { cout << "Tauro\n"; } else { cout << "Geminis\n"; }
			break;
		case 6: cout << "Junio\n";
			if (dia < 23) { cout << "Geminis\n"; } else { cout << "Cancer\n"; }
			break;
		case 7: cout << "Julio\n";
			if (dia < 24) { cout << "Cancer\n"; } else { cout << "Leo\n"; }
			break;
		case 8: cout << "Agosto\n";
			if (dia < 24) { cout << "Leo\n"; } else { cout << "Virgo\n"; }
			break;
		case 9: cout << "Septiembre\n";
			if (dia < 24) { cout << "Virgo\n"; } else { cout << "Libra\n"; }
			break;
		case 10: cout << "Octubre\n";
			if (dia < 24) { cout << "Libra\n"; } else { cout << "Escorpion\n"; }
			break;
		case 11: cout << "Noviembre\n";
			if (dia < 24) { cout << "Escorpion\n"; } else { cout << "Sagitario\n"; }
			break;
		case 12: cout << "Diciembre\n";
			if (dia < 24) { cout << "Sagitario\n"; } else { cout << "Capricornio\n"; }
			break;
		default: cout << "No ha elegido un mes valido\n";
	}
	
	system("PAUSE");
	return EXIT_SUCCESS;
}
