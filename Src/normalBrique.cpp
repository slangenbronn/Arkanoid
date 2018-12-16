#include "../Header/normalBrique.h"

const int NormalBrique::SOLIDITE_NORMAL_BRIQUE = 1;

NormalBrique::NormalBrique() : Brique(){

}
NormalBrique::NormalBrique(int x, int y, SDL_Rect src, SDL_Surface* plancheSprites)
	: Brique(x, y, 15, 30, src, plancheSprites, solidite, points){

}

NormalBrique::NormalBrique(int x, int y, int longueur, int largeur, SDL_Rect src, SDL_Surface* plancheSprites, int solidite, int points)
	:	Brique(x, y, longueur, largeur, src, plancheSprites, solidite, points){

}

void NormalBrique::setSolidite(int solidite){
	this->solidite = solidite;
}

void NormalBrique::setPoints(int points){
	this->points = points;
}
