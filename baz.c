#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int get_symbol_points(char letter);
int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    
int get_symbol_points(char letter)
{
    char lower_letter = tolower(letter);
    int i;
    for (i = 0; i < 26; i++) 
    {
        printf("%i\n", points[i]);
    }
}

 // if (letter == 'a')
    // {
    //     return points[0]
    // }

    int main(void)
// {
//     string s = get_string("Input:  ");
//     printf("Output: ");
//     for (int i = 0; i < strlen(s); i++)
//     {
//         printf("%c", s[i]);
//     }
//     printf("\n");
// }


int get_symbol_points(char letter)
// {
//     char lower_letter = tolower(letter);
//     int i;
//     for (i = 0; i < 26; i++) 
//     {
//         printf("%i\n", points[i]);
//     }
// }