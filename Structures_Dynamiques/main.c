#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "vehicule.h"

int main(){
    // Initialisation de la seed pour la fonction rand
    srand(time(NULL));

    // Création d'une variable véhicule
    struct Vehicule *Voiture = (struct Vehicule *)malloc(sizeof(struct Vehicule));

    // Initialisation d'un véhicule
    init_Vehicule(Voiture, "Ferrari", rand()%1001, rand()%250);

    // Affichage des caractéristiques du véhicule
    print_Vehicule(Voiture);

}