#include "meneurhu.h" 
#include <iostream.h> 
MeneurHumain::MeneurHumain() 
{ 
cout << "Vous faites le meneur. Quel est votre nom ? ";
cin >> nom;
cout << "Choisissez un numero secret entre 1 et 100.\n\n"; 
} 
int MeneurHumain::Reponds(int prop) 
{ 
AfficheNom();
cout << ", indiquez votre réponse :";
int r;
cout << "\n0 - C'est exact"; 
cout << "\n1 - C'est plus"; 
cout << "\n2 - C'est moins"; 
cout << "\nVotre choix (0, 1 ou 2) ? "; 
cin >> r; 
return r; 
} 