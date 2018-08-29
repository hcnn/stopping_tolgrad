#include <stdio.h>  // printf
#include "stopping_tolgrad.h"

int main()
{
    double tolgrad = 0.01;
    double g1[] = {.001, .005, .01};
    bool res1 = stopping_tolgrad(g1, 3, tolgrad);
    printf("%s\n", res1 ? "true -> stop" : "false -> proceed");

    double g2[] = {.001, .005, .01};
    bool res2 = stopping_tolgrad(g2, 3, 0.02);
    printf("%s\n", res2 ? "true -> stop" : "false -> proceed");
}