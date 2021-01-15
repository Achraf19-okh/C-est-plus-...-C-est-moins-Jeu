#ifndef _JOUEUROR_H 
#define _JOUEUROR_H 
#include "joueur.h" 
class JoueurOrdinateur : public Joueur 
{ 
public: 
    JoueurOrdinateur();
    int Propose(int diag); 
private: int min, max, proposition; 
}; 
#end if 