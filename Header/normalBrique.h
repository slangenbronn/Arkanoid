#ifndef NORMALBRIQUE_H
#define NORMALBRIQUE_H

#include "brique.h"

class NormalBrique : public Brique
{
public:
    NormalBrique(int x, int y);
    NormalBrique(int x, int y, int points);
    virtual void affiche(SDL_Surface* plancheSprites, SDL_Surface *win_surf);
};

#endif // NORMALBRIQUE_H
