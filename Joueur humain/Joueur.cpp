#include "joueurhu.h"
#include <iostream.h> 
JoueurHumain::JoueurHumain() 
{ 
  cout << "Vous faites le joueur. Quel est votre nom ? ";
  cin >> nom; 
} 
int JoueurHumain::Propose(int diag) 
{ 
AfficheNom();
int p; 
cout << ", votre proposition ? ";
cin >> p; 
return p; 
} 
