#include <SDL2/SDL.h>

class Planche
{
    public:
 	    Planche();
      SDL_Surface* getSprites();

    private:
    SDL_Surface* plancheSprites;
};
