/* Auteur : Yacine DJEMAI */
/* Date : 11 Octobre 2024 */

#include "vehicule.h"

#ifndef PILE_H
#define PILE_H

// Initialiser la pile
void init_Pile();

// Empiler un vehicule
void empiler(Vehicule *v);

// Dépiler un vehicule 
Vehicule *depiler();

// Affichage de la pile
void print_Pile();

#endif