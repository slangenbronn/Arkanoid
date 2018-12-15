#include "../Header/jeux.h"
#include "../Header/brique.h"
#include "../Header/normalBrique.h"

const int Jeux::MAX_COL = 25;
const int Jeux::MAX_LIGNE = 13;

Jeux::Jeux(): w(600, 600), v(this->p.getSprites(), this->w.getWidth()/2 - 128/2, this->w.getHeight() - 32, 128),
	p2("./Arkanoid_sprites.bmp") {
	tb[0] = Balle(this->p.getSprites(), w.getSurface());
	this->brique = new NormalBrique(0, 0, 30, 15, {0, 0, 30, 15}, p2.getSprites(), 1, 50);

	//this->briques = std::vector<Brique*>(MAX_COL);
	//this->briques[0] = new NormalBrique(60,60, {0, 0, 31, 15}, p2.getSprites());
	
	this->briques = std::vector<std::vector<Brique*>>(MAX_LIGNE);
	for (int i = 0; i < MAX_LIGNE; ++i){
		this->briques[i] = std::vector<Brique*>(MAX_COL);	
	}

	this->briques[0][0] = new NormalBrique(60,60, {0, 0, 30, 15}, p2.getSprites());

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

	tb[0].affiche(w.getSurface());

	tb[0].deplacement(tb[0].getSpeedX(), tb[0].getSpeedY());

	tb[0].collisionBord(w.getSurface());

	if(tb[0].toucheBas(w.getSurface())){
		tb[0].reset(w.getSurface());
	}

	tb[0].collisionVaisseau(v.getX(), w.getSurface());

	brique->affiche(w.getSurface());


	for (int i=0; i < MAX_LIGNE; ++i){
		for (int j = 0; j < MAX_COL; ++j){
			if(briques[i][j] != NULL){
				briques[i][j]->affiche(w.getSurface());
			}
		}
	}

	v.affiche(w.getSurface());
}

Vaisseau* Jeux::getVaisseau(){
	return &this->v;
}


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


Jeux::~Jeux(){
	delete(brique);
}