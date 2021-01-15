#ifndef _JOUEURH_H 
#define _JOUEURHU_H 
#include "joueur.h" 
class JoueurHumain : public Joueur 
{ 
public:
 JoueurHumain();
 int Propose(int diag); 
}; 
#endif 
