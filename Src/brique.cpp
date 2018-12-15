#include "../Header/brique.h"

Brique::Brique(): solidite(1), longueur(2), largeur(1), points(50), x(10), y(10){

}
Brique::Brique(int x, int y, int solidite, int longueur, int largeur, int points){
    this->x = x;
    this->y = y;
    this->solidite = solidite;
    this->longueur = longueur;
    this->largeur = largeur;
    this->points = points;
}

//Brique::Brique(int x, int y): solidite(1), longueur(2), largeur(1), points(50){
//    this->x = x;
//    this->y = y;
//}

//: m_vie(100), m_nom("Jack")
Brique::~Brique(){

}

int Brique::getSolidite(){
    return solidite;
}

int Brique::getLongueur(){
    return longueur;
}

int Brique::getLargeur(){
    return largeur;
}

int Brique::getPoints(){
    return points;
}

int Brique::getX(){
    return x;
}

int Brique::getY(){
    return y;
}
