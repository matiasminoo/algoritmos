 #include <stdio.h> 
#include <math.h>

int suma(int x, int y) {
    return x + y;
}

int resta(int x, int y) {
    return x - y;
}

int mult(int x, int y) {
    return x*y;
}

int div(int x, int y) {
    return x / y;
}

int fn1(int x, int y, int z) {
    return 2*x + 3*y + 4*z;
}

int fn2(int x, int y, int z) {
    return (9*x)*x + 3*x - 12;
}

int fn3(int n) {
    return n*(n + 1) / 2;
}

int theta(int theta) {
    return pow(cos(theta), 2) + pow(sin(theta), 2);
}

 int main() {
    printf("suma = %d\n", suma(7,5));
    printf("resta = %d\n", resta(7,5));
    printf("mult = %d\n", mult(7,5));
    printf("div = %d\n", div(7,5));
    printf("fn1 = %d\n", fn1(7,5,3));
    printf("fn2 = %d\n", fn2(7,5,3));
    printf("fn3 = %d\n", fn3(7));
    printf("theta = %d\n", theta(7));
    return 0;
 }