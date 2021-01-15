#include "meneur.h" 
#include "meneurhu.h" 
#include "meneuror.h" 
#include "joueur.h" 
#include "joueurhu.h" 
#include "joueuror.h" 
#include <iostream h> 
void main() { 
cout << "\n\n\tJEU DU C++, C--\n\n";
Joueur *j; 
Meneur *m; 
// distribution des roles 
char rep; 
cout << "Qui est le meneur (h = humain, o = ordinateur) ?
cin >> rep; 
if (rep == 'h') 
m = new MeneurHumain; 
else 
m = new MeneurOrdinateur; 
cout << "Qui est le joueur (h = humain, o = ordinateur) ? ";
cin >> rep; 
if (rep == 'h')
j = new JoueurHumain; 
else 
j = new JoueurOrdinateur; 
// deroulement de la partie 
int p, d = 1, cpt = 0; 
do { 
p = j -> Propose(d); 
d = m -> Reponds(p); 
cpt++; 
} 
while (d && cpt < 6); 
// affichage du resultat 
cout << "\nVainqueur : 
if (d) 
m -> AfficheNom(); 
else 
j -> AfficheNom(); 
} 
