/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/
#ifndef TETRIS
    #define TETRIS_

    #define _DEFAULT_SCOURCE
    #include <ncurses.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <fcntl.h>

    struct game {
        int map_width;
        int map_height;
    };

    struct tetriminos {
        int moving;
        int x;
        int y;
        int type;
        int display;
        int color;
        int len;
    };

    struct dirent {

    };
    //display.c
    void display_context(struct game *game);
    
    //game.c
    void prepare_game(struct game *game);

    //instance.c
    struct game *get_game_instance(void);

    //color.c
    void init_colors(void);

    //tetrominos.c
    int get_tetrominos(struct tetriminos *tetriminos, int index);
    
    //utils.c
    void my_putchar(char c);
    int my_putstr(char const *str);
    int my_strcmp(char const *s1, char const *s2);
    void my_put_error(char const *str);

#endif /*TETRIS*/