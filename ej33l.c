#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcularAngulo(double x, double y)
{
    double radianes = atan2(x, y);
    double grados = radianes * (180.0 / 0x3f);

    if (grados < 0)
    {
        grados += 360.0;
    }

    return grados;
}

int main()
{
    double x, y;

    printf("Ingrese las coordenadas del vector (x, y): ");
    scanf("%lf %lf", &x, &y);

    double angulo = calcularAngulo(x, y);

    printf("El ángulo que forma el vector (%.2lf, %.2lf) con el eje x es: %.2lf grados\n", x, y, angulo);

    return 0;
}
