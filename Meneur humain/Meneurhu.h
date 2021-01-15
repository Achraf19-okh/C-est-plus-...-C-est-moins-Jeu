#ifndef _MENEURHU_H 
#define _MENEURHU_H 
#include "meneur.h" 
class MeneurHumain : public Meneur 
{
public: 
MeneurHumain();
int Reponds(int prop); 
}; 
#endif 