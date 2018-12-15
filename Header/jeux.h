#ifndef JEUX_H
#define JEUX_H

#include "windows.h"
#include "planche.h"
#include "balle.h"
#include "vaisseau.h"
#include "brique.h"



class Jeux
{
    public:
 		Jeux();
	    void draw();
	    Window w;
		Planche p;
		
		Balle tb[3];
		Vaisseau* getVaisseau();
	private:
		Vaisseau v;
		Brique* briques;
		static const int MAX_COL;
		static const int MAX_LIGNE;
};

#endif //JEUX_H
