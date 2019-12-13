#include <stdio.h>

int MostrarMenu();
float CelsiusAFarenheit();
float CelsiusAKelvin();
float FarenheitAKelvin();
float FarenheitACelsius();

int main()
{
//declarando variables
int opcion=0;
//llamando modulos
MostrarMenu();
scanf("%i", & opcion);
switch(opcion) {
  case 1: { CelsiusAFarenheit(); break; }
  case 2: { CelsiusAKelvin(); break; }
  case 3: { FarenheitAKelvin(); break; }
  case 4: { FarenheitACelsius(); break; }
  case 5: { printf("FIN \n"); break; }
  default:{ printf("Error\n"); }
}
  return 0;
}

int MostrarMenu()
{
  printf ("Convertidor de temperaturas \n");
  printf ("Presiona el numero de la opcion deseada \n");
  printf ("1.- Celsius a Farenheit \n");
  printf ("2.- Celsius a Kelvin \n");
  printf ("3.- Farenheit a Kelvin \n");
  printf ("4.- Farenheit a Celsius \n");
  return 0;
}
float CelsiusAFarenheit(){
  //Declaracion de variables locales
  float C;
  float F;
  printf ("Convertidor de temperaturas \n");
  printf ("1.- Celsius a Farenheit \n");
  printf ("Introduzca el valor de Celsius \n");
  scanf ("%f", &C);
  F=(1.8*C)+32;
  printf("Los grados en Farenheit son: %f \n", F);
  return 0;
}
float CelsiusAKelvin(){
  //Declaracion de variables locales
  float C;
  float K;
  printf ("Convertidor de temperaturas \n");
  printf ("2.- Celsius a Kelvin \n");
  printf ("Introduzca el valor de Celsius \n");
  scanf ("%f", &C);
  K=C+273.15;
  printf("Los grados en Kelvin son: %f \n", K);
  return 0;
}
float FarenheitAKelvin(){
  //Declaracion de variables locales
  float F;
  float K;
  printf ("Convertidor de temperaturas \n");
  printf ("3.- Farenheit a Kelvin \n");
  printf ("Introduzca el valor de Farenheit \n");
  scanf ("%f", &F);
  K=((F-32)*5/9)+273.15;
  printf("Los grados en Kelvin son: %f \n", K);
  return 0;
}
float FarenheitACelsius(){
  //Declaracion de variables locales
  float F;
  float C;
  printf ("Convertidor de temperaturas \n");
  printf ("4.- Farenheit a Celsius \n");
  printf ("Introduzca el valor de Farenheit \n");
  scanf ("%f", &F);
  C=(F-32)*5/9;
  printf("Los grados en Celsius son: %f \n", C);
  return 0;
}
