#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pile.h"
#include "vehicule.h"

#define TAILLE_PILE 20

Vehicule **Tab;
int Curseur = -1;

// Initialiser la pile
void init_Pile(){
    Tab = calloc(TAILLE_PILE, sizeof(Vehicule));
}

// Empiler un vehicule
void empiler(Vehicule *v){
    if(Curseur == TAILLE_PILE){
        printf("La pile est pleine \n");
    }
    else{
        Tab[++Curseur] = v;
    }
}

// Dépiler un vehicule 
// Vehicule *depiler(){
//     if(Curseur == -1){
//         printf("La pile est vide \n");
//     }
//     else{
//         return Tab[Curseur--];
//     }
// }

// Affichage de la pile
void print_Pile(){
    for(int i = Curseur; i > -1; i--){
        print_Vehicule(Tab[i]);
    }
}