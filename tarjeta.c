#include <stdio.h>
#include <unistd.h>

int main() {

  int cuenta = 1000000, pin = 1, cliente = 1, login = 0, intentos = 3, pinInput, clienteInput, opcion, cantidad, cuentaTransferencia;

  printf("Bienvenido al cajero\n");

  while (1) {
    // Numero de cliente
    printf("Inserte su numero de cliente: ");
    scanf("%i", &clienteInput);
    // Pin del cleinte
    printf("Inserte su pin: ");
    scanf("%i", &pinInput);
    // Intentos
    intentos--;
    if (intentos <= 0) {
      printf("* Haz agotado los 3 intentos, denunciandote por fraude *\n");
      break;
    }
    // Validation
    if (pinInput == pin && clienteInput == cliente) {
      login = 1;
      break;
    } else {
      printf("* Su numero de cliente o su pin son incorrectos *\n");
    }
  }

  if (login == 1) {
    int next = 1;
    while (next) {
      printf("Bienvenido\n");
      printf("1. Depositar\n");
      printf("2. Retirar\n");
      printf("3. Transferir\n");
      printf("4. Consultar saldo\n");
      // Opcion
      printf("Eliga una opcion: ");
      scanf("%i", &opcion);
      // switch
      switch (opcion) {
        case 1:
          printf("Cuanto deseas depositar: ");
          scanf("%i", &cantidad);
          cuenta = cuenta + cantidad;
          printf("Su saldo de cuenta es: %i\n", cuenta);
          break;
        case 2:
          printf("Cuanto deseas retirar: ");
          scanf("%i", &cantidad);
          cuenta = cuenta - cantidad;
          printf("Su saldo de cuenta es: %i\n", cuenta);
          break;
        case 3:
          printf("Cuanto deseas tranferir: ");
          scanf("%i", &cantidad);
          printf("A que cuenta deseas transferir: ");
          scanf("%i", &cuentaTransferencia);
          cuenta = cuenta - cantidad;
          printf("Se han transferido %i a la cuenta %i\n", cuenta, cuentaTransferencia);
          printf("Su saldo de cuenta es: %i\n", cuenta);
          break;
        case 4:
          printf("Su saldo de cuenta es: %i\n", cuenta);
          break;
        default:
          printf("Gracias por perder el tiempo en el cajero\n");
          break;
      }
      printf("Desea hacer otra transacción?\n");
      printf("0. No\n");
      printf("1. Si\n");
      scanf("%i", &next);
    }
  }

  printf("Gracias por usar el cajero\n");

  sleep(1);
  return 0;
}
