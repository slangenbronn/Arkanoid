#include "../Header/jeux.h"

Jeux::Jeux(): w(600, 600), v(this->p.getSprites(), this->w.getWidth()/2 - 128/2, this->w.getHeight() - 32, 128) {
	tb[0] = Balle(w.getSurface());
	quit = false;
}

bool Jeux::getQuit(){
	return quit;
}

void Jeux::setQuit(bool q){
	quit = q;
}

void Jeux::draw(){

	w.remplir(p.getSprites());

	tb[0].afficheBalle(p.getSprites(), w.getSurface());

	tb[0].deplacement(tb[0].getSpeedX(), tb[0].getSpeedY());

	tb[0].collisionBord(w.getSurface());

	if(tb[0].toucheBas(w.getSurface())){
		tb[0].reset(w.getSurface());
	}

	tb[0].collisionVaisseau(v.getX(), w.getSurface());

	v.affiche(w.getSurface());
}

Vaisseau* Jeux::getVaisseau(){
	return &this->v;
}

const int Jeux::MAX_COL = 10;
const int Jeux::MAX_LIGNE = 10;

void Jeux::joue(){
	SDL_Event event;
	while (!getQuit() && SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			case SDL_QUIT:
				setQuit(true);
				break;
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
					// touche clavier
					case SDLK_LEFT:
						if(v.getX()-MAX_LIGNE >= 0){
								v.setX(v.getX()-MAX_LIGNE);
						}
						break;
					case SDLK_RIGHT:
						if(v.getX()+MAX_LIGNE+128 <= w.getWidth()){
								v.setX(v.getX()+MAX_LIGNE);
						}
						break;
					case SDLK_ESCAPE: quit = true; break;
					default: break;
				}
				break;
			case SDL_MOUSEMOTION:
				if((v.getX()+event.motion.xrel+128 <= w.getWidth()) and (v.getX()+event.motion.xrel >= 0)){
						v.setX(v.getX()+event.motion.xrel);
				}
				break;
			case SDL_MOUSEBUTTONDOWN:
				std::cout << "mouse click " << event.button.button << std::endl;
				break;
			default: break;
		}
	}
}
