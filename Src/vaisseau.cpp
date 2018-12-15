#include "../Header/vaisseau.h"

Vaisseau::Vaisseau(SDL_Surface *plancheSprites, int x, int y, int width) : Visuel(x, y, width, 32, { 128,0,128,32 }, plancheSprites){
}

int Vaisseau::getVault(){
	return vault;
}

void Vaisseau::setVault(int v){
	this->x = v;
}
