/*
** EPITECH PROJECT, 2022
** Tetris
** File description:
** utils.c
*/
#include "../include/tetris.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i]) {
        ++i;
    }
    return (s1[i] - s2[i]);
}