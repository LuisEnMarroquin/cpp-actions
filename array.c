#include <stdio.h>
#include <unistd.h>

int main() {

  int x, tabla[100];

  for (x = 1; x <= 100; x++){
    tabla[x] = x;
  }

  for (x = 1; x <= 100; x++){
    printf("%d \n", tabla[x]);
  }

  sleep(3);
  return 0;
}
