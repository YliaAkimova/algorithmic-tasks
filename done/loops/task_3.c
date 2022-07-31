// Вычислить факториал числа, которое ввел пользователь. 
// Факториал числа представляет собой произведение всех натуральных чисел
// от 1 до этого числа включительно

#include <stdio.h>
#include <cs50.h>

int get_past_value(int current_number)
{
    return current_number * (current_number - 1);
}

int main(void)
{
    int factorial;
    int last_number = get_int("Up to what number do you want to count ");
    for (int current_number = 2; current_number <= last_number; current_number++)
    {
        factorial = get_past_value(current_number) * (current_number + 1);
        printf("%i\n", factorial);
        if (current_number == 1)
    {
        factorial = 1;
    }
    }
    printf("Factorial: %i \n", factorial);
    return 0;
}
