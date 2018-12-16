#ifndef NORMALBRIQUE_H
#define NORMALBRIQUE_H

#include "brique.h"

class NormalBrique : public Brique
{
	public:
		/**
		 * Constructeur par défaut
		 * Correspond à la Brique normal standard
		 */
    NormalBrique(int x, int y, SDL_Rect src, SDL_Surface* plancheSprites);
    NormalBrique(int x, int y, int longueur, int largeur, SDL_Rect src, SDL_Surface* plancheSprites, int solidite, int points);

    virtual void touche(Visuel *v);
};

#endif // NORMALBRIQUE_H
