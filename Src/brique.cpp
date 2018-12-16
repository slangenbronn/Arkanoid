#include "../Header/brique.h"

Brique::Brique(int x, int y, int longueur, int largeur, SDL_Rect src, SDL_Surface* plancheSprites, int solidite, int points)
    : Visuel(x, y, longueur, largeur, src, plancheSprites), solidite(solidite), points(points){

}

Brique::Brique(){

}

Brique::~Brique(){

}

int Brique::getSolidite(){
    return solidite;
}

int Brique::getPoints(){
    return points;
}
