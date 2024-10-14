/* Auteur : Yacine DJEMAI */
/* Date : 11 Octobre 2024 */
/* Version 1.0 */

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
    struct Vehicule *V1;
    struct Vehicule *V2;
    struct Vehicule *V3;
    struct Vehicule *V4;

    struct Vehicule *V5;

    // Initialisation des variables
    printf("Initialisation des véhicules \n");
    V1 = init_Vehicule("Ferrari", rand()%1001, rand()%250);
    V2 = init_Vehicule("Mercedes", rand()%1001, rand()%250);
    V3 = init_Vehicule("Porsche", rand()%1001, rand()%250);
    V4 = init_Vehicule("BMW", rand()%1001, rand()%250);

    // Saisis d'un véhicule par l'utilisateur
    // saisir_Vehicule(Voiture);

    // Affichage des caractéristiques du véhicule
    // print_Vehicule(V1);

    // Initialisation d'une pile
    printf("Initialisation de la pile \n");
    init_Pile();

    // Empilement de quelques véhicules
    printf("Empilement des véhicules \n");
    empiler(V1);
    empiler(V2);
    empiler(V3);
    empiler(V4);

    // Affichage de la pile
    printf("Premier print_Pile() \n");
    print_Pile();

    printf("Deuxième print_Pile() \n");
    print_Pile();

    // Recherche d'un élement
    V5 = rechercher_Vehicule("Ferrari");

    // Affichage du véhicule cherché
    printf("Véhicule recherché %s, Véhicule Trouvé : \n", "Ferrari");
    print_Vehicule(V5);

    // Libération de la mémoire
    free(V1);
    free(V2);
    free(V3);
    free(V4);
}