/*
** EPITECH PROJECT, 2022
** tetris
** File description:
** tetrminos
*/

int get_tetrominos(struct tetriminos *tetriminos, int index)
{
    const char folder = "./tetriminos";
    DIR *rep = opendir(folder);
    struct dirent *reader;
    int i = 0
}