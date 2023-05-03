#include <stdio.h>

int main() {
    int a, b;
    printf("Ingrese dos números enteros positivos: ");
    scanf("%d %d", &a, &b);

    if(a % b == 0 || b % a == 0) {
        printf("Verdadero");
    }
    else {
        printf("Falso");
    }

    return 0;
}