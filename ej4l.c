#include <stdio.h>
#include <math.h>

void calcularRaices(double a, double b, double c)
{
    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0)
    {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Las raíces son: %.2lf y %.2lf\n", raiz1, raiz2);
    }
    else if (discriminante == 0)
    {
        double raiz = -b / (2 * a);
        printf("La raíz es doble y su valor es: %.2lf\n", raiz);
    }
    else
    {
        printf("No existe solución en los números reales.\n");
    }
}

int main()
{
    double a, b, c;

    printf("Ingrese los coeficientes de la función cuadrática (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    calcularRaices(a, b, c);

    return 0;
}
