#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

//Ejercicio 10


int idk() {
    srand(time(NULL));
    int r = rand() % 37;
    return r;
}
int main(int argc, char *argv[]) {
    int b = atoi(argv[1]);
    int r = idk();
    bool same = b == r;
    printf("%s\n", same ? "true" : "false");
    printf("r es igual a: %d\n", r);
    return 0;
}