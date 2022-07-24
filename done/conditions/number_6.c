// Написать программу, которая в зависимости от выбора пользователя 
// вычисляет площадь одной из трех геометрических фигур: 
//прямоугольника, треугольника или круга.
// Для вычисления площади прямоугольника вводятся длины двух его сторон, 
//треугольника - трех сторон, круга - вводится диаметр.
// Площадь прямоугольника: **area = a * b**
// Площадь треугольника: **area = sqrt(s * (s - a) * (s - b) * (s - c))**, 
// где **s = (a + b + c) / 2, sqrt - извлечение корня**
// Площадь круга: **area = pi * sqr(d) / 4, где sql - возведение в квадрат**

#include <stdio.h>
#include <cs50.h>
#include <math.h>

const int TRIANGLE = 1;
const int RECTANGLE = 2;
const int CIRCLE = 3;

float get_triangle_area(int a, int b, int c)
{
    int p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

float get_rectangle_area(int a, int b)
{
    return a * b;
}

float get_circle_area(int r)
{
    return M_PI * (r * r);
}

int main(void)
{
    int figure = get_int("The area of which shape do you want to calculate? If you want to find the area of a triangle, type the number %i, rectangle %i, circle %i\n", TRIANGLE, RECTANGLE, CIRCLE);

    if (figure == TRIANGLE)
    {
        int a = get_int("Print a: ");
        int b = get_int("Print b: ");
        int c = get_int("Print c: ");
        printf("s = %f\n", get_triangle_area(a, b, c));
    }
    else if (figure == RECTANGLE)
    {
        int a = get_int("Print a: ");
        int b = get_int("Print b: ");
        printf("s = %f\n", get_rectangle_area(a,b));
    }
    else if (figure == CIRCLE)
    {
        int r = get_int("Print r: ");
        printf("s = %f\n", get_circle_area(r)); 
    }

    return 0;
}