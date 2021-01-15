#include "meneuror.h" 
#include <iostream.h> 
#include <string.h> 
#include <stdlib.h> 
#include <time.h> 
MeneurOrdinateur::MeneurOrdinateur() 
{ 
strcpy(nom, "l' ordinateur"); 
srand((unsigned) time(NULL)); 
numsecret = 1 + rand() % 100; 
} 
int MeneurOrdinateur::Reponds(int prop) { 
cout << "Reponse de "; 
AfficheNom(); 
if (prop < numsecret) { 
cout << " : c'est plus\n"; 
return 1; 
} else if (prop > numsecret) 
{ 
cout << " : c'est moins\n"; 
return 2; 
}
cout << " : c'est exact\n";
return 0;
}