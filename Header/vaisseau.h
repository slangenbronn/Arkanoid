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
  		//void affiche(SDL_Surface* plancheSprites, SDL_Surface *win_surf);
   		int getVault();
   		void setVault(int v);


    private:
		  int vault;
    	SDL_Rect scrVaiss;
};

#endif
