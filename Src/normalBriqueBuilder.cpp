#include "../Header/normalBriqueBuilder.h"

NormalBrique* NormalBriqueBuilder::getNormalBrique(){
	return normalBrique.release();
}

void NormalBriqueBuilder::createNewNormalBrique(){
	normalBrique = std::make_unique<NormalBrique>();
}