#include <SDL2/SDL.h>
#include "../Header/jeux.h"

#include <iostream>

int x_vault;
int main(int argc, char** argv)
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0 )
    {
		std::cerr <<"Echec de l'initialisation de la SDL "<<SDL_GetError() << std::endl;
		return 1;
    }

	Jeux j;

	bool quit = false;
	while (!quit)
	{
		SDL_Event event;
		while (!quit && SDL_PollEvent(&event))
		{
			switch (event.type)
			{
			case SDL_QUIT:
				quit = true;
				break;
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
					// touche clavier
					case SDLK_LEFT:  j.v.setVault(j.v.getVault()-10); break;
					case SDLK_RIGHT: j.v.setVault(j.v.getVault()+10); break;
					case SDLK_ESCAPE: quit = true; break;
					default: break;
				}
				break;
			case SDL_MOUSEMOTION:	j.v.setVault(j.v.getVault()+event.motion.xrel);	break;
			case SDL_MOUSEBUTTONDOWN:
				std::cout << "mouse click " << event.button.button << std::endl;
				break;
			default: break;
			}
		}

		j.draw();
		SDL_UpdateWindowSurface(j.w.getWindow());
		SDL_Delay(20); // 50 fps
	}
    SDL_Quit();
    return 0;
}
