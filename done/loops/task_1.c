// Вывести все квадраты натуральных чисел, не превосходящие указанного числа N.
// Например, если N = 50, то на экран должен быть выведен ряд 1 4 9 16 25 36 49.

#include <cs50.h>
#include <stdio.h>
#include <math.h> 

void get_squares_of_number(int n)
{
    for (int i = 1; pow(i, 2) < n; i++)
    {
        printf("%i\n", (int) pow(i, 2));
    }
}

int main(void)
{
    int n = get_double("N: ");
    get_squares_of_number(n);
    printf("\n");
}