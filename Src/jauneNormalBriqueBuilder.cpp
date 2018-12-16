#include "../Header/jauneNormalBriqueBuilder.h"
#include "../Header/planche.h"

JauneNormalBriqueBuilder::~JauneNormalBriqueBuilder(){

}


void JauneNormalBriqueBuilder::buildSolidite(){
	normalBrique->setSolidite(NormalBrique::SOLIDITE_NORMAL_BRIQUE);
}

void JauneNormalBriqueBuilder::buildSprite(){
	normalBrique->setSprites({96, 16, 15, 30 }, Planche("./Arkanoid_sprites.bmp").getSprites());
}


void JauneNormalBriqueBuilder::buildPoints(){
	normalBrique->setPoints(50);
}