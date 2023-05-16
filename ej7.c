#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// A
int generarNumeroAleatorio() {
    srand(time(NULL));  // Inicializar la semilla aleatoria
    
    int numeroAleatorio = rand();
    return numeroAleatorio;
}
// B
int randomNum() {
    int randomNumCeroaCien = rand() % 100;
    return randomNumCeroaCien;
}
// C
int randomNum2() {
    int randomNumCeroaDiez = rand() % 11;
    return randomNumCeroaDiez;
}
// D
int randomNum3() {
    int random = rand();
    return random;
}
// E
int randomNum4(int a, int b) {
    int rango = b - a; 
    int aleatorio = rand() % rango + a;  
    return aleatorio;
}
// F
int randomNum5(int a, int b) {
    int aleatorio = rand() % (b - a + 1) + a;  
    return aleatorio;
}
int main() {
    int a = 1;
    int b = 3;
    int a7 = generarNumeroAleatorio();
    int b7 = randomNum();
    int c7 = randomNum2();
    int d7 = randomNum3();
    int e7 = randomNum4(a,b);
    int f7 = randomNum5(a,b);
    printf("Número aleatorio: %d\n", a7);
    printf("numero random entre cero y cien: %d\n", b7);
    printf("numero random entre cero y diez %d\n", c7);
    printf("numero random entre 0 y n: %d\n", d7);
    printf("numero random entre a y b: %d\n", e7);
    printf("numero random entre a y b incluidos los mismos: %d\n", f7);
    return 0;
}
