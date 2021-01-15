#include "meneuror.h" 
#include <iostream.h> 
#include <string.h> 
JoueurOrdinateur::JoueurOrdinateur() 
{ 
strcpy(nom, "l'ordinateur");
min = 1;
max = 100; 
proposition = 0; 
} 
int JoueurOrdinateur::Propose(int diag) 
{ 
if (diag == 1)
 min = proposition + 1; 
else 
max = proposition - 1;
proposition = (min + max) / 2; 
AfficheNom(); 
cout << " propose : " << proposition << "\n"; 
return proposition; 
} 
