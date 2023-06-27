#include <stdio.h>
#include <stdlib.h>

float calcularTotal(char medioPago, float precio, int cantidad)
{
    float total = precio * cantidad;

    switch (medioPago)
    {
    case 'e':
        total -= total * 0.15; // Aplicar descuento del 15% en efectivo
        break;
    case 'd':
        // No se aplica ningún descuento ni recargo para tarjeta de débito
        break;
    case 't':
        total -= total * 0.10; // Aplicar descuento del 10% para transferencia
        break;
    case 'c':
        total += total * 0.05; // Aplicar recargo del 5% para tarjeta de crédito
        break;
    default:
        printf("Medio de pago inválido.\n");
        return 0;
    }

    return total;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Uso: programa <medio_pago> <precio> <cantidad>\n");
        return 1;
    }

    char medioPago = argv[1][0];
    float precio = atof(argv[2]);
    int cantidad = atoi(argv[3]);

    float total = calcularTotal(medioPago, precio, cantidad);

    if (total > 0)
    {
        printf("Monto total a pagar: %.2f\n", total);
    }

    return 0;
}
