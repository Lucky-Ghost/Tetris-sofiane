/*
** EPITECH PROJECT, 2022
** tetris
** File description:
** game
*/
#include "../include/tetris.h"

void prepare_game(struct game *game)
{
    int x;
    int y;

    initscr();
    getmaxyx(stdscr, y, x);
    if(y <= game->map_height || x <= game->map_width){
        endwin();
        my_put_error("Please, "
                "change your terminal size and try again\n");
            return;
    }
    keypad(stdscr, 1);
    init_colors();
}