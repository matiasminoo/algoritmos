#include <stdio.h>
#include <stdlib.h>

void imprimirTablaCuadrados(int n)
{
    printf("Número\tCuadrado\n");
    printf("------\t--------\n");

    for (int i = 1; i <= n; i++)
    {
        int cuadrado = i * i;
        printf("%d\t%d\n", i, cuadrado);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Uso: programa <n>\n");
        return 1;
    }

    int n = atoi(argv[1]);

    imprimirTablaCuadrados(n);

    return 0;
}
