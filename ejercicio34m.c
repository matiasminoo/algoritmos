#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int Ux = atoi(argv[1]);
    int Vx = atoi(argv[2]);
    int Uy = atoi(argv[3]);
    int Vy = atoi(argv[4]);
    double x = (Ux + Vx);
    double y = (Uy + Vy);
    printf("x = %0.f, y = %0.f\n", x, y);
    return 0;
}