#include <stdio.h>
// Inicializarla elemento a elemento

int main(void) {

  char nombre[100] = "Hola, mundo!";
  nombre[1] -= ' ';
  printf("%s\n", nombre);

  return 0;
}
