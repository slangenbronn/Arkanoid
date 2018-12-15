#include "../Header/normalBrique.h"

//Brique(int x, int y, int solidite, int longueur, int largeur, int points);
NormalBrique::NormalBrique(int x, int y): Brique(x, y, 1, 2, 1, 50){

}

NormalBrique::NormalBrique(int x, int y, int points):  Brique(x, y, 1, 2, 1, points){

}


void NormalBrique::affiche(SDL_Surface *plancheSprites, SDL_Surface *win_surf){

    SDL_Rect dest = { 0,0,30,13 };
    dest.x = this->x;
    dest.y = this->y;
    SDL_BlitSurface(plancheSprites, &scrBrique, win_surf, &dest);
}