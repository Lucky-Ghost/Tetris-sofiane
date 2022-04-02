/*
** EPITECH PROJECT, 2022
** tetris
** File description:
** main
*/
#include "../include/tetris.h"

void help()
{
	const char *content = "Usage: ./tetris [options]\n"
	"Options:\n"
	"--help Display this help\n"
	"	-L --level={num} Start Tetris at level num (def: 1)\n"
	"	-l --key-left={K} Move the tetrimino LEFT using the K key (def: left arrow)\n"
	"	-r --key-right={K} Move the tetrimino RIGHT using the K key (def: right arrow)\n"
	"	-t --key-turn={K} TURN the tetrimino clockwise 90d using the K key (def: top arrow)\n"
	"	-d --key-drop={K} DROP the tetrimino using the K key (def: down arrow)\n"
	"	-q --key-quit={K} QUIT the game using the K key (def: ‘q’ key)\n"
	"	-p --key-pause={K} PAUSE/RESTART the game using the K key (def: space bar)\n"
	"	--map-size={row,col} Set the numbers of rows and columns of the map (def: 20,10)\n"
	"	-w --without-next Hide next tetrimino (def: false)\n"
	"	-D --debug Debug mode (def: false)\n";
	my_putstr(content);
}

int main(int ac, char **av)
{	
	struct game *game;
	if(ac != 2)
		return 84;
	if(my_strcmp(av[1], "--help") == 0){
		help();
		return 0;
	}
	game = get_game_instance();
	if(!game)
		return 84;
	prepare_game(game);
	display_context(game);
	getch();			/* Wait for user input */
	endwin();			/* End curses mode		  */
	return 0;
}