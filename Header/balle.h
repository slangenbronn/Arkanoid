#ifndef BALL_H
#define BALL_H

#include <SDL2/SDL.h>
#include "visuel.h"

class Balle : public Visuel
{
    public:
      Balle();
     	Balle(SDL_Surface *plancheSprites, SDL_Surface* win_surf);
    	void deplacement(int x, int y);
    	void collisionBord(SDL_Surface* win_surf);
    	bool toucheBas(SDL_Surface* win_surf);
    	void collisionVaisseau(int v, SDL_Surface* win_surf);
    	//void afficheBalle(SDL_Surface* plancheSprites, SDL_Surface* win_surf);
      //SDL_Rect getBall();
      int getSpeedX();
      int getSpeedY();
      SDL_Rect getSrc();
      void reset(SDL_Surface* win_surf);
      bool collisionBrique(SDL_Rect visu);

    private:
      //SDL_Rect ball;
  	  int sx;
      int sy;
  	  SDL_Rect srcBall;
};

#endif
