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
    void joue();
    Window w;
	  Planche p;
		Vaisseau v;
		Balle tb[3];
    void setQuit(bool q);
    bool getQuit();

  private:
    bool quit;
};

#endif //JEUX_H
