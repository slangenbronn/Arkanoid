#ifndef VISUEL_H
#define VISUEL_H

#include <SDL2/SDL.h>
#include "windows.h"
#include <iostream>

class Visuel{
protected:
    int longueur;
    int largeur;
    int x;
    int y;

    // Sprite
    SDL_Rect src;
    SDL_Surface* plancheSprites; // Planche associé au sprite
public:
    Visuel(int x, int y, int longueur, int largeur, SDL_Rect src, SDL_Surface* plancheSprites);

    void affiche(SDL_Surface *win_surf);

    int getLongueur();
    int getLargeur();
    int getX();
    int getY();

    bool collision(Visuel *v);

    void setLongueur(int longueur);
    void setLargeur(int largeur);
    void setX(int x);
    void setY(int y);

};

#endif // VISUEL_H
