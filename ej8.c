#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Dado cargado

int roll_dice() {
    srand(time(NULL));
    int dice = rand() % 8 + 1;
    return dice > 5 ? 6 : dice;
}

int main() {
    printf("%d\n", roll_dice());
    return 0;
}