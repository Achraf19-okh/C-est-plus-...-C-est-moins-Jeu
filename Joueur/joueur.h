#ifndef _JOUEUR_H 
#define _JOUEUR_H 
#include "acteur.h" 
class Joueur : public Acteur 
{ 
public: 
       virtual int Propose(int diag); 
};
#endif 
