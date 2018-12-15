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
    static Jeux *getInstance();
    void draw();
  	void joue();
    Window w;
		Planche p;
		Balle tb[3];
		Vaisseau* getVaisseau();
    void setQuit(bool q);
    bool getQuit();

	private:
    static Jeux *instance;
		Vaisseau v;
		Brique* briques;
		static const int MAX_COL;
		static const int MAX_LIGNE;
    bool quit;
};


#endif //JEUX_H
