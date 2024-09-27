#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io.h"
#include "individu.h"
#include "allocation.h"

int main() {
    struct Individu Yacine = Saisir_Individu();
    
    struct Individu *i = allouer_Individu();
    initialiser_Individu(i);

    Afficher_Individu(*i);
    Afficher_Individu(Yacine);

    strcpy(Yacine.Nom, "Mika");
    Afficher_Individu(Yacine);

    liberer_Individu(i);
}


