#include <stdio.h>
#include <stdlib.h>
#include "allocation.h"
#include "io.h"

struct Individu *allouer_Individu(){
    struct Individu *pi;
    pi = malloc(sizeof(struct Individu));

    return pi;
}

void liberer_Individu(struct Individu *pi){
    free(pi);
}

void initialiser_Individu(struct Individu *pi){
    printf("Saisir un nom : ");
    scanf("%s", pi->Nom);
    printf("Saisir un âge : ");
    scanf("%d", &(pi->Age));
    printf("Saisir une taille : ");
    scanf("%f", &(pi->Taille));
}