#ifndef _MENEUR_H
#define _MENEUR_H 
#include "acteur.h" 
class Meneur : public Acteur
{
public: 
virtual int Reponds(int prop); 
}; 
#endif 