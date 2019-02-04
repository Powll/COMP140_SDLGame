// Inhibits the redefinition of main by the SDL Library
//#define SDL_MAIN_HANDLED
#include "Game.h"
#include "SDL.h"

Game *game = nullptr;

int main(int argc, char *argv[])
{
	game = new Game();

	game->init("BirchEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

	// Do any initialization that is needed by SDL
	//SDL_SetMainReady();

	while (game->running()) 
	{
		game->handleEvents();
		game->update();
		game->render();
	}

	game->clean();

	return 0;
}