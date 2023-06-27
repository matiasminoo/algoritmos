#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int num = 0;

    printf("Ingrese hasta que numero natural quiere sumar: ");
    scanf("%d", &n);

    while (num < n)
    {
        num++;
        printf("%d\n", num);
    }
    return 0;
}
