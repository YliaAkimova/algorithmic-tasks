// Вводятся два числа (большее и меньшее). 
// Определить, кратно ли первое число второму, 
// то есть делится ли первое число нацело на второе. Вывести на экран сообщение об этом, а также остаток от деления, если первое число не кратно второму.

#include <stdbool.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("");
    int b = get_int("");
    
    if (a % b == 0)
    {
        printf("The first number is divided by the second");
    }
    else
    {
        printf("The remainder of the division %i", a % b);
    }
}
