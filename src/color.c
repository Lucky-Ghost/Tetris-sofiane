/*
** EPITECH PROJECT, 2022
** tetris
** File description:
** color initiation
*/
#include "../include/tetris.h"

void init_colors(void)
{
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_YELLOW, COLOR_BLACK);
    init_pair(4, COLOR_BLUE, COLOR_BLACK);
    init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(6, COLOR_CYAN, COLOR_BLACK);
    init_pair(27, COLOR_WHITE, COLOR_BLACK);
}