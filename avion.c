#include <stdio.h>
#include <unistd.h>

int estaDisponible ();

int main () {

  int user, pass, login = 0;

  // Login
  printf("User: ");
  scanf("%i", &user);
  printf("Pass: ");
  scanf("%i", &pass);
  if (user == 123 && pass == 123) login = 1;
  else printf("Su usuario y password son incorrectos\n");

  if (login == 1) {

    int FA[5] = { 0, 0, 0, 0, 0 }; // VIP
    int FB[5] = { 0, 0, 0, 0, 0 }; // Turista
    int FC[5] = { 0, 0, 0, 0, 0 }; // Infante

    int VIP = 0, TUR = 0, INF = 0; // Cantidad de boletos
    int VIPD = 0, TURD = 0, INFD = 0; // Costo de los descuentos
    int VIPP = 75, TURP = 50, INFP = 25; // Precios
    int times = 1, tipo = 0, numero = 0, disponible = 0, again = 0;

    printf("\nLos precios de los boletos son: VIP = %d, Turista = %d e Infante = %d\n", VIPP, TURP, INFP);

    for (int a = 0; a < times; a++) {
      // Variables siempre reiniciables
      int descuento = 2;
      // Mostrar asientos disponibles
      for (int i = 0; i < 5; i++) {
        if (i == 0) printf("\n- V T I \n");
        printf("%d %d %d %d \n", i+1, FA[i], FB[i],FC[i]);
      }
      // Tipo de asiento
      printf("\nQue tipo de asiento quiere?\n");
      printf("1. VIP\n");
      printf("2. Turista\n");
      printf("3. Infante\n");
      scanf("%d", &tipo);
      // Numero de asiento
      printf("\nQue numero de asiento quiere?\n");
      scanf("%d", &numero);
      // Checando si el asiento esta disponible
      if (tipo == 1) disponible = estaDisponible(FA, numero, tipo);
      else if (tipo == 2) disponible = estaDisponible(FB, numero, tipo);
      else if (tipo == 3) disponible = estaDisponible(FC, numero, tipo);
      else disponible = -1;
      // Si el asiento esta disponible
      if (disponible == 0) printf("\n*** El asiento no esta disponible ***\n");
      else if (disponible == -1) printf("\n*** El tipo de asiento no es valido ***\n");
      else {
        printf("\nDesea darle descuento a este cliente?\n");
        printf("1. Si\n");
        printf("2. No\n");
        scanf("%d", &descuento);
        // Texto
        printf("\n*** Asiento reservado. Buen viaje! ***\n");
        // Declarando asiento como ocupado
        if (disponible == 1) {
          FA[numero - 1] = 1;
          if (descuento == 1) VIPD += 5;
        } else if (disponible == 2) {
          FB[numero - 1] = 1;
          if (descuento == 1) TURD += 5;
        } else if (disponible == 3) {
          FC[numero - 1] = 1;
          if (descuento == 1) INFD += 5;
        }
      }
      // Continuar
      printf("\nQuiere reservar otra vez?\n");
      printf("1. Si\n");
      printf("2. No\n");
      scanf("%d", &again);
      if (again == 1) times++;
    }

    // Total de boletos vendidos
    for (int i = 0; i < 5; i++) {
      VIP += FA[i];
      TUR += FB[i];
      INF += FC[i];
    }

    int ingresosVIP = (VIP * VIPP) - VIPD;
    int ingresosTUR = (TUR * TURP) - TURD;
    int ingresosINF = (INF * INFP) - INFD;
    int ingresosTotales = ingresosVIP + ingresosTUR + ingresosINF;

    printf("Se han vendido %d boletos VIP con precio total de %d\n", VIP, ingresosVIP);
    printf("Se han vendido %d boletos Turista con precio total de %d\n", TUR, ingresosTUR);
    printf("Se han vendido %d boletos Infantiles con precio total de %d\n", INF, ingresosINF);
    printf("En total se vendieron %d asientos con unas ganacias de %d\n", VIP + TUR + INF, ingresosTotales);

  }

  printf("Cerrando aplicacion\n");

  sleep(20);
  return 0;
}

int estaDisponible (int array[], int index, int tipo) {
  int value = array[index - 1];
  if (value == 1) return 0; // Asiento ocupado
  else return tipo; // Asiento libre
}
