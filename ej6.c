#include <stdio.h>
#include <stdbool.h>

//Ejercicio 6D
bool intersects(int a, int b, int c, int d) {
    return a != c ? "true" : "false";
}

double intersection(int a, int b, int c, int d) {
    double x = (d - b) / (double) (a - c);
    return x;
}

int main() {
   printf("se cruzan? %s\n", intersects(2,5,6,4) ? "si" : "no");
   printf("En x se cruzan en el punto: %.2f\n", intersection(3,3,6,2));
   return 0;
}