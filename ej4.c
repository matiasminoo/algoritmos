#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main(int argc, char*argv[]) {
 int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    bool same = a == b;
    printf("%s\n", same ? 1 : 0);
    return 0;
}
