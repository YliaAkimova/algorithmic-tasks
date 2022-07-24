#include <stdbool.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int answer = get_int("Number: ");
    if(answer < 0)
    {
        printf("Negative\n");
    }
    else if(answer > 0)
    {
        printf("Positive\n");
    }
    else
    {
        printf("You wrote zero\n");
    }
}
