#include <stdio.h>
#include <cs50.h>
// Нарисовать справой стороны ветки от 1 до 8

void drawTree(int size);
void drawSpaces (int space);
void drawTreeline (int branchesCount);


void drawSpaces (int space) {
    for (int i = 0; i < space; i++)
    {
    printf (" ");
    }
} 

void drawTreeline(int branchesCount) {
    for (int i = 0; i < branchesCount; i++)
    {
        printf("#");
    }
}

void drawTree(int size) {

    for (int i = size - 1; i >= 0; i--)
    {
        drawSpaces(i);
        drawTreeline(size - i);
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
