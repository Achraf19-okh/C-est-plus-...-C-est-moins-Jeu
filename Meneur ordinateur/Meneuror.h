#ifndef _MENEUROR_H 
#define -MENEUROR_H 
#include "meneur.h" 
class MeneurOrdinateur : public Meneur 
{ 
public: MeneurOrdinateur(); 
int Reponds(int prop); 
private: 
int numsecret; 
}; 
#endif 