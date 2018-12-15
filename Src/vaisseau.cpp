#include "../Header/vaisseau.h"

Vaisseau::Vaisseau(){
	scrVaiss = { 128,0,128,32 };
	vault = 8;
}

void Vaisseau::affiche(SDL_Surface *plancheSprites, SDL_Surface *win_surf){

	SDL_Rect dest = { 0,0,0,0 };
	dest.x = vault;
	dest.y = win_surf->h - 32;
	std::cout << dest.x << std::endl;
	SDL_BlitSurface(plancheSprites, &scrVaiss, win_surf, &dest);
}

int Vaisseau::getVault(){
	return vault;
}

void Vaisseau::setVault(int v){
	vault = v;
}
