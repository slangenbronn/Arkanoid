#ifndef BRIQUE_H
#define BRIQUE_H

#include <SDL2/SDL.h>
#include "windows.h"

class Brique{
protected:
    int solidite;
    int longueur;
    int largeur;
    int points;
    //Capsule capsule;

    // Position
    int x;
    int y;

    // Sprite
    SDL_Rect scrBrique;
public:
    Brique();
    Brique(int x, int y, int solidite, int longueur, int largeur, int points);
//    Brique(int x, int y);
    virtual ~Brique();
    int getSolidite();
    int getLongueur();
    int getLargeur();
    int getPoints();
    int getX();
    int getY();
    virtual void touche() = 0;
    virtual void affiche(SDL_Surface* plancheSprites, SDL_Surface *win_surf) = 0;
};

#endif // BRIQUE_H
