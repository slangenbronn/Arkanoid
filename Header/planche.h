#ifndef PLANCHE_H
#define PLANCHE_H

#include <SDL2/SDL.h>

class Planche
{
    public:
 	    Planche();
 	    Planche(const char* plancheAddr);
      SDL_Surface* getSprites();

    private:
    SDL_Surface* plancheSprites;
};
#endif