#ifndef NORMALBRIQUEBUILDER_H
#define NORMALBRIQUEBUILDER_H

#include "normalBrique.h"

#include <memory>

class NormalBriqueBuilder
{
public:
	virtual ~NormalBriqueBuilder() {};
	NormalBrique* getNormalBrique();
	void createNewNormalBrique();

	virtual void buildSolidite() = 0;
	virtual void buildSprite() = 0;
	virtual void buildPoints() = 0;
protected:
	std::unique_ptr<NormalBrique> normalBrique;
};
#endif