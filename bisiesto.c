#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
    int year = atoi(argv[1]);
    bool is_leap = year % 4 == 0;
    is_leap = is_leap && year % 100 != 0;
    is_leap = is_leap || year % 400 == 0;
    printf("%s\n", is_leap ? "yes is leap" : "no is not leap");
    return 0;
}