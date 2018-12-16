#include "../Header/balle.h"
Balle::Balle(): Visuel(10, 10, 5, 5, { 0,64,24,24 }, plancheSprites){

}

Balle::Balle(SDL_Surface *plancheSprites, SDL_Surface* win_surf)
	: Visuel(win_surf->w / 2, win_surf->h / 2, 5, 5, { 0,64,24,24 }, plancheSprites){

//	ball.x = win_surf->w / 2;
//	ball.y = win_surf->h / 2;
	sx =  5;
	sy = 7;
	srcBall = { 0,64,24,24 };
}

void Balle::deplacement(int x, int y){

	this->x += x;
	this->y += y;
}

void Balle::collisionBord(SDL_Surface *win_surf){
	// collision bord
	if ((this->x < 1) || (this->x > (win_surf->w - 25)))
		sx *= -1;
	if ((this->y < 1) || (this->y > (win_surf->h - 25)))
		sy *= -1;
}

bool Balle::toucheBas(SDL_Surface *win_surf){

	// touche bas -> rouge
	return this->y >(win_surf->h - 25);
}

void Balle::reset(SDL_Surface* win_surf){
	this->x = win_surf->w / 2;
	this->y = win_surf->h / 2;
	sx = 2;
	sy = -7;
}

void Balle::collisionVaisseau(int v, SDL_Surface* win_surf){

	if ((this->x > v) && (this->x < v+128) && (this->y > win_surf->h - 32 -20))
	{
		sy *= -1;
		srcBall.y = 96; // -> vert
	}
}

void Balle::touche(Visuel *v){
	if((v->getX() < this->x + this->longueur) || (v->getX() + v->getLongueur() > this->x)){
		//std::cout << this->sx;
		this->sy *= -1;
		//std::cout << " " << this->sx << "sx" << std::endl;
	}
	else if( (v->getY() < this->y + this->largeur) || (v->getY() + v->getLargeur() > this->y)){
		this->sx *= -1;
		//std::cout << "sy" << std::endl;
	}
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
