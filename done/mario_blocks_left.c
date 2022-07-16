// Задача вывести блоки слева в виде ступенек.
 
#include <stdio.h>
#include <cs50.h>

void drawTree(int size);
void drawTreeline(int branchesCount);

int main(void)
{
    int n = get_int(" Size: ");
    drawTree(n);
    return 0;
}

void drawTree(int size) {
    for (int i = 1; i <= size; i++)
    {
        drawTreeline(i);
        printf("\n");
    }
}

void drawTreeline(int branchesCount) {
    for (int i = 0; i < branchesCount; i++)
    {
        printf("#");
    }
}
