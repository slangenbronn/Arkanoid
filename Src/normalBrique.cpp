#include "../Header/normalBrique.h"

NormalBrique::NormalBrique(int x, int y, SDL_Rect src, SDL_Surface* plancheSprites)
	: Brique(x, y, 15, 30, src, plancheSprites, solidite, points){

}

NormalBrique::NormalBrique(int x, int y, int longueur, int largeur, SDL_Rect src, SDL_Surface* plancheSprites, int solidite, int points)
	:	Brique(x, y, longueur, largeur, src, plancheSprites, solidite, points){

}