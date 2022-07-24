// Вычислить значение функции
// у = x – 2, если x > 0,
// y = 0, если x = 0,
// y = |x|, если x < 0.

#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>

int main (void)
{
    int x = get_int ("X: ");
    if (x > 0)
    {
        printf("Y: %i\n", x-2);
    }
    else if (x < 0)
    {
        printf("Y: %d\n", abs (x));
    }
    else 
    {
        printf("Y = 0\n");
    }
}