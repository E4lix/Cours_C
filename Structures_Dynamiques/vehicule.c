#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "vehicule.h"

// Initialiser un véhicule
void init_Vehicule(struct Vehicule *vehicule, const char *n, int p, float vmax){
    strcpy(vehicule->nom_module, n);
    vehicule->puissance = p;
    vehicule->vitesse_max = vmax;
}

// Allouer de l'espace mémoire à une variable de type véhicule
struct Vehicule *allouer_Vehicule(){
    struct Vehicule *v;
    v = malloc(sizeof(struct Vehicule));

    return v;
}

// Affichage des caractéristiques d'un véhicule
void print_Vehicule(struct Vehicule *vehicule){
    printf("Nom : %s \n", vehicule->nom_module);
    printf("Puissance : %d Chevaux \n", vehicule->puissance);
    printf("Vitesse Max : %f km/h \n", vehicule->vitesse_max);
}