#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int d = atoi(argv[1]);
    int anos = (d / 365);
    int restoa = (d % 365);
    int semanas = (restoa / 7);
    int dias = (restoa % 7);
    printf("%d años, %d semanas, %d dias\n", anos, semanas, dias);
    return 0;
}