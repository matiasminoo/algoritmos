#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



// Ejercicio 4

bool same(int a, int b) { return a == b ? 1 : 0; }

int abs_value(int x) { return x < 0 ? -x : x; }

int max(int a, int b) { return a >= b ? a : b; }

int min(int a, int b) { return a <= b ? a : b; }

double promedio(int a, int b) {
      return (a + b) / 2; 
}

int main() {
    printf("%d\n", same(3,6));
    printf("%.2f\n", promedio(3,6));
    printf("El valor absoluto es: %d\n", abs_value(3));
    printf("El valor maximo es: %d\n", max(3,6));
    printf("El valor minimo es: %d\n", min(3,6));
}
