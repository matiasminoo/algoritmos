#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generarNumeroAleatorio() {
    srand(time(NULL));  // Inicializar la semilla aleatoria
    
    int numeroAleatorio = rand();
    return numeroAleatorio;
}

int randomNum() {
    int randomNumCeroaCien = rand() % 100;
    return randomNumCeroaCien;
}

int randomNum2() {
    int randomNumCeroaDiez = rand() % 11;
    return randomNumCeroaDiez;
}




int main() {
    int resultado = generarNumeroAleatorio();
    int b = randomNum();
    int c = randomNum2();
    printf("Número aleatorio: %d\n", resultado);
    printf("numero random entre cero y cien: %d\n", b);
    printf("numero random entre cero y diez %d\n", c);
    return 0;
}
