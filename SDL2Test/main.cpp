#include "SDL.h"
#include "SDL_image.h"
#include "Game.h"

Game *game = nullptr;

int main(int argc, char* argv[])
{
	const int frameRate = 60;
	const int frameDelay = 1000 / frameRate;

	Uint32 frameStart;
	int frameTime;
	
	game = new Game();
	game->init("Test Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 1000, false);

	while (game->running()) {

		frameStart = SDL_GetTicks();

		game->handleEvents();
		game->update();
		game->render();

		frameTime = SDL_GetTicks() - frameStart;

		if (frameDelay > frameTime) {
			SDL_Delay(frameDelay - frameTime);
		}

	}

	game->clean();

	return 0;
}