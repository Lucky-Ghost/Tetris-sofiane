/*
** EPITECH PROJECT, 2022
** tetris
** File description:
** display.c
*/
#include "../include/tetris.h"

void display_context(struct game *game)
{
    mvprintw(2, 1, "*** *** *** *** * ***");
    mvprintw(3, 1, " *  *    *  * * * *  ");
    mvprintw(4, 1, " *  ***  *  **  * ***");
    mvprintw(5, 1, " *  *    *  * * *   *");
    mvprintw(6, 1, " *  ***  *  * * * ***");
}