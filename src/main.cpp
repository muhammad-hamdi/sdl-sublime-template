#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#include "RenderWindow.hpp"

int main(int argc, char* args[])
{
	if(SDL_Init(SDL_INIT_VIDEO) > 0)
		std::cout << "SDL_Init failed, SDL ERROR: " << SDL_GetError() << std::endl;

	if(!IMG_Init(IMG_INIT_PNG))
		std::cout << "IMG_Init failed, ERROR: " << SDL_GetError() << std::endl;

	RenderWindow window("SDL Test", 1280, 720);

	return 0;
}