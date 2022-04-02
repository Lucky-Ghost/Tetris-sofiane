/*
** EPITECH PROJECT, 2022
** tetris
** File description:
** instance
*/
#include "../include/tetris.h"

struct game *get_game_instance(void)
{
    struct game *game = malloc(sizeof(struct game));

    if(!game)
        return (NULL);
    game->map_width = game->map_height = 25;
    return(game);
}

struct tetriminos *get_entity_instance(void)
{
    struct tetriminos *tetrominos = malloc(sizeof(struct tetriminos));

    if(tetrominos = NULL)
        return (NULL);
    tetrominos->moving = 1;
    tetrominos->y = 2;
    tetrominos->x = 17;
    tetrominos->display = 1;
    tetrominos->type = -1;

}