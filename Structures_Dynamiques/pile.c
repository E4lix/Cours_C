/* Auteur : Yacine DJEMAI */
/* Date : 11 Octobre 2024 */

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
    int TailleTab = -1;

    // Tant qu'on a pas vidé la pile, on continue
    while(Curseur > -1){
        // Dépilement et stockage du véhicule en haut de la pile
        TabTemporaire[++TailleTab] = depiler();
        
        // Affichage du véhicule dépilé
        print_Vehicule(TabTemporaire[TailleTab]);
    }

    // Pour éviter d'inverser la pile, on parcours le tableau à l'envers (on commence par la fin)
    for(int i = TailleTab; i > -1; i--){
        empiler(TabTemporaire[i]);
    }
}

// Recherche d'un élément
Vehicule* rechercher_Vehicule(const char* nom_modele) {
    Vehicule *v;
    Vehicule *PileTemporaire[TAILLE_PILE]; // Pile temporaire pour réempiler les éléments
    int V_Trouve = 0; // Booleen vrai si on trouve l'élément cherché
    int sommet_temp = -1; // Curseur de la pile temporaire

    // Recherche de l'élément 
    while (Curseur != -1) {
        v = depiler(); // Dépilement d'un véhicule

        if (strcmp(v->nom_module, nom_modele) == 0) {
            V_Trouve = 1; // Élément trouvé
            break; 
        }

        // Si ce n'est pas l'élément recherché, on l'empile dans la pile temporaire
        PileTemporaire[++sommet_temp] = v;
    }

    // Réempiler les éléments de la pile principale
    while (sommet_temp > -1) {
        empiler(PileTemporaire[sommet_temp--]);
        }

    // Si l'élément est trouvé, on le renvoie
    if (V_Trouve) {
        return v;
    } 
    else {
        return NULL;
    }
}
