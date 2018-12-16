#include "../Header/visuel.h"

Visuel::Visuel(int x, int y, int longueur, int largeur, SDL_Rect src, SDL_Surface* plancheSprites){
	this->x = x;
	this->y = y;
	this->longueur = longueur;
	this->largeur = largeur;
	this->src = src;
	this->plancheSprites = plancheSprites;
}

void Visuel::affiche(SDL_Surface *win_surf){
	SDL_Rect dest = { 0,0,0,0 };
	dest.x = this->x;
	dest.y = this->y;
	SDL_BlitSurface(this->plancheSprites, &src, win_surf, &dest);
}

int Visuel::getLongueur(){
	return this->longueur;
}
int Visuel::getLargeur(){
	return this->largeur;
}
int Visuel::getX(){
	return this->x;
}
int Visuel::getY(){
	return this->y;
}

bool Visuel::collision(Visuel *v){
//Tests de collision
	if(!((v->getX() >= this->x + this->largeur)	// trop à droite
		|| (v->getX() + v->getLargeur() <= this->x)		// trop à gauche
		|| (v->getY() >= this->y + this->longueur)		// trop en bas
		|| (v->getY() + v->getLongueur() <= this->y))){ // trop en haut
		this->touche(v);
		v->touche(this);
		return true;
	}
	return false;
}

void Visuel::setLongueur(int longueur){
	this->longueur = longueur;
}

void Visuel::setLargeur(int largeur){
	this->largeur = largeur;
}
void Visuel::setX(int x){
	this->x = x;
}
void Visuel::setY(int y){
	this->y = y;
}
