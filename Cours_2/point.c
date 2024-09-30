#include <stdio.h>
#include <stdlib.h>
#include "point.h"

void afficher_Point(struct Point p) {
    printf("Nom : %c, x = %f, y = %f \n", p.nom, p.x, p.y);
}

struct Point saisir_Point() {
    struct Point p;

    printf("Entrer un nom : ");
    scanf(" %c", &(p.nom)); // On met un espace avant "%c" car sinon ça prend une valeur vide
    printf("Entrer une valeur x : ");
    scanf("%f", &(p.x));
    printf("Entrer une valeur y : ");
    scanf("%f", &(p.y));     

    return p;
}

void initialiser_Point(struct Point *pp){
    printf("Entrer un nom : ");
    scanf(" %c", &(pp->nom)); // On met un espace avant "%c" car sinon ça prend une valeur vide
    printf("Entrer une valeur x : ");
    scanf("%f", &(pp->x));
    printf("Entrer une valeur y : ");
    scanf("%f", &(pp->y));     
}

struct Point *allouer_Point(){
    struct Point *pp;
    pp = malloc(sizeof(struct Point));

    return pp;
}

void liberer_Point(struct Point *pp){
    free(pp);
}