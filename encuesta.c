#include <stdio.h>
#include <unistd.h>

int main() {

  int marvel = 0, dc = 0, invalid = 0, times, question;

  printf("Gente a entrevistar: ");
  scanf("%i", &times);

  printf("Escribe un numero: DC (1), Marvel (2), Salir del programa (0)\n");

  for (int a = 1; a < times + 1; a++) {
    printf("Persona %d: ", a);
    scanf("%i", &question);
    if (question == 0) {
      a = times;
    } else if (question == 1) {
      dc++;
    } else if (question == 2) {
      marvel++;
    } else {
      invalid++;
    }
  }

  printf("Votos por DC: %i\n", dc);
  printf("Votos por Marvel: %i\n", marvel);
  printf("Votos no validos: %i\n", invalid);

  sleep(3);
  return 0;
}
