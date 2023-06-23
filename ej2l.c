#include <stdio.h>

int maximo(int a, int b, int c)
{
    int max = a;

    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    return max;
}

int main()
{
    int a, b, c;

    printf("Ingrese tres números enteros separados por espacios: ");
    scanf("%d %d %d", &a, &b, &c);

    int max_valor = maximo(a, b, c);

    printf("El máximo de %d, %d y %d es %d\n", a, b, c, max_valor);

    return 0;
}
