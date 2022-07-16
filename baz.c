#include <stdio.h>
#include <cs50.h>


void drawSpaces (int space) {
    for (int i = 0; i < space; i++)
    {
    printf (".");
    }
}

void drawTree(int size) {
    for (int i = size - 1; i >= 0; i--)
    {
        drawSpaces (i);
        printf("\n");
    }

}

int main(void)
{
    int n;
    do
    {
       n = get_int(" Size: ");
    } 
    while (n < 0 || n > 8);
    drawTree(n);
    return 0;
}
