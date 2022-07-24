// Вводятся длины трех сторон предполагаемого треугольника. 
// Определить, может ли существовать треугольник с такими сторонами при условии что, 
// треугольник существует только тогда, 
// когда ни одна его сторона не превышает сумму двух других.
# include <stdio.h>
# include <cs50.h>

int main (void)
{
    int a = get_int("a: "); 
    int b = get_int("b: ");
    int c = get_int("c: ");
    
    if (c < b + a && b < c + a && a < b + c)
    {
        printf("The triangle exists\n");
    }
    else 
    {
        printf("The triangle does not exist\n");
    }
}
