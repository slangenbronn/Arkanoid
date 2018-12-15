#include "jeux.h"

Jeux::Jeux(){
	tb[0] = Balle(w.getSurface());
}

void Jeux::draw(){

	w.remplir(p.getSprites());

	tb[0].afficheBalle(p.getSprites(), w.getSurface());

	tb[0].deplacement(tb[0].getSpeedX(), tb[0].getSpeedY());

	tb[0].collisionBord(w.getSurface());

	tb[0].toucheBas(w.getSurface());

	tb[0].collisionVaisseau(v.getVault(), w.getSurface());

	v.affiche(p.getSprites(), w.getSurface());
}
