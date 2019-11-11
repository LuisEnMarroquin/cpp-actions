#include <stdio.h>

int main() {
  printf("Hello, World!\n");
  printf("<stdio.h> is header file for Standard Input Output\n");
  printf("<stdio.h> contains declaration of printf() and scanf()\n");
  printf("As a basic principle, in C (due to its association with UNIX history), keyboard and display are also treated as files!");

  int a = 1;
  char b ='G';
  float c = 45.6;
  double d = 3.14;

  printf("\nint: %i", a);
  printf("\nchar: %c", b);
  printf("\nfloat: %f", c);
  printf("\ndouble: %f", d);

  const int SIDE = 10;

  int acumulador = 0;
  for (int i = 0; i < 5; i++) {
    acumulador = acumulador + 1;
  }
  printf("%d\n", acumulador);

  printf("Press ENTER key to Continue\n");
  getchar(); // Don't close immediately
  return 666;
}
