

#include <stdio.h>

int absoluto(int numero)
{
    if (numero < 0)
    {
        return -numero;
    }
    else
    {
        return numero;
    }
}

int main()
{
    int a;

    printf("Ingrese un número entero: ");
    scanf("%d", &a);

    int valor_absoluto = absoluto(a);

    printf("El valor absoluto de %d es %d\n", a, valor_absoluto);

    return 0;
}
