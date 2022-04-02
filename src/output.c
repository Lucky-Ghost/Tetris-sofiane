/*
** EPITECH PROJECT, 2022
** Tetris
** File description:
** output
*/
#include "../include/tetris.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;
    
    while (str[i] != '\0') {
         my_putchar (str[i]) ;
         i = i + 1;
    }
    return (0);
 }

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i += 1;
    }
    return (i);
}

void my_put_error(char const *str)
{
    int len = my_strlen(str);

    for(int i = 0; i < len; i++)
        write(2, &str[i], 1);
}
