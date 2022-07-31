// 1. Если число чётное, разделите его на 2. Иначе умножьте его на 3 и прибавьте 1.
// 2. Повторите шаг 1 с полученным числом.
// 3. Напишите программу, которая покажет колличество шагов, которые требуются чтобы добраться до 1

# include <cs50.h>
# include <stdio.h>

int number(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if ((n % 2) == 0)
    {
        return 1 + number(n/2);
    }
    return 1 + number(3*n + 1);
}

int main(void)
{
    int last_number = get_int("Number: ");
    printf("%i\n", number(last_number));
}