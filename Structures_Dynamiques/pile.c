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
Vehicule *depiler(){
    if(Curseur == -1){
        printf("La pile est vide \n");
    }
    else{
        return Tab[Curseur--];
    }
}

// Affichage de la pile
void print_Pile(){
    // Allocation de la taille nécéssaire pour le tableau (pour éviter l'erreur Segmentation Fault)
    Vehicule **TabTemporaire = malloc(sizeof(Vehicule) * 20); 

    // Initialisation d'un curseur virtuel pour le tableau
    int TailleTab = 0;

    // Tant qu'on a pas vidé la pile, on continue
    while(Curseur > -1){
        // Dépilement et stockage du véhicule en haut de la pile
        TabTemporaire[TailleTab] = depiler();
        
        // Affichage du véhicule dépilé
        print_Vehicule(TabTemporaire[TailleTab]);

        // Incrémentation du curseur virtuel
        TailleTab += 1;
    }

    // Pour éviter d'inverser la pile, on parcours le tableau à l'envers (on commence par la fin)
    for(int i = TailleTab-1; i > -1; i--){
        empiler(TabTemporaire[i]);
    }
}