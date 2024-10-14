/* Auteur : Yacine DJEMAI */
/* Date : 11 Octobre 2024 */

#ifndef VEHICULE_H
#define VEHICULE_H

typedef struct Vehicule {
    char nom_module[20];
    int puissance;
    float vitesse_max;
}Vehicule;

// Initialiser un véhicule
struct Vehicule *init_Vehicule(const char *n, int p, float vmax);

// Allouer de l'espace pour un vehicule
// struct Vehicule *allouer_Vehicule();

// Affichage des caractéristiques d'un véhicule
void print_Vehicule(struct Vehicule *vehicule);

// Saisir les caractéristiques d'un véhicule
void saisir_Vehicule(struct Vehicule *vehicule);

#endif