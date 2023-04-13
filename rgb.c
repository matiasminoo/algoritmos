#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int r = atoi(argv[1]);
    int g = atoi(argv[2]);
    int b = atoi(argv[3]);
    //El maximo de los canales
    double w = r/255.0 > g/255.0 ? r/255.0 : g/255.0;
    w = w > b/255.0 ? w : b/255.0;
    //Calcular CMYK
    double c = w != 0 ? (w - r/255.0) / w : 0;
    double m = w != 0 ? (w - g/255.0) / w : 0;
    double y = w != 0 ? (w - b/255.0) / w : 0;
    double k = 1.0 - w;
    //resultado
    printf("CMYK = (%.2f, %.2f, %.2f,%.2f)\n", c, m, y, k);
    return 0;
}