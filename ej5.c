#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// A
int asciiValue(char character)
{
    return character;
}

// B
double calcularDistancia(double x, double y)
{
    double distancia = sqrt(x * x + y * y);
    return distancia;
}
// C
double calculateDistance(double x, double y)
{
    double distance = sqrt(pow(x, 2) + pow(y, 2));
    return distance;
}
// D
int calcularSalario(int ht, int sxh)
{
    int salario = ht * sxh;
    return salario;
}
// F
double Producto_escalar_dos_dim(double x1, double x2, double y1, double y2)
{
    return x1 * y1 + x2 * y2;
}
// h
double sumaVectores(double x1, double x2, double y1, double y2)
{
    double sumando = (x1 + x2) + (y1 + y2);
    return sumando;
}

int main(int argc, char *argv[])
{
    // A
    char *input = (argv[1]);
    int value = asciiValue(*input);
    printf("El valor ASCII de '%s' es %d\n", input, value);
    // B
    double x, y;
    printf("Ingrese las coordenadas x e y del punto:\n");
    scanf("%lf %lf", &x, &y);
    double distancia = calcularDistancia(x, y);
    printf("La distancia entre el punto (%.2lf, %.2lf) y el origen de coordenadas es: %.2lf\n", x, y, distancia);
    // C
    double distance = calculateDistance(x, y);
    printf("La distancia es: %.2f\n", distance);
    // D
    int ht, sxh;
    printf("Ingrese el total de horas trabajadas y el salario por hora:\n");
    scanf("%d %d", &ht, &sxh);
    int salario = calcularSalario(ht, sxh);
    printf("El salario total es: %d\n", salario);
    // h
    double x1, x2, y1, y2;
    double sumando = sumaVectores(x1, x2, y1, y2);
    printf("La suma de los vectores en el plano es: %.2f\n", sumando);
    // F
    double x1 = atof(argv[2]);
    double x2 = atof(argv[3]);
    double y1 = atof(argv[4]);
    double y2 = atof(argv[5]);
    printf("El producto vectorial es %.2f\n", Producto_escalar_dos_dim(x1, x2, y1, y2));
    return 0;
}