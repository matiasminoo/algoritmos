#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generarNumeroAleatorio() {
    srand(time(NULL));  // Inicializar la semilla aleatoria
    
    int numeroAleatorio = rand();
    return numeroAleatorio;
}

int main() {
    int resultado = generarNumeroAleatorio();
    printf("Número aleatorio: %d\n", resultado);
    
    return 0;
}
