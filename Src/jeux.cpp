#include "../Header/jeux.h"

Jeux::Jeux(): v(this->p.getSprites()) {
	//this->v(this->p.getSprites());
	tb[0] = Balle(w.getSurface());
}

void Jeux::draw(){

	w.remplir(p.getSprites());

	tb[0].afficheBalle(p.getSprites(), w.getSurface());

	tb[0].deplacement(tb[0].getSpeedX(), tb[0].getSpeedY());

	tb[0].collisionBord(w.getSurface());

	tb[0].toucheBas(w.getSurface());

	tb[0].collisionVaisseau(v.getX(), w.getSurface());

	v.affiche(w.getSurface());
}
Vaisseau* Jeux::getVaisseau(){
	return &this->v;
}

const int Jeux::MAX_COL = 10;
const int Jeux::MAX_LIGNE = 10;