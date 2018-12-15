#include "balle.h"

Balle::Balle(){

}

Balle::Balle(SDL_Surface* win_surf){

	ball.x = win_surf->w / 2;
	ball.y = win_surf->h / 2;
	sx =  5;
	sy = 7;
	srcBall = { 0,64,24,24 };
}

void Balle::deplacement(int x, int y){

	ball.x += x;
	ball.y += y;
}

void Balle::collisionBord(SDL_Surface *win_surf){
	// collision bord
	if ((ball.x < 1) || (ball.x > (win_surf->w - 25)))
		sx *= -1;
	if ((ball.y < 1) || (ball.y > (win_surf->h - 25)))
		sy *= -1;
}

void Balle::toucheBas(SDL_Surface *win_surf){

	// touche bas -> rouge
	if (ball.y >(win_surf->h - 25))
		srcBall.y = 64;
}

void Balle::collisionVaisseau(int v, SDL_Surface* win_surf){

	if ((ball.x > v) && (ball.x < v+128) && (ball.y > win_surf->h - 32 -20))
	{
		sy *= -1;
		srcBall.y = 96; // -> vert
	}
}

void Balle::afficheBalle(SDL_Surface *plancheSprites, SDL_Surface *win_surf){

	// affiche balle
	SDL_BlitSurface(plancheSprites, &srcBall, win_surf, &ball);
}

SDL_Rect Balle::getBall(){
	return ball;
}

int Balle::getSpeedX(){
	return sx;
}
int Balle::getSpeedY(){
	return sy;
}

SDL_Rect Balle::getSrc(){
	return srcBall;
}
