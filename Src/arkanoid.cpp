#include <SDL2/SDL.h>
#include "../Header/jeux.h"

#include <iostream>

int main(int argc, char** argv)
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0 )
    {
  		std::cerr <<"Echec de l'initialisation de la SDL "<<SDL_GetError() << std::endl;
  		return 1;
    }

  Jeux *j;
  j = Jeux::getInstance();

	while (!j->getQuit())
	{
    j->joue();
    std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA" << std::endl;
		j->draw();
		SDL_UpdateWindowSurface(j->w.getWindow());
		SDL_Delay(20); // 50 fps
	}
    SDL_Quit();
    return 0;
}
