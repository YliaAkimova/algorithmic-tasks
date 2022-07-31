#include <cs50.h>
#include <stdio.h>

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main(void)
{
    int numbers_count = get_int("> ");
    for (int i = 1; i <= numbers_count; i++)
    {
        printf("%i\n", fact(i));
    }
}