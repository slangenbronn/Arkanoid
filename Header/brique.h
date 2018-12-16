#ifndef BRIQUE_H
#define BRIQUE_H

#include <SDL2/SDL.h>
#include "windows.h"
#include "visuel.h"

class Brique : public Visuel{
protected:
    int solidite;
    int points;
    //Capsule capsule;

public:
		Brique();
    Brique(int x, int y, int longueur, int largeur, SDL_Rect src, SDL_Surface* plancheSprites, int solidite, int points);
    virtual ~Brique();
    int getSolidite();
    int getPoints();
};
#endif // BRIQUE_H
