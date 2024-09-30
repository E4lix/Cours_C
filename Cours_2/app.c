#include <stdio.h>
#include <stdlib.h>
#include "point.h"

int main() {
    // Déclarer un tableau de 5 variables de type Point
    // struct Point Tab[3];

    // for(int i = 0; i < 3; i++){
    //     Tab[i] = saisir_Point();
    // }

    // for(int i = 0; i < 3; i++){
    //     afficher_Point(Tab[i]);
    // }

    // Allouer de la mémoire
    struct Point *pp = allouer_Point();

    // Saisir un point
    initialiser_Point(pp);

    // Afficher le point
    afficher_Point(*pp);

    // Libérer la mémoire
    liberer_Point(pp);
}