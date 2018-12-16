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
    static Jeux *getInstance();
    //static Planche *getPlanche2();
    void draw();
  	void joue();
    Window w;
		Planche p;
		Balle tb[3];
		Vaisseau* getVaisseau();
    void setQuit(bool q);
    bool getQuit();

	private:
		static Planche P2;
    static Jeux *instance;
		Vaisseau v;
		static const int MAX_COL;
		static const int MAX_LIGNE;
		std::vector<std::vector<Brique*>> briques;
    bool quit;
};


#endif //JEUX_H
