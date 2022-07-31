// Вывести на экран ряд чисел Фибоначчи, состоящий из N элементов. Значение N вводится с клавиатуры. 
// Числа Фибоначчи – это элементы числовой 
// последовательности 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …, 
// в которой каждое последующее число равно сумме двух предыдущих.

#include <stdio.h>
#include <cs50.h>

int fibanachi(int current_number)
{
    if (current_number == 0)
    {
        return 0;
    }
    else if (current_number == 1)
    {
        return 1;
    }
    return fibanachi(current_number - 1) + fibanachi(current_number - 2);
}

int main(void)
{
    int numbers_count = get_int("> ");

    for (int i = 0; i < numbers_count; i++)
    {
        printf("%i\n", fibanachi(i));
    } 
}

