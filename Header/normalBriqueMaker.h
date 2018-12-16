#ifndef NORMALBRIQUEMAKER_H
#define NORMALBRIQUEMAKER_H
#include "normalBriqueBuilder.h"

class NormalBriqueMaker{
public:
	NormalBrique* getNormalBrique();
	void makeNormalBrique(NormalBriqueBuilder* builder);
private:
	NormalBriqueBuilder* normalBriqueBuilder;
};
#endif