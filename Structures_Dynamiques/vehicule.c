/* Auteur : Yacine DJEMAI */
/* Date : 11 Octobre 2024 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "vehicule.h"

// Initialiser un véhicule
struct Vehicule *init_Vehicule(const char *n, int p, float vmax){
    struct Vehicule *v;
    v = malloc(sizeof(struct Vehicule));

    strcpy(v->nom_module, n);
    v->puissance = p;
    v->vitesse_max = vmax;

    return v;
}

// Allouer de l'espace mémoire à une variable de type véhicule
// struct Vehicule *allouer_Vehicule(){
//     struct Vehicule *v;
//     v = malloc(sizeof(struct Vehicule));

//     return v;
// }

// Affichage des caractéristiques d'un véhicule
void print_Vehicule(struct Vehicule *vehicule){
    printf("Nom : %s \n", vehicule->nom_module);
    printf("Puissance : %d Chevaux \n", vehicule->puissance);
    printf("Vitesse Max : %f km/h \n", vehicule->vitesse_max);
}

// Saisir les caractéristiques d'un véhicule
void saisir_Vehicule(struct Vehicule *vehicule){
    char nom_vehicule[20] = "";
    int p = 0;
    float v_max = 0.0;

    printf("Saisir un nom (20 caractères max): ");
    scanf("%s", nom_vehicule);

    printf("Saisir une Puissance : ");
    scanf("%d", &p);

    printf("Saisir une Vitesse max : ");
    scanf("%f", &v_max);

    strcpy(vehicule->nom_module, nom_vehicule);
    vehicule->puissance = p;
    vehicule->vitesse_max = v_max;
}