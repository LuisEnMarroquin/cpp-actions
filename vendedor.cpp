#include <cstdlib>
#include <iostream>
using namespace std;

int vendedorConMasVentas(double pCalifs[][5]);
int vendedorConMenosVentas(double pCalifs[][5]);
int mesConMenosVentas(double pCalifs[][5]);
int mesConMasVentas(double pCalifs[][5]);
int sumaVentasTotales(double pCalifs[][5]);
int porcentajeDeVenta(double pCalifs[][5]);
int menorIgual1000(double pCalifs[][5]);

int main(int argc, char *argv[]){

	double califs[4][5] = { 
		{3500, 550, 4000, 0, 4800},	// Vendedor 1
		{1000, 7500, 2500, 320, 5400}, // Vendedor 2
		{6000, 3480, 100, 2000, 230}, // Vendedor 3
		{7345, 2590, 1100, 130, 9490} // Vendedor 4
	};

	cout << endl << "a. Vendedor con mas ventas: " << vendedorConMasVentas(califs) << "\n" << endl;
	cout << endl << "b. Vendedor con menos ventas: " << vendedorConMenosVentas(califs) << "\n" << endl;
	cout << endl << "c. Mes con menos ventas: " << mesConMenosVentas(califs) << "\n" << endl;
	cout << endl << "d. Mes con mas ventas: " << mesConMasVentas(califs) << "\n" << endl;
	cout << endl << "e. Suma de ventas totales de los 4 vendedores durante esos cinco meses: " << sumaVentasTotales(califs) << "\n" << endl;
	cout << endl << "f. Porcentaje de venta por vendedor: " << porcentajeDeVenta(califs) << "%\n" << endl;
	cout << endl << "g. Mes o meses que algun vendedor tuvo una suma de ventas menor o igual a $1000: " << menorIgual1000(califs) << "\n" << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}

int vendedorConMasVentas(double pCalifs[][5]){
	double sumCalxAlum; // Almacena el acumulado del vendedor en cuestion
	double mayorAcumCalif; // Almacena la sumatoria mas alta
	int numAlumMayorCalif; // Almacena el numero/indice de vendedor con mayor acumulado
	for(int i = 0; i < 4; i ++){
		cout << "Ventas del vendedor " << i + 1 << ": ";
		sumCalxAlum = 0;	// Sumatoria inicializada en cero para empezar
		for (int j = 0; j < 5; j++) {
			cout << pCalifs[i][j] << " ";
			sumCalxAlum = sumCalxAlum + pCalifs[i][j]; // Acumula/Suma ventas
		}
		if (i==0) {							
			mayorAcumCalif = sumCalxAlum; // Si es el primer vendedor entonces mayorAcumCalif almacenara el primer acumulado porque es el mayor hasta el momento
			numAlumMayorCalif = i; // hasta este momento el primer vendedor tiene el mayor acumulado
		} else {
			if (mayorAcumCalif < sumCalxAlum) { // A partir del segundo vendedor, comparamos quien tiene el acumulado mayor, el vendedor anterior o el actual
				mayorAcumCalif = sumCalxAlum; // Si el acumulado actual es mayor entonces mayorAcumCalif se actualiza al nuevo dato mayor
				numAlumMayorCalif = i + 1; // El vendedor con acumulado mayor es el actual
			}
		}
		cout << endl<< "Sumatoria: " << sumCalxAlum<<endl;
	}
	return numAlumMayorCalif;
}

int vendedorConMenosVentas(double pCalifs[][5]){
	double sumCalxAlum;
	double mayorAcumCalif;
	int numAlumMayorCalif;
	for(int i = 0; i < 4; i ++){
		cout << "Ventas del vendedor " << i + 1 << ": ";
		sumCalxAlum = 0;
		for (int j = 0; j < 5; j++) {
			cout << pCalifs[i][j] << " ";
			sumCalxAlum = sumCalxAlum + pCalifs[i][j];
		}
		if (i==0) {							
			mayorAcumCalif = sumCalxAlum;
			numAlumMayorCalif = i;
		} else {
			if (mayorAcumCalif > sumCalxAlum) { 
				mayorAcumCalif = sumCalxAlum;
				numAlumMayorCalif = i + 1;
			}
		}
		cout << endl<< "Sumatoria: " << sumCalxAlum<<endl;
	}
	return numAlumMayorCalif;
}

int mesConMenosVentas(double pCalifs[][5]){
	double sumCalxMat;
	double menorAcumMat;
	int numMatMenorCalif;
	for(int j = 0; j < 5; j++){
		cout << "Ventas del mes " << j + 1 << ": ";
		sumCalxMat =0;
		for (int i = 0; i < 4; i++) {
			cout << pCalifs[i][j] << " ";
			sumCalxMat += pCalifs[i][j];
		}
		if (j==0) {
			menorAcumMat = sumCalxMat;
			numMatMenorCalif = j;						 
		} else {
			if (sumCalxMat < menorAcumMat){
				menorAcumMat = sumCalxMat;
				numMatMenorCalif = j +1;
			}
		}
		cout << endl<< "Sumatoria: " << sumCalxMat<<endl;
	}
	return numMatMenorCalif;	
}

int mesConMasVentas(double pCalifs[][5]){
	double sumCalxMat; // Almacena el acumulado de calificaciones de la materia en cuesti?n
	double menorAcumMat; // Almacena la sumatoria m?s baja
	int numMatMenorCalif; // Almacena el n?mero/indice de materia con menor acumulado
	for(int j = 0; j < 5; j++){
		cout << "Ventas del mes " << j + 1 << ": ";
		sumCalxMat =0;
		for (int i = 0; i < 4; i++) {
			cout << pCalifs[i][j] << " ";
			sumCalxMat += pCalifs[i][j];
		}
		if (j==0) { // Si es la primer materia entonces mayorAcumCalif almacenara el primer acumulado porque es el mayor hasta el momento
			menorAcumMat = sumCalxMat; // hasta este momento la primer materia tiene el menor acumulado
			numMatMenorCalif = j;						 
		} else {
			if (sumCalxMat > menorAcumMat){ // A partir de la segunda materia, comparamos quien tiene el acumulado menor, la materia anterior o la actual
				menorAcumMat = sumCalxMat; // Si el acumulado actual es menor entonces menorAcumMat se actualiza al nuevo dato menor
				numMatMenorCalif = j +1; // La materia con acumulado menor es la actual
			}
		}
		cout << endl<< "Sumatoria: " << sumCalxMat<<endl;
	}
	return numMatMenorCalif;	
}

int sumaVentasTotales(double pCalifs[][5]){
	double sumCalxMat;
	double menorAcumMat;
	int numMatMenorCalif;
	double sumaFinal;
	for(int j = 0; j < 5; j++){
		cout << "Ventas del mes " << j + 1 << ": ";
		sumCalxMat =0;
		for (int i = 0; i < 4; i++) {
			cout << pCalifs[i][j] << " ";
			sumCalxMat += pCalifs[i][j];
		}
		cout << endl<< "Sumatoria: " << sumCalxMat<<endl;
		sumaFinal += sumCalxMat;
	}
	return sumaFinal;	
}

int porcentajeDeVenta(double pCalifs[][5]){
	double sumCalxMat;
	double menorAcumMat;
	int numMatMenorCalif;
	double sumaFinal;
	for(int j = 0; j < 5; j++){
		sumCalxMat =0;
		for (int i = 0; i < 4; i++) {
			sumCalxMat += pCalifs[i][j];
		}
		sumaFinal += sumCalxMat;
	}	
	double sumCalxAlum;
	double mayorAcumCalif;
	for(int i = 0; i < 4; i ++){
		cout << "Porcentaje de ventas del vendedor " << i + 1 << ": ";
		sumCalxAlum = 0;
		for (int j = 0; j < 5; j++) {
			sumCalxAlum = sumCalxAlum + pCalifs[i][j];
		}
		double porcentaje = sumCalxAlum / sumaFinal * 100;
		cout << porcentaje << "%" << endl;
	}
	return 100;
}

int menorIgual1000(double pCalifs[][5]){
	double sumCalxAlum;
	double mayorAcumCalif;
	int numAlumMayorCalif;
	int cuantasVeces = 0;
	for(int i = 0; i < 4; i ++){
		cout << "Durante estos meses obtuvo 1000 o menos el vendedor " << i + 1 << ": ";
		sumCalxAlum = 0;
		for (int j = 0; j < 5; j++) {
			if (pCalifs[i][j] < 1001) {
				cout << "Mes " << j + 1 << "(" << pCalifs[i][j] << "), ";
				cuantasVeces++;
			}	
			sumCalxAlum = sumCalxAlum + pCalifs[i][j];
		}
		cout << "\n";
	}
	return cuantasVeces;
}
