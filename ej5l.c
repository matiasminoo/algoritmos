#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double dadoC()
{
    int roll_dice = rand() % 8 + 1;

    if (roll_dice > 6)
    {
        return 6;
    }

    else
    {
        return roll_dice;
    }
}

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int tirar_dado = dadoC();
    printf("%d\n", tirar_dado);
    return 0;
}
