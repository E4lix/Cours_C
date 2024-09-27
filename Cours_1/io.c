#include <stdio.h>
#include "io.h"
#include "individu.h"

void Afficher_Individu(struct Individu i) {
    printf("Nom : %s, Age : %d, Taille : %f \n",i.Nom, i.Age, i.Taille);
}

struct Individu Saisir_Individu() {
    struct Individu individu;

    printf("Saisir un nom : ");
    scanf("%s", individu.Nom);
    printf("Saisir un âge : ");
    scanf("%d", &(individu.Age));
    printf("Saisir une taille : ");
    scanf("%f", &(individu.Taille));

    return individu;
}