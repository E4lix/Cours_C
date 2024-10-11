/* Auteur : Yacine DJEMAI */
/* Date : 11 Octobre 2024 */
/* Version 0.2 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "vehicule.h"
#include "pile.h"

int main(){
    // Initialisation de la seed pour la fonction rand
    srand(time(NULL));

    // Création de variables véhicule
    struct Vehicule *V1 = (struct Vehicule *)malloc(sizeof(struct Vehicule));
    struct Vehicule *V2 = (struct Vehicule *)malloc(sizeof(struct Vehicule));
    struct Vehicule *V3 = (struct Vehicule *)malloc(sizeof(struct Vehicule));
    struct Vehicule *V4 = (struct Vehicule *)malloc(sizeof(struct Vehicule));

    // Initialisation des variables
    init_Vehicule(V1, "Ferrari", rand()%1001, rand()%250);
    init_Vehicule(V2, "Mercedes", rand()%1001, rand()%250);
    init_Vehicule(V3, "Porsche", rand()%1001, rand()%250);
    init_Vehicule(V4, "BMW", rand()%1001, rand()%250);

    // Saisis d'un véhicule par l'utilisateur
    // saisir_Vehicule(Voiture);

    // Affichage des caractéristiques du véhicule
    print_Vehicule(V1);

    // Initialisation d'une pile
    init_Pile();

    // Empilement de quelques véhicules
    empiler(V1);
    empiler(V2);
    empiler(V3);
    empiler(V4);

    // Affichage de la pile
    print_Pile();

    // Libération de la mémoire
    free(V1);
    free(V2);
    free(V3);
    free(V4);
}