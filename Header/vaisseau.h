#ifndef VAISSEAU_H
#define VAISSEAU_H

#include <SDL2/SDL.h>
#include <iostream>

#include "windows.h"
#include "visuel.h"


class Vaisseau : public Visuel
{
    public:
   		Vaisseau(SDL_Surface *plancheSprites, int x, int y, int width);


    private:

};

#endif
