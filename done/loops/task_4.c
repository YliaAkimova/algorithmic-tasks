// Вывести на экран ряд чисел Фибоначчи, состоящий из N элементов. Значение N вводится с клавиатуры. 
// Числа Фибоначчи – это элементы числовой 
// последовательности 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …, 
// в которой каждое последующее число равно сумме двух предыдущих.

#include <stdio.h>
#include <cs50.h>

void fibanach(int fib_1, int fib_2, int n)
{
    int b;
    if (n == 1)
    {
        printf("0");
    }
    else if (n == 2)
    {
        printf("0 1");
    }
    else if (n > 2)
    {
        printf("0\n");
        for (int i = 2; i < n; i++)
        {
            printf("%i\n", b = fib_1 + fib_2);
            fib_1 = fib_2;
            fib_2 = b;
        }
    }
}

int main(void)
{
    int fib_1 = 0;
    int fib_2 = 1;
    int n = get_int("N: ");
    fibanach(fib_1, fib_2, n);
    return 0;
}

    