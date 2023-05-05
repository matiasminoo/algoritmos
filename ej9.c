#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado1, dado2, suma;

    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // Generar dos números aleatorios entre 1 y 6
    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;

    // Calcular la suma de los dos números
    suma = dado1 + dado2;

    // Mostrar el resultado
    printf("Primer dado: %d\n", dado1);
    printf("Segundo dado: %d\n", dado2);
    printf("Suma: %d\n", suma);

    return 0;
}
