#ifndef JEUX_H
#define JEUX_H

#include <vector>

#include "windows.h"
#include "planche.h"
#include "balle.h"
#include "vaisseau.h"
#include "brique.h"

class Jeux
{
  public:
 		Jeux();
		~Jeux();
    void draw();
  	void joue();
    Window w;
		Planche p;
		Balle tb[3];
		Vaisseau* getVaisseau();
    void setQuit(bool q);
    bool getQuit();

	private:
		Planche p2;
		Vaisseau v;
		static const int MAX_COL;
		static const int MAX_LIGNE;
		std::vector<std::vector<Brique*>> briques;
		Brique* brique;
    bool quit;
};

#endif //JEUX_H
