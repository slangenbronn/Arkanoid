#include "../Header/vaisseau.h"

Vaisseau::Vaisseau(SDL_Surface *plancheSprites) : Visuel(8, 2, 5, 5, { 128,0,128,32 }, plancheSprites){
}

int Vaisseau::getVault(){
	return vault;
}

void Vaisseau::setVault(int v){
	this->x = v;
}
