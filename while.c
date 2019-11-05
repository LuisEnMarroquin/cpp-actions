#include <stdio.h>
#include <unistd.h>

int main() {

  int marvel = 0, dc = 0, invalid = 0, times = 0, person = 1, question;

  printf("Escribe un numero: DC (1), Marvel (2), Salir del programa (0)\n");

  while (times == 0) {
    printf("Persona %d: ", person);
    scanf("%i", &question);
    if (question == 0) times = 1;
    else if (question == 1) dc++;
    else if (question == 2) marvel++;
    else invalid++;
    person++;
  }

  printf("Votos por DC: %i\n", dc);
  printf("Votos por Marvel: %i\n", marvel);
  printf("Votos no validos: %i\n", invalid);

  sleep(3);
  return 0;
}
