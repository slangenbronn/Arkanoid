#include "../Header/normalBriqueMaker.h"

NormalBrique* NormalBriqueMaker::getNormalBrique(){
	return normalBriqueBuilder->getNormalBrique();
}

void NormalBriqueMaker::makeNormalBrique(NormalBriqueBuilder* builder){
	normalBriqueBuilder = builder;
	normalBriqueBuilder->createNewNormalBrique();
	//normalBriqueBuilder->buildSprite();
	//normalBriqueBuilder->buildSolidite();
	//normalBriqueBuilder->buildPoints();
}	