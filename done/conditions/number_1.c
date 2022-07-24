// Определить какое из трех введенных пользователем 
// чисел максимальное и вывести его на экран.
// Пусть числа, которые вводит пользователь, присваиваются 
// переменным n1, n2, n3. Введем четвертую переменную max, в которую по ходу 
// выполнения кода будет помещено найденное максимальное значение.
#include <stdbool.h>
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n1 = get_int("The first number: ");
    int n2 = get_int("The second number: ");
    int n3 = get_int("The third number: ");
    
    int max;

    if (n1 > n2 && n1 > n3){
        int max = n1;
        printf("Max - %i\n", n1);
    }
    else if (n2 > n1 && n2 > n3){
        int max = n2;
        printf("Max - %i\n", n2);
    }
    else if (n3 > n1 && n3 > n2){
        int max = n3;
        printf("Max - %i\n", n3);
    }
    else 
    {
        printf("Some of the numbers are equal\n");
    }

}