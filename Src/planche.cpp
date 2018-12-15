#include "../Header/planche.h"

Planche::Planche(){

	plancheSprites = SDL_LoadBMP("./sprites.bmp");
	SDL_SetColorKey(plancheSprites, true, 0);  // 0: 00/00/00 noir -> transparent
}

SDL_Surface* Planche::getSprites(){

	return plancheSprites;
}
