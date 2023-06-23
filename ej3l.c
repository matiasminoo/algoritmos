#include <stdio.h>

int main(int argc, char *argv[])
{
    int a;

    printf("Ingrese su numero entero:");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Es positivo\n");
    }
    else if (a < 0)
    {
        printf("Es negativo\n");
    }
    else
    {
        printf("Es cero\n");
    }
    return 0;
}