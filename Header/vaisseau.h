#ifndef VAISSEAU_H
#define VAISSEAU_H

#include <SDL2/SDL.h>
#include <iostream>

#include "windows.h"

class Vaisseau
{
    public:
 	Vaisseau();
	void affiche(SDL_Surface* plancheSprites, SDL_Surface *win_surf);
  int getVault();
  void setVault(int v);

    private:
	  int vault;
    SDL_Rect scrVaiss;
};

#endif
