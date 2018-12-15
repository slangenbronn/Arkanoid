#ifndef JEUX_H
#define JEUX_H

#include "windows.h"
#include "planche.h"
#include "balle.h"
#include "vaisseau.h"



class Jeux
{
    public:
 		Jeux();
    void draw();
    Window w;
	  Planche p;
		Vaisseau v;
		Balle tb[3];
};

#endif //JEUX_H
