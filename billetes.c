#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int money = atoi(argv[1]);
    printf("billetes de 1000: %d\n", money /1000);
    money %= 1000;
    printf("billetes de 500: %d\n", money /500);
    money %= 500;
    printf("billetes de 200: %d\n", money /200);
    money %= 200;
    printf("billetes de 100: %d\n", money /100);
    money %= 100;
    printf("billetes de 50: %d\n", money /50);
    money %= 50;
    printf("billetes de 20: %d\n", money /20);
    money %= 20;
    printf("billetes de 10: %d\n", money /10);
    money %= 10;
    return 0;


}