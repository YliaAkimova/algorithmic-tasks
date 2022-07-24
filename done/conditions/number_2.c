// Среди трех чисел найти среднее. 
//Если среди чисел есть равные, вывести сообщение "Ошибка".
#include <stdbool.h>
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n1 = get_int(" ");
    int n2 = get_int(" ");
    int n3 = get_int(" ");
    if (n1 == n2 || n1 == n3 || n1 == n2 == n3 || n2 == n3) {
        printf("Error");
    }
    else {
        float average;
        average = (n1 + n2 + n3) / 3.0;
        printf("Average number %f\n", average);
    }
}

