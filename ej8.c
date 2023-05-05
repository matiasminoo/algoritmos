#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Dado cargado

int roll_dice() {
    int dice = rand() % 8;
    return dice < 5 ? dice+1 : 6;
}

int main() {
    srand(time(NULL));
    printf("%d\n", roll_dice());
    printf("%d\n", roll_dice());
    printf("%d\n", roll_dice());
    printf("%d\n", roll_dice());
    return 0;
}