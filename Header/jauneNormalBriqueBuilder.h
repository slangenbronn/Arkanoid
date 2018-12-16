#ifndef JAUNENORMALBRIQUEBUILDER_H
#define JAUNENORMALBRIQUEBUILDER_H
#include "normalBriqueBuilder.h"

class JauneNormalBriqueBuilder : public NormalBriqueBuilder{
public:
	virtual ~JauneNormalBriqueBuilder();

	virtual void buildSolidite();
	virtual void buildSprite();
	virtual void buildPoints();
};
#endif