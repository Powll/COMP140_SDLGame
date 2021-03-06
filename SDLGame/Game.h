#pragma once

#include "SDL.h"
#include <stdio.h>
#include <iostream>

class Game
{
public:
	Game();
	~Game();

	void init(const char* title, int xPos, int yPos, int width, int height, bool fullscreen);
	
	void handleEvents();
	void update();
	void render();	// GameObject Display
	void clean();	// Memory management

	bool running();

private:
	bool isRunning;
	SDL_Window *window;
	SDL_Renderer *renderer;
};

